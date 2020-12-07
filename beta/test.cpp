#include <ncurses.h>
#include <stdlib.h>
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
init_pair(11,COLOR_WHITE,COLOR_BLUE);
attron(COLOR_PAIR(1));
}
int main(){
bool gg=false,Time1=true,Time2=false,Time4=false;
int row,cal;
int y,x,y1,x1,Time=10,Time3[3];
Time3[1]=1,Time3[2]=20,Time3[3]=20;
initscr();
noecho();
curs_set(0);
halfdelay(1);
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

//9 10
for(int i=0;i<Time;i++){
if(!Time1) Time--;
else Time=cal*row;
if(!Time2){
attron(COLOR_PAIR(9));
Time2=true;
}
else{
attron(COLOR_PAIR(1));
Time2=false;
}
mvprintw(rand() % row,rand() % cal,"#");
for(int g=0;g<rand() % cal;g++) printw("#");
}

attron(COLOR_PAIR(11));
if(!Time4){
Time3[3]=Time3[3]-1;
if(Time3[1]<0) Time1=false,Time4=true;
if(Time3[3]==0) Time3[3]=60,Time3[2]=Time3[2]-1;
if(Time3[2]==0) Time3[2]=60,Time3[1]=Time3[1]-1;
mvprintw(row/2,cal/2-3,"%d:%d:%d",Time3[1],Time3[2],Time3[3]);
}

switch(getch()){
case 410: clear(); break;
case 113: gg=true; break;
default: break;
}
}
endwin();
return 0;
}
