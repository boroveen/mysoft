#include <ncurses.h>
using namespace std;
bool gg=false,Enter=true;
int black[3],white[3],red[3],green[3],blue[3],yellow[3],cyan[3],magenta[3];
int menu[2],row,cal;
void setup(){
for(int i=0;i<3;i++){
getmaxyx(stdscr,row,cal);
menu[0]=0,menu[1]=0;
black[i]=0,white[i]=0,red[i]=0,green[i]=0,blue[i]=0,yellow[i]=0,cyan[i]=0,magenta[i]=0;
}
for(int i=0;i<3;i++) black[i]=0;
for(int i=0;i<3;i++) white[i]=1000;
red[0]=1000,green[1]=1000,blue[2]=1000;
yellow[0]=1000,yellow[1]=1000;
cyan[1]=1000,cyan[2]=1000;
magenta[0]=600,magenta[2]=1000;
}
void color(){
//1
if(black[0]>1001) black[0]=0;
if(black[1]>1001) black[1]=0;
if(black[2]>1001) black[2]=0;

if(black[0]<0) black[0]=1000;
if(black[1]<0) black[1]=1000;
if(black[2]<0) black[2]=1000;
//2
if(white[0]>1001) white[0]=0;
if(white[1]>1001) white[1]=0;
if(white[2]>1001) white[2]=0;

if(white[0]<1) white[0]=1000;
if(white[1]<1) white[1]=1000;
if(white[2]<1) white[2]=1000;
//3
if(red[0]>1001) red[0]=0;
if(red[1]>1001) red[1]=0;
if(red[2]>1001) red[2]=0;

if(red[0]<0) red[0]=1000;
if(red[1]<0) red[1]=1000;
if(red[2]<0) red[2]=1000;
//4
if(green[0]>1001) green[0]=0;
if(green[1]>1001) green[1]=0;
if(green[2]>1001) green[2]=0;

if(green[0]<0) green[0]=1000;
if(green[1]<0) green[1]=1000;
if(green[2]<0) green[2]=1000;
//5
if(blue[0]>1001) blue[0]=0;
if(blue[1]>1001) blue[1]=0;
if(blue[2]>1001) blue[2]=0;

if(blue[0]<0) blue[0]=1000;
if(blue[1]<0) blue[1]=1000;
if(blue[2]<0) blue[2]=1000;
//6
if(yellow[0]>1001) yellow[0]=0;
if(yellow[1]>1001) yellow[1]=0;
if(yellow[2]>1001) yellow[2]=0;

if(yellow[0]<0) yellow[0]=1000;
if(yellow[1]<0) yellow[1]=1000;
if(yellow[2]<0) yellow[2]=1000;
//7
if(cyan[0]>1001) cyan[0]=0;
if(cyan[1]>1001) cyan[1]=0;
if(cyan[2]>1001) cyan[2]=0;

if(cyan[0]<0) cyan[0]=1000;
if(cyan[1]<0) cyan[1]=1000;
if(cyan[2]<0) cyan[2]=1000;
//8
if(magenta[0]>1001) magenta[0]=0;
if(magenta[1]>1001) magenta[1]=0;
if(magenta[2]>1001) magenta[2]=0;

if(magenta[0]<0) magenta[0]=1000;
if(magenta[1]<0) magenta[1]=1000;
if(magenta[2]<0) magenta[2]=1000;
//color
init_color(COLOR_BLACK,black[0],black[1],black[2]);
init_color(COLOR_WHITE,white[0],white[1],white[2]);
init_color(COLOR_RED,red[0],red[1],red[2]);
init_color(COLOR_GREEN,green[0],green[1],green[2]);
init_color(COLOR_BLUE,blue[0],blue[1],blue[2]);
init_color(COLOR_YELLOW,yellow[0],yellow[1],yellow[2]);
init_color(COLOR_CYAN,cyan[0],cyan[1],cyan[2]);
init_color(COLOR_MAGENTA,magenta[0],magenta[1],magenta[2]);
}
void draw(){
clear();
attron(COLOR_PAIR(1));
mvprintw(row-1,0,"menu[0]:%d, menu[1]:%d",menu[0],menu[1]);
if(!Enter) printw(" false");
else printw(" true");
mvprintw(0,0,"");
if(menu[0]==0) printw("> blackroud < r:%d g:%d b:%d >\n",black[0],black[1],black[2]);
else printw("blackroud < r:%d g:%d b:%d >\n",black[0],black[1],black[2]);

if(menu[0]==1) printw("> white < r:%d g:%d b:%d >\n",white[0],white[1],white[2]);
else printw("white < r:%d g:%d b:%d >\n",white[0],white[1],white[2]);
attron(COLOR_PAIR(2));
if(menu[0]==2) printw("> red < %d %d %d >\n",red[0],red[1],red[2]);
else printw("red < %d %d %d >\n",red[0],red[1],red[2]);
attron(COLOR_PAIR(3));
if(menu[0]==3) printw("> green < %d %d %d >\n",green[0],green[1],green[2]);
else printw("green < %d %d %d >\n",green[0],green[1],green[2]);
attron(COLOR_PAIR(4));
if(menu[0]==4) printw("> blue < %d %d %d >\n",blue[0],blue[1],blue[2]);
else printw("blue < %d %d %d >\n",blue[0],blue[1],blue[2]);
attron(COLOR_PAIR(5));
if(menu[0]==5) printw("> yellow < %d %d %d >\n",yellow[0],yellow[1],yellow[2]);
else printw("yellow < %d %d %d >\n",yellow[0],yellow[1],yellow[2]);
attron(COLOR_PAIR(6));
if(menu[0]==6) printw("> cyan < %d %d %d >\n",cyan[0],cyan[1],cyan[2]);
else printw("cyan < %d %d %d >\n",cyan[0],cyan[1],cyan[2]);
attron(COLOR_PAIR(7));
if(menu[0]==7) printw("> magenta < %d %d %d >\n",magenta[0],magenta[1],magenta[2]);
else printw("magenta < %d %d %d >\n",magenta[0],magenta[1],magenta[2]);
}
void input(){
if(!Enter){
switch(getch()){
case 10: Enter=true; break;
case 97:
case 260:
//1
if(menu[0]==0){
if(menu[1]==0) black[0]=black[0]-20;
if(menu[1]==1) black[1]=black[1]-20;
if(menu[1]==2) black[2]=black[2]-20;
}
//2
if(menu[0]==1){
if(menu[1]==0) white[0]=white[0]-20;
if(menu[1]==1) white[1]=white[1]-20;
if(menu[1]==2) white[2]=white[2]-20;
}
//3
if(menu[0]==2){
if(menu[1]==0) red[0]=red[0]-20;
if(menu[1]==1) red[1]=red[1]-20;
if(menu[1]==2) red[2]=red[2]-20;
}
//4
if(menu[0]==3){
if(menu[1]==0) green[0]=green[0]-20;
if(menu[1]==1) green[1]=green[1]-20;
if(menu[1]==2) green[2]=green[2]-20;
}
//5
if(menu[0]==4){
if(menu[1]==0) blue[0]=blue[0]-20;
if(menu[1]==1) blue[1]=blue[1]-20;
if(menu[1]==2) blue[2]=blue[2]-20;
}
//6
if(menu[0]==5){
if(menu[1]==0) yellow[0]=yellow[0]-20;
if(menu[1]==1) yellow[1]=yellow[1]-20;
if(menu[1]==2) yellow[2]=yellow[2]-20;
}
//7
if(menu[0]==6){
if(menu[1]==0) cyan[0]=cyan[0]-20;
if(menu[1]==1) cyan[1]=cyan[1]-20;
if(menu[1]==2) cyan[2]=cyan[2]-20;
}
//8
if(menu[0]==7){
if(menu[1]==0) magenta[0]=magenta[0]-20;
if(menu[1]==1) magenta[1]=magenta[1]-20;
if(menu[1]==2) magenta[2]=magenta[2]-20;
}
break;
case 100:
case 261:
//1
if(menu[0]==0){
if(menu[1]==0) black[0]=black[0]+20;
if(menu[1]==1) black[1]=black[1]+20;
if(menu[1]==2) black[2]=black[2]+20;
}
//2
if(menu[0]==1){
if(menu[1]==0) white[0]=white[0]+20;
if(menu[1]==1) white[1]=white[1]+20;
if(menu[1]==2) white[2]=white[2]+20;
}
//3
if(menu[0]==2){
if(menu[1]==0) red[0]=red[0]+20;
if(menu[1]==1) red[1]=red[1]+20;
if(menu[1]==2) red[2]=red[2]+20;
}
//4
if(menu[0]==3){
if(menu[1]==0) green[0]=green[0]+20;
if(menu[1]==1) green[1]=green[1]+20;
if(menu[1]==2) green[2]=green[2]+20;
}
//5
if(menu[0]==4){
if(menu[1]==0) blue[0]=blue[0]+20;
if(menu[1]==1) blue[1]=blue[1]+20;
if(menu[1]==2) blue[2]=blue[2]+20;
}
//6
if(menu[0]==5){
if(menu[1]==0) yellow[0]=yellow[0]+20;
if(menu[1]==1) yellow[1]=yellow[1]+20;
if(menu[1]==2) yellow[2]=yellow[2]+20;
}
//7
if(menu[0]==6){
if(menu[1]==0) cyan[0]=cyan[0]+20;
if(menu[1]==1) cyan[1]=cyan[1]+20;
if(menu[1]==2) cyan[2]=cyan[2]+20;
}
//8
if(menu[0]==7){
if(menu[1]==0) magenta[0]=magenta[0]+20;
if(menu[1]==1) magenta[1]=magenta[1]+20;
if(menu[1]==2) magenta[2]=magenta[2]+20;
}
break;
case 113: gg=true; break;
}
}
else{
switch(getch()){
case 113: gg=true; break;
case 119: // верх вниз
case 259:
if(menu[0]<1) menu[0]=7;
else menu[0]--;
break;
case 115:
case 258:
if(menu[0]>6) menu[0]=0;
else menu[0]++;
break;
case 97: // лево право
case 260:
if(menu[1]<1) menu[1]=2;
else menu[1]--;
break;
case 100:
case 261:
if(menu[1]>1) menu[1]=0;
else menu[1]++;
break;
case 10: Enter=false; break;
}
}
}
int main(){
initscr();
keypad(stdscr,true);
noecho();
//halfdelay(10);
curs_set(0);
start_color();
init_pair(1,COLOR_WHITE,COLOR_BLACK);
init_pair(2,COLOR_RED,COLOR_BLACK);
init_pair(3,COLOR_GREEN,COLOR_BLACK);
init_pair(4,COLOR_BLUE,COLOR_BLACK);
init_pair(5,COLOR_YELLOW,COLOR_BLACK);
init_pair(6,COLOR_CYAN,COLOR_BLACK);
init_pair(7,COLOR_MAGENTA,COLOR_BLACK);
setup();
while(!gg){
color();
draw();
input();
}
endwin();
return 0;
}
