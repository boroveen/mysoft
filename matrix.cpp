#include <ncurses.h>
#include <stdlib.h>
using namespace std;
int main(){
int row,cal;
initscr();
noecho();
curs_set(0);
raw();
keypad(stdscr,true);
start_color();
init_pair(1, COLOR_GREEN, COLOR_BLACK);
init_pair(2, COLOR_WHITE, COLOR_BLACK);
attron(COLOR_PAIR(2));
getmaxyx(stdscr,row,cal);
//hello
mvprintw(row/2,cal/2-5,"hello world");
getch();
halfdelay(1);
attron(COLOR_PAIR(1));
for(int i=0; i<11; i++){
mvprintw(row/2,cal/2-6," ");
for(int g=0 ;g<i; g++) printw("%d",rand() % 2);
getch();
}
bool gg=false;
bool verh=false, niz=false;
while(!gg){
clear();
getmaxyx(stdscr,row,cal);
mvprintw(row/2,cal/2-6," ");
int rund1=1;
for(int i=0; i<11; i++){
int rund=rand() % 11;
if(rund1==rund){
if(rund1==1) printw("h");
if(rund1==2) printw("e");
if(rund1==3) printw("l");
if(rund1==4) printw("l");
if(rund1==5) printw("o");
if(rund1==6) printw(" ");
if(rund1==7) printw("w");
if(rund1==8) printw("o");
if(rund1==9) printw("r");
if(rund1==10) printw("l");
if(rund1==11) printw("d");
}
else printw("%d",rand() % 2);
rund1++;
}
for(int i=0; i<cal; i++){
if(!niz) for(int ii=0; ii<rand() % row; ii++) mvprintw(row-ii,i,"%d",rand() % 2);
if(!verh) for(int ii=0; ii<rand() % row; ii++) mvprintw(ii,i,"%d",rand() % 2);
}
switch(getch()){
case ERR: break;
case 410: clear(); break;
case 259:
case 119:
if(!verh) verh=true;
else verh=false;
break;
case 258:
case 115:
if(!niz) niz=true;
else niz=false;
break;
case 48: halfdelay(10); break;
case 49: halfdelay(1); break;
case 50: halfdelay(2); break;
case 51: halfdelay(3); break;
case 52: halfdelay(4); break;
case 53: halfdelay(5); break;
case 54: halfdelay(6); break;
case 55: halfdelay(7); break;
case 56: halfdelay(8); break;
case 57: halfdelay(9); break;
default: gg=true; break;
}
}
endwin();
return 0;
}
