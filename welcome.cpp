#include <ios>
#include <ncurses.h>
//#include <sys/utsname.h>
//#include <cstring>
using namespace std;
int a[8],c=1,c2=0;
bool a1=false;
void setup(){
for(int i=0;i<8;i++){
a[i]=0;
init_pair(i,COLOR_BLACK,COLOR_BLACK);
}
}
void color(int c1){
if(c==1){
if(!a1){
a[0]=a[0]+50;
if(a[0]==1000) c++;
}
else{
a[0]=a[0]-50;
if(a[0]==0) c++;
}
init_color(COLOR_WHITE,a[0],a[0],a[0]);
init_pair(1,COLOR_WHITE,COLOR_BLACK);
}
if(c==2){
if(!a1){
a[1]=a[1]+50;
if(a[1]==1000) c++;
}
else{
a[1]=a[1]-50;
if(a[1]==0) c++;
}
init_color(COLOR_RED,a[1],a[1],a[1]);
init_pair(2,COLOR_RED,COLOR_BLACK);
}
if(c==3){
if(!a1){
a[2]=a[2]+50;
if(a[2]==1000) c++;
}
else{
a[2]=a[2]-50;
if(a[2]==0) c++;
}

init_color(COLOR_GREEN,a[2],a[2],a[2]);
init_pair(3,COLOR_GREEN,COLOR_BLACK);
}
if(c==4){
if(!a1){
a[3]=a[3]+50;
if(a[3]==1000) c++;
}
else{
a[3]=a[3]-50;
if(a[3]==0) c++;
}

init_color(COLOR_BLUE,a[3],a[3],a[3]);
init_pair(4,COLOR_BLUE,COLOR_BLACK);
}
if(c==5){
if(!a1){
a[4]=a[4]+50;
if(a[4]==1000) c++;
}
else{
a[4]=a[4]-50;
if(a[4]==0) c++;
}

init_color(COLOR_YELLOW,a[4],a[4],a[4]);
init_pair(5,COLOR_YELLOW,COLOR_BLACK);
}
if(c==6){
if(!a1){
a[5]=a[5]+50;
if(a[5]==1000) c++;
}
else{
a[5]=a[5]-50;
if(a[5]==0) c++;
}

init_color(COLOR_CYAN,a[5],a[5],a[5]);
init_pair(6,COLOR_CYAN,COLOR_BLACK);
}
if(c==7){
if(!a1){
a[6]=a[6]+50;
if(a[6]==1000){
c=1;
a1=true;
}
}
else{
a[6]=a[6]-50;
if(a[6]==0){
c=1;
a1=false;
c2++;
if(c2==3) c2=0;
}
}

init_color(COLOR_MAGENTA,a[6],a[6],a[6]);
init_pair(7,COLOR_MAGENTA,COLOR_BLACK);
}
attron(COLOR_PAIR(c1));
}
int main(){
bool gg=false;
int row,cal;
setup();
initscr();
keypad(stdscr,true);
noecho();
halfdelay(1);
curs_set(0);
getmaxyx(stdscr,row,cal);
start_color();
init_color(COLOR_BLACK,0,0,0);
while(!gg){
clear();
if(c2==0){
color(1);
mvprintw(row/2-3,cal/2-7,"      /\\");
color(2);
mvprintw(row/2-2,cal/2-7,"     /  \\");
color(3);
mvprintw(row/2-1,cal/2-7,"    /\\   \\");
color(4);
mvprintw(row/2,cal/2-7,"   /      \\");
color(5);
mvprintw(row/2+1,cal/2-7,"  /   ,,   \\");
color(6);
mvprintw(row/2+2,cal/2-7," /   |  |  -\\");
color(7);
mvprintw(row/2+3,cal/2-7,"/_-''    ''-_\\");
}
else if(c2==1){
color(7);
mvprintw(row/2-3,cal/2-7,"      /\\");
color(6);
mvprintw(row/2-2,cal/2-7,"     /  \\");
color(5);
mvprintw(row/2-1,cal/2-7,"    /\\   \\");
color(4);
mvprintw(row/2,cal/2-7,"   /      \\");
color(3);
mvprintw(row/2+1,cal/2-7,"  /   ,,   \\");
color(2);
mvprintw(row/2+2,cal/2-7," /   |  |  -\\");
color(1);
mvprintw(row/2+3,cal/2-7,"/_-''    ''-_\\");
}
else if(c2==2){
color(1);
mvprintw(row/2+3,cal/2-7,"/");
mvprintw(row/2+3,cal/2+6,"\\");
color(2);
mvprintw(row/2+3,cal/2-6,"_");
mvprintw(row/2+3,cal/2+5,"_");
mvprintw(row/2+2,cal/2-6,"/");
mvprintw(row/2+2,cal/2+5,"\\");
color(3);
mvprintw(row/2+3,cal/2-5,"-");
mvprintw(row/2+3,cal/2+4,"-");
mvprintw(row/2+2,cal/2+4,"-");
mvprintw(row/2+1,cal/2-5,"/");
mvprintw(row/2+1,cal/2+4,"\\");
color(4);
mvprintw(row/2+3,cal/2-4,"'");
mvprintw(row/2+3,cal/2+3,"'");
mvprintw(row/2,cal/2-4,"/");
mvprintw(row/2,cal/2+3,"\\");
color(5);
mvprintw(row/2+3,cal/2-3,"'");
mvprintw(row/2+3,cal/2+2,"'");
mvprintw(row/2-1,cal/2-3,"/");
mvprintw(row/2-1,cal/2+2,"\\");
color(6);
mvprintw(row/2+2,cal/2-2,"|");
mvprintw(row/2+2,cal/2+1,"|");
mvprintw(row/2-1,cal/2-2,"\\");
mvprintw(row/2-2,cal/2+1,"\\");
mvprintw(row/2-2,cal/2-2,"/");
color(7);
mvprintw(row/2+1,cal/2-1,",");
mvprintw(row/2+1,cal/2,",");
mvprintw(row/2-3,cal/2-1,"/");
mvprintw(row/2-3,cal/2,"\\");
}
switch(getch()){
case ERR: break;
default: gg=true; break;
}
}
endwin();
return 0;
}
/*
      /\
     /  \
    /\   \
   /      \
  /   ,,   \
 /   |  |  -\
/_-''    ''-_\
*/
