#include <ncurses.h>
#include <stdlib.h>
using namespace std;
int row,cal,Time=3,Color;
int a1=0,a2=0,a3=0,a=1;
int a4=1000,a5=1000,a6=1000,d=20;
int y,x,Jump=2,t=1,y3;
int y1,x1,k=0;
int y2,x2;
bool gg=false;
void color(){
if(a==1){
if(a1==1000){
//white
}
else{
a1=a1+50,a2=a2+50,a3=a3+50;
a4=a4-50,a5=a5-50,a6=a6-50;
init_color(COLOR_BLACK,a1,a2,a3);
init_color(COLOR_WHITE,a4,a5,a6);
init_pair(1,COLOR_WHITE,COLOR_BLACK);
init_pair(2,COLOR_BLACK,COLOR_BLACK);
attron(COLOR_PAIR(2));
mvprintw(0,0,"#");
for(int i=0;i<row*cal-1;i++) printw("#");
attron(COLOR_PAIR(1));
}
}
if(a==2){
a1=a1-50,a2=a2-50,a3=a3-50;
a4=a4+50,a5=a5+50,a6=a6+50;
init_color(COLOR_BLACK,a1,a2,a3);
init_color(COLOR_WHITE,a4,a5,a6);
init_pair(1,COLOR_WHITE,COLOR_BLACK);
init_pair(2,COLOR_BLACK,COLOR_BLACK);
attron(COLOR_PAIR(2));
mvprintw(0,0,"#");
for(int i=0;i<row*cal-1;i++) printw("#");
attron(COLOR_PAIR(1));
}
if(a==3){
//color
}
}
void sysgame(){
getmaxyx(stdscr,row,cal);
y1=row/2/2,x1=cal/2/2/2;
y=y+y1+y1+y1,x=x1;
y2=y2+y1+y1+y1,x2=cal-15;
y1=y;
}
void inpurt(){
switch(getch()){
case ERR: break;
case 113: gg=true; break;
case 32: if(Jump==3) Jump=1; break;
case 410: sysgame(); break;
default: break;
}
}
void logic(){
color();
halfdelay(Time);
if(Jump==1){
if(y==y1-23) Jump=2;
else y--;
}
if(Jump==2){
if(y==y1) Jump=3;
else y++;
}
if(k==1){
x2--;
if(x2==0){
y2=0,x2=0;
y3=row/2/2;
y2=y2+y3+y3+y3,x2=cal-15;
y3=y;
}
}
if(x==x2 && y==y2) gg=true;
}
void draw(){
clear();
mvprintw(1,0,"y: %d, x: %d",y,x);
mvprintw(0,0,"row: %d, cal: %d",row,cal);
mvprintw(2,0,"jump: %d",Jump);
mvprintw(3,0,"y1: %d, x1: %d",y2,x2);
/*
1
      ###
     #####
     #####   ##
 ##  #####   ##
 ##  ##########
 #############
  ########
     #####
     #####
     #####
5
*/
if(t==1){
mvprintw(y-8,x,"        #######");
mvprintw(y-7,x,"       ###### ##");
mvprintw(y-6,x,"#      ########");
mvprintw(y-5,x,"#     ######");
mvprintw(y-4,x,"##   #######");
mvprintw(y-3,x,"###########");
mvprintw(y-2,x," ########");
mvprintw(y-1,x,"   #   #");
mvprintw(y,x,"   ##  ##");
}
else if(t==2){
mvprintw(y-8,x,"        #######");
mvprintw(y-7,x,"       ###### ##");
mvprintw(y-6,x,"#      ########");
mvprintw(y-5,x,"#     ######");
mvprintw(y-4,x,"##   #######");
mvprintw(y-3,x,"###########");
mvprintw(y-2,x," ########");
mvprintw(y-1,x,"   #   #");
mvprintw(y,x,"   ##");
t=3;
}
else if(t==3){
mvprintw(y-8,x,"        #######");
mvprintw(y-7,x,"       ###### ##");
mvprintw(y-6,x,"#      ########");
mvprintw(y-5,x,"#     ######");
mvprintw(y-4,x,"##   #######");
mvprintw(y-3,x,"###########");
mvprintw(y-2,x," ########");
mvprintw(y-1,x,"   #   #");
mvprintw(y,x,"       ##");
t=2;
}
if(k==1){
mvprintw(y2-9,x2,"      ###");
mvprintw(y2-8,x2,"     #####");
mvprintw(y2-7,x2,"     #####   ##");
mvprintw(y2-6,x2," ##  #####   ##");
mvprintw(y2-5,x2," ##  ##########");
mvprintw(y2-4,x2," #############");
mvprintw(y2-3,x2,"  ########");
mvprintw(y2-2,x2,"     #####");
mvprintw(y2-1,x2,"     #####");
mvprintw(y2,x2,"     #####");
}
}
int main(){
initscr();
keypad(stdscr,true);
noecho();
curs_set(0);
start_color();
init_color(COLOR_BLACK,0,0,0);
init_pair(1, COLOR_WHITE,COLOR_BLACK);
attron(COLOR_PAIR(1));
sysgame();
draw();
getch();
t=2,k=1;
halfdelay(Time);
while(!gg){
inpurt();
logic();
draw();

}
init_color(COLOR_BLACK,0,0,0);
init_color(COLOR_WHITE,1000,1000,1000);
init_pair(1, COLOR_WHITE,COLOR_BLACK);
attron(COLOR_PAIR(1));
endwin();
return 0;
}
