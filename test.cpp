#include <ncurses.h>
using namespace std;
void Color(){
init_pair(1, COLOR_WHITE, COLOR_WHITE);
init_pair(2, COLOR_YELLOW, COLOR_YELLOW);
init_pair(3, COLOR_BLUE, COLOR_BLUE);
init_pair(4, COLOR_GREEN, COLOR_GREEN);
init_pair(5, COLOR_CYAN, COLOR_CYAN);
init_pair(6, COLOR_RED, COLOR_RED);
init_pair(7, COLOR_BLUE, COLOR_BLUE);
init_color(COLOR_MAGENTA,100,100,100);
init_pair(8,COLOR_MAGENTA,COLOR_MAGENTA);
init_color(COLOR_WHITE, 1000,1000,1000);
init_pair(9, COLOR_BLACK, COLOR_BLACK);
init_pair(10, COLOR_WHITE, COLOR_BLACK);
attron(COLOR_PAIR(1));
}
int main(){
bool gg=false;
int row,cal;
int y,x,y1,x1;
initscr();
noecho();
curs_set(0);
raw();
keypad(stdscr,true);
start_color();
while(!gg){
getmaxyx(stdscr,row,cal);
x1=cal/2/2/2, y1=0;
Color();
for(int ii=0; ii<8; ii++){
if(ii==0){
attron(COLOR_PAIR(1));
y1=0;
}
if(ii==1){
attron(COLOR_PAIR(2));
y1=x1;
}
if(ii==2){
attron(COLOR_PAIR(3));
y1=x1+x1;
}
if(ii==3){
attron(COLOR_PAIR(4));
y1=y1+x1;
}
if(ii==4){
attron(COLOR_PAIR(5));
y1=y1+x1;
}
if(ii==5){
attron(COLOR_PAIR(6));
y1=y1+x1;
}
if(ii==6){
attron(COLOR_PAIR(7));
y1=y1+x1;
}
if(ii==7){
attron(COLOR_PAIR(1));
y1=y1+x1;
}
mvprintw(0,y1, " ");
for(int i=0; i<row; i++){
for(int g=0; g<x1; g++) printw("#");
mvprintw(i,y1, " ");
}
}

y1=row/2/2;
attron(COLOR_PAIR(8));
mvprintw(row-y1, 0, "#");
for(int i=0; i<y1*cal; i++) printw("#");
attron(COLOR_PAIR(1));
mvprintw(row-y1/2,0,"#");
for(int i=0; i<y1/2*cal; i++) printw("#");

attron(COLOR_PAIR(9));
mvprintw(row/2,0,"#");
for(int i=0; i<cal-1; i++) printw("#");
attron(COLOR_PAIR(10));
mvprintw(row/2,cal/2-2,"test");

switch(getch()){
case 410: clear(); break;
default: gg=true; break;
}
}
endwin();
return 0;
}
