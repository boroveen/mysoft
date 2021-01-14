#include <ncurses.h>
#include <stdlib.h>
using namespace std;
int row,cal,x[2],y[10],y1[10],g=0;
char name1[10],name2[10];
bool gg=false,player=false,restart=false,drawyy1=false;

void Input(){
switch(getch()){

case 'o':
case 'O':
if(!drawyy1) drawyy1=true;
else drawyy1=false;
break;

/*
1 2 3
4 5 6
7 8 9
*/

case 'w':
case 259:
if(y[1]==1) y[1]=0,y[7]=1;
else if(y[2]==1) y[2]=0,y[8]=1;
else if(y[3]==1) y[3]=0,y[9]=1;
else if(y[4]==1) y[4]=0,y[1]=1;
else if(y[5]==1) y[5]=0,y[2]=1;
else if(y[6]==1) y[6]=0,y[3]=1;
else if(y[7]==1) y[7]=0,y[4]=1;
else if(y[8]==1) y[8]=0,y[5]=1;
else if(y[9]==1) y[9]=0,y[6]=1;
break;

case 's':
case 258:
if(y[1]==1) y[1]=0,y[4]=1;
else if(y[2]==1) y[2]=0,y[5]=1;
else if(y[3]==1) y[3]=0,y[6]=1;
else if(y[4]==1) y[4]=0,y[7]=1;
else if(y[5]==1) y[5]=0,y[8]=1;
else if(y[6]==1) y[6]=0,y[9]=1;
else if(y[7]==1) y[7]=0,y[1]=1;
else if(y[8]==1) y[8]=0,y[2]=1;
else if(y[9]==1) y[9]=0,y[3]=1;
break;

case 'd':
case 261:
if(y[1]==1) y[1]=0,y[2]=1;
else if(y[2]==1) y[2]=0,y[3]=1;
else if(y[3]==1) y[3]=0,y[1]=1;
else if(y[4]==1) y[4]=0,y[5]=1;
else if(y[5]==1) y[5]=0,y[6]=1;
else if(y[6]==1) y[6]=0,y[4]=1;
else if(y[7]==1) y[7]=0,y[8]=1;
else if(y[8]==1) y[8]=0,y[9]=1;
else if(y[9]==1) y[9]=0,y[7]=1;
break;

case 'a':
case 260:
if(y[1]==1) y[1]=0,y[3]=1;
else if(y[2]==1) y[2]=0,y[1]=1;
else if(y[3]==1) y[3]=0,y[2]=1;
else if(y[4]==1) y[4]=0,y[6]=1;
else if(y[5]==1) y[5]=0,y[4]=1;
else if(y[6]==1) y[6]=0,y[5]=1;
else if(y[7]==1) y[7]=0,y[9]=1;
else if(y[8]==1) y[8]=0,y[7]=1;
else if(y[9]==1) y[9]=0,y[8]=1;
break;

case 10:
for(int i=0;i<10;i++){
g=i;
if(y[i]==1) i=10;
}
mvprintw(row/2,cal/2,"g:%d",g);
getch();
if(y1[g]==0){
if(!player){
player=true;
for(int i=0;i<10;i++)
if(y[i]==1) y1[i]=2;
}
else{
player=false;
for(int i=0;i<10;i++)
if(y[i]==1) y1[i]=3;
}
}
g=0;
break;

case 113:
bool gg1=false;
while(!gg1){
attron(COLOR_PAIR(4));
mvprintw(row/2,0," ");
for(int i=0;i<cal-1;i++) printw(" ");
mvprintw(row/2,cal/2-8,"n:exit y:not exit");
switch(getch()){
case 'y':
gg=true,gg1=true;
break;
case 'n':
gg1=true;
break;
}
}
break;
}
}

