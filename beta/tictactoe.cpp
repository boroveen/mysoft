#include <ncurses.h>
#include <stdlib.h>
using namespace std;
int row,cal,x[2],y[9];
char name1[10],name2[10];
bool gg=false,player=false,restart=false;

void Input(){
switch(getch()){
case 'w':
if(y[1]==1) y[1]=0,y[7]=1;
if(y[2]==1) y[2]=0,y[8]=1;
if(y[3]==1) y[3]=0,y[9]=1;
if(y[4]==1) y[4]=0,y[1]=1;
if(y[5]==1) y[5]=0,y[2]=1;
if(y[6]==1) y[6]=0,y[3]=1;
if(y[7]==1) y[7]=0,y[4]=1;
if(y[8]==1) y[8]=0,y[5]=1;
if(y[9]==1) y[9]=0,y[6]=1;
break;

case 's':
if(y[1]==1) y[1]=0,y[4]=1;
if(y[2]==1) y[2]=0,y[5]=1;
if(y[3]==1) y[3]=0,y[6]=1;
if(y[4]==1) y[4]=0,y[7]=1;
if(y[5]==1) y[5]=0,y[8]=1;
if(y[6]==1) y[6]=0,y[9]=1;
if(y[7]==1) y[7]=0,y[1]=1;
if(y[8]==1) y[8]=0,y[2]=1;
if(y[9]==1) y[9]=0,y[3]=1;
break;

case 'a':
if(y[1]==1) y[1]=0,y[2]=1;
if(y[2]==1) y[2]=0,y[3]=1;
if(y[3]==1) y[3]=0,y[1]=1;
if(y[4]==1) y[4]=0,y[5]=1;
if(y[5]==1) y[5]=0,y[6]=1;
if(y[6]==1) y[6]=0,y[4]=1;
if(y[7]==1) y[7]=0,y[8]=1;
if(y[8]==1) y[8]=0,y[9]=1;
if(y[9]==1) y[9]=0,y[7]=1;
break;

case 'd':
if(y[1]==1) y[1]=0,y[3]=1;
if(y[2]==1) y[1]=0,y[1]=1;
if(y[3]==1) y[1]=0,y[2]=1;
if(y[4]==1) y[1]=0,y[6]=1;
if(y[5]==1) y[1]=0,y[4]=1;
if(y[6]==1) y[1]=0,y[5]=1;
if(y[7]==1) y[1]=0,y[9]=1;
if(y[8]==1) y[1]=0,y[7]=1;
if(y[9]==1) y[1]=0,y[8]=1;
break;

case 10:
if(!player) player=true;
else player=false;
break;

case 113:
gg=true;
break;
}
}

void Draw(){
clear();
printw("y:%d,x:%d\n",row,cal);
printw("%d %d %d\n",y[1],y[2],y[3]);
printw("%d %d %d\n",y[4],y[5],y[6]);
printw("%d %d %d\n",y[7],y[8],y[9]);
if(!player) addstr(name1);
else addstr(name2);

//1
mvprintw(row/2-1,cal/2-2," ");
attron(COLOR_PAIR(1));
if(y[1]==0) printw(" ");
if(y[1]==1){
if(!player) printw("X");
else printw("0");
}
if(y[1]==2){
attron(COLOR_PAIR(2));
printw("X");
}
if(y[1]==3){
attron(COLOR_PAIR(3));
printw("0");
}

//2
attron(COLOR_PAIR(1));
if(y[2]==0) printw(" ");
if(y[2]==1){
if(!player) printw("X");
else printw("0");
}
if(y[2]==2){
attron(COLOR_PAIR(2));
printw("X");
}
if(y[2]==3){
attron(COLOR_PAIR(3));
printw("0");
}

//3
mvprintw(row/2,cal/2-2," ");
attron(COLOR_PAIR(1));
if(y[2]==0) printw(" ");
if(y[3]==1){
if(!player) printw("X");
else printw("0");
}
if(y[3]==2){
attron(COLOR_PAIR(2));
printw("X");
}
if(y[3]==3){
attron(COLOR_PAIR(3));
printw("0");
}

//4
attron(COLOR_PAIR(1));
if(y[4]==0) printw(" ");
if(y[4]==1){
if(!player) printw("X");
else printw("0");
}
if(y[4]==2){
attron(COLOR_PAIR(2));
printw("X");
}
if(y[4]==3){
attron(COLOR_PAIR(3));
printw("0");
}

//5
attron(COLOR_PAIR(1));
if(y[5]==0) printw(" ");
if(y[5]==1){
if(!player) printw("X");
else printw("0");
}
if(y[5]==2){
attron(COLOR_PAIR(2));
printw("X");
}
if(y[5]==3){
attron(COLOR_PAIR(3));
printw("0");
}

//6
attron(COLOR_PAIR(1));
if(y[6]==0) printw(" ");
if(y[6]==1){
if(!player) printw("X");
else printw("0");
}
if(y[6]==2){
attron(COLOR_PAIR(2));
printw("X");
}
if(y[6]==3){
attron(COLOR_PAIR(3));
printw("0");
}

//7
mvprintw(row/2+1,cal/2-2," ");
attron(COLOR_PAIR(1));
if(y[7]==0) printw(" ");
if(y[7]==1){
if(!player) printw("X");
else printw("0");
}
if(y[7]==2){
attron(COLOR_PAIR(2));
printw("X");
}
if(y[7]==3){
attron(COLOR_PAIR(3));
printw("0");
}

//8
attron(COLOR_PAIR(1));
if(y[8]==0) printw(" ");
if(y[8]==1){
if(!player) printw("X");
else printw("0");
}
if(y[8]==2){
attron(COLOR_PAIR(2));
printw("X");
}
if(y[8]==3){
attron(COLOR_PAIR(3));
printw("0");
}

//9
attron(COLOR_PAIR(1));
if(y[9]==0) printw(" ");
if(y[9]==1){
if(!player) printw("X");
else printw("0");
}
if(y[9]==2){
attron(COLOR_PAIR(2));
printw("X");
}
if(y[9]==3){
attron(COLOR_PAIR(3));
printw("0");
}

}

void Logic(){
if(!restart){
for(int i=0;i<9;i++) y[i]=0;
y[5]=1;
}
clear();
getmaxyx(stdscr,row,cal);
x[1]=row/2/2,x[2]=cal/2/2;

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

while(!gg){
Logic();
Draw();
Input();
}

endwin();
return 0;
}