void Draw(){
clear();
attron(COLOR_PAIR(4));
//attron(COLOR_PAIR(1));
//for(int i=0;i<row;i++) mvprintw(i,cal/2,"|");

// |
for(int i=0;i<row;i++) mvprintw(i,x[2],"|");
for(int i=0;i<row;i++) mvprintw(i,x[2]+x[2]+x[2],"|");
// -
for(int i=0;i<cal;i++) mvprintw(x[1],i,"-");
for(int i=0;i<cal;i++) mvprintw(x[1]+x[1]+x[1],i,"-");

//draw

//1
if(y[1]==1){
attron(COLOR_PAIR(1));
if(!player) mvprintw(x[1]/2,x[2]/2,"X");
else mvprintw(x[1]/2,x[2]/2,"O");
}
else if(y1[1]==2){
attron(COLOR_PAIR(2));
mvprintw(x[1]/2,x[2]/2,"X");
}
else if(y1[1]==3){
attron(COLOR_PAIR(3));
mvprintw(x[1]/2,x[2]/2,"O");
}

//2
if(y[2]==1){
attron(COLOR_PAIR(1));
if(!player) mvprintw(x[1]/2,x[2]+x[2],"X");
else mvprintw(x[1]/2,x[2]+x[2],"O");
}
else if(y1[2]==2){
attron(COLOR_PAIR(2));
mvprintw(x[1]/2,x[2]+x[2],"X");
}
else if(y1[2]==3){
attron(COLOR_PAIR(3));
mvprintw(x[1]/2,x[2]+x[2],"O");
}

//3
if(y[3]==1){
attron(COLOR_PAIR(1));
if(!player) mvprintw(x[1]/2,cal-x[2]/2,"X");
else mvprintw(x[1]/2,cal-x[2]/2,"O");
}
else if(y1[3]==2){
attron(COLOR_PAIR(2));
mvprintw(x[1]/2,cal-x[2]/2,"X");
}
else if(y1[3]==3){
attron(COLOR_PAIR(3));
mvprintw(x[1]/2,cal-x[2]/2,"O");
}

//4
if(y[4]==1){
attron(COLOR_PAIR(1));
if(!player) mvprintw(x[1]+x[1],x[2]/2,"X");
else mvprintw(x[1]+x[1],x[2]/2,"O");
}
else if(y1[4]==2){
attron(COLOR_PAIR(2));
mvprintw(x[1]+x[1],x[2]/2,"X");
}
else if(y1[4]==3){
attron(COLOR_PAIR(3));
mvprintw(x[1]+x[1],x[2]/2,"O");
}

//5
if(y[5]==1){
attron(COLOR_PAIR(1));
if(!player) mvprintw(x[1]+x[1],x[2]+x[2],"X");
else mvprintw(x[1]+x[1],x[2]+x[2],"O");
}
else if(y1[5]==2){
attron(COLOR_PAIR(2));
mvprintw(x[1]+x[1],x[2]+x[2],"X");
}
else if(y1[5]==3){
attron(COLOR_PAIR(3));
mvprintw(x[1]+x[1],x[2]+x[2],"O");
}

//6
if(y[6]==1){
attron(COLOR_PAIR(1));
if(!player) mvprintw(x[1]+x[1],cal-x[2]/2,"X");
else mvprintw(x[1]+x[1],cal-x[2]/2,"O");
}
else if(y1[6]==2){
attron(COLOR_PAIR(2));
mvprintw(x[1]+x[1],cal-x[2]/2,"X");
}
else if(y1[6]==3){
attron(COLOR_PAIR(3));
mvprintw(x[1]+x[1],cal-x[2]/2,"O");
}

//7
if(y[7]==1){
attron(COLOR_PAIR(1));
if(!player) mvprintw(row-x[1]/2,x[2]/2,"X");
else mvprintw(row-x[1]/2,x[2]/2,"O");
}
else if(y1[7]==2){
attron(COLOR_PAIR(2));
mvprintw(row-x[1]/2,x[2]/2,"X");
}
else if(y1[7]==3){
attron(COLOR_PAIR(3));
mvprintw(row-x[1]/2,x[2]/2,"O");
}

//8
if(y[8]==1){
attron(COLOR_PAIR(1));
if(!player) mvprintw(row-x[1]/2,x[2]+x[2],"X");
else mvprintw(row-x[1]/2,x[2]+x[2],"O");
}
else if(y1[8]==2){
attron(COLOR_PAIR(2));
mvprintw(row-x[1]/2,x[2]+x[2],"X");
}
else if(y1[8]==3){
attron(COLOR_PAIR(3));
mvprintw(row-x[1]/2,x[2]+x[2],"O");
}

//9
if(y[9]==1){
attron(COLOR_PAIR(1));
if(!player) mvprintw(row-x[1]/2,cal-x[2]/2,"X");
else mvprintw(row-x[1]/2,cal-x[2]/2,"O");
}
else if(y1[9]==2){
attron(COLOR_PAIR(2));
mvprintw(row-x[1]/2,cal-x[2]/2,"X");
}
else if(y1[9]==3){
attron(COLOR_PAIR(3));
mvprintw(row-x[1]/2,cal-x[2]/2,"O");
}

//draw1
if(!drawyy1){
attron(COLOR_PAIR(4));
mvprintw(0,0,"y:%d,x:%d",row,cal);
if(!player) mvprintw(1,0,"false");
else mvprintw(1,0,"true");
mvprintw(2,0,"%d %d %d",y[1],y[2],y[3]);
mvprintw(3,0,"%d %d %d",y[4],y[5],y[6]);
mvprintw(4,0,"%d %d %d",y[7],y[8],y[9]);
mvprintw(6,0,"%d %d %d",y1[1],y1[2],y1[3]);
mvprintw(7,0,"%d %d %d",y1[4],y1[5],y1[6]);
mvprintw(8,0,"%d %d %d",y1[7],y1[8],y1[9]);
if(!player) mvaddstr(9,0,name1);
else mvaddstr(9,0,name2);
}
}

void Logic(){
clear();
getmaxyx(stdscr,row,cal);
x[1]=row/2/2,x[2]=cal/2/2;

//1 -
if(y1[1]==2 && y1[2]==2 && y1[3]==2){
attron(COLOR_PAIR(4));
for(int i=0;i<cal;i++) mvprintw(row/2,i," ");
mvprintw(row/2,cal/2-4,"win:");
addstr(name1);
getch();
restart=false;
}
if(y1[1]==3 && y1[2]==3 && y1[3]==3){
attron(COLOR_PAIR(4));
for(int i=0;i<cal;i++) mvprintw(row/2,i," ");
mvprintw(row/2,cal/2-4,"win:");
addstr(name2);
getch();
restart=false;
}

//2
if(y1[4]==2 && y1[5]==2 && y1[6]==2){
attron(COLOR_PAIR(4));
for(int i=0;i<cal;i++) mvprintw(row/2,i," ");
mvprintw(row/2,cal/2-4,"win:");
addstr(name1);
getch();
restart=false;
}
if(y1[4]==3 && y1[5]==3 && y1[6]==3){
attron(COLOR_PAIR(4));
for(int i=0;i<cal;i++) mvprintw(row/2,i," ");
mvprintw(row/2,cal/2-4,"win:");
addstr(name2);
getch();
restart=false;
}

//3
if(y1[7]==2 && y1[8]==2 && y1[9]==2){
attron(COLOR_PAIR(4));
for(int i=0;i<cal;i++) mvprintw(row/2,i," ");
mvprintw(row/2,cal/2-4,"win:");
addstr(name1);
getch();
restart=false;
}
if(y1[7]==3 && y1[8]==3 && y1[9]==3){
attron(COLOR_PAIR(4));
for(int i=0;i<cal;i++) mvprintw(row/2,i," ");
mvprintw(row/2,cal/2-4,"win:");
addstr(name2);
getch();
restart=false;
}

//1 |
if(y1[1]==2 && y1[4]==2 && y1[7]==2){
attron(COLOR_PAIR(4));
for(int i=0;i<cal;i++) mvprintw(row/2,i," ");
mvprintw(row/2,cal/2-4,"win:");
addstr(name1);
getch();
restart=false;
}
if(y1[1]==3 && y1[4]==3 && y1[7]==3){
attron(COLOR_PAIR(4));
for(int i=0;i<cal;i++) mvprintw(row/2,i," ");
mvprintw(row/2,cal/2-4,"win:");
addstr(name2);
getch();
restart=false;
}

//2
if(y1[2]==2 && y1[5]==2 && y1[8]==2){
attron(COLOR_PAIR(4));
for(int i=0;i<cal;i++) mvprintw(row/2,i," ");
mvprintw(row/2,cal/2-4,"win:");
addstr(name1);
getch();
restart=false;
}
if(y1[2]==3 && y1[5]==3 && y1[8]==3){
attron(COLOR_PAIR(4));
for(int i=0;i<cal;i++) mvprintw(row/2,i," ");
mvprintw(row/2,cal/2-4,"win:");
addstr(name2);
getch();
restart=false;
}

//3
if(y1[3]==2 && y1[6]==2 && y1[9]==2){
attron(COLOR_PAIR(4));
for(int i=0;i<cal;i++) mvprintw(row/2,i," ");
mvprintw(row/2,cal/2-4,"win:");
addstr(name1);
getch();
restart=false;
}
if(y1[3]==3 && y1[6]==3 && y1[9]==3){
attron(COLOR_PAIR(4));
for(int i=0;i<cal;i++) mvprintw(row/2,i," ");
mvprintw(row/2,cal/2-4,"win:");
addstr(name2);
getch();
restart=false;
}

// 159
if(y1[1]==2 && y1[5]==2 && y1[9]==2){
attron(COLOR_PAIR(4));
for(int i=0;i<cal;i++) mvprintw(row/2,i," ");
mvprintw(row/2,cal/2-4,"win:");
addstr(name1);
getch();
restart=false;
}
if(y1[1]==3 && y1[5]==3 && y1[9]==3){
attron(COLOR_PAIR(4));
for(int i=0;i<cal;i++) mvprintw(row/2,i," ");
mvprintw(row/2,cal/2-4,"win:");
addstr(name2);
getch();
restart=false;
}

// /
if(y1[3]==2 && y1[5]==2 && y1[7]==2){
attron(COLOR_PAIR(4));
for(int i=0;i<cal;i++) mvprintw(row/2,i," ");
mvprintw(row/2,cal/2-4,"win:");
addstr(name1);
getch();
restart=false;
}
if(y1[3]==3 && y1[5]==3 && y1[7]==3){
attron(COLOR_PAIR(4));
for(int i=0;i<cal;i++) mvprintw(row/2,i," ");
mvprintw(row/2,cal/2-4,"win:");
addstr(name2);
getch();
restart=false;
}

//not win
g=0;
for(int i=0;i<10;i++){
if(y1[i]==2 || y1[i]==3) g++;
}
if(g==9){
attron(COLOR_PAIR(4));
for(int i=0;i<cal;i++) mvprintw(row/2,i," ");
mvprintw(row/2,cal/2-4,"nobody won");
getch();
restart=false;
}
g=0;

//restart
if(!restart){
for(int i=0;i<10;i++) y[i]=0,y1[i]=0;
y[5]=1;
restart=true;
}
}

void Start(){
halfdelay(1);
clear();
for(int i=0;i<row;i++){
for(int g=0;g<cal;g++) printw("%d",rand() % 2);
getch();
}
mvprintw(0,0," ");
for(int i=0;i<row;i++){
for(int g=0;g<cal;g++) printw(" ");
getch();
}
raw();
clear();
}

int main(){
initscr();
keypad(stdscr,true);
noecho();
curs_set(0);
getmaxyx(stdscr,row,cal);

Start();
printw("y:%d, x:%d",row,cal);
mvprintw(row/2,cal/2-13,"name player1:");
getstr(name1);
Start();
mvprintw(row/2,cal/2-13,"name player2:");
getstr(name2);

Start();
start_color();
init_pair(1,COLOR_WHITE,COLOR_BLACK);
init_pair(2,COLOR_GREEN,COLOR_BLACK);
init_pair(3,COLOR_RED,COLOR_BLACK);
init_pair(4,COLOR_WHITE,COLOR_BLUE);

while(!gg){
Logic();
Draw();
Input();
}

endwin();
return 0;
}
