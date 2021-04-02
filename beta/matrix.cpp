#include <ncurses.h>
#include <stdlib.h>
using namespace std;
int row,cal;
bool gg=false;
void input(){
switch(getch()){
case ERR: break;
case 113: gg=true; break;
default: break;
}
}
int main(){
initscr();
noecho();
curs_set(0);
halfdelay(5);
keypad(stdscr,true);

getmaxyx(stdscr,row,cal);
int number10[cal],number2[row],number3[row],g=0;
for(int i=0;i<cal;i++) number10[i]=i;
for(int i=0;i<row;i++) number2[i]=rand() % 2;
for(int i=0;i<row;i++){
if(number2[i]==0) number3[i]=0;
else if(number2[i]==1) number3[i]=rand() % row;
}
while(!gg){
//logic
for(int i=0;i<row;i++) if(number2[i]>=1) number2[i]++;
for(int i=0;i<row;i++) if(number3[i]>=1) number3[i]++;

//draw

clear();
for(int i=0;i<cal;i++) printw("%d",number2[i]);

/*for(int i=0;i<cal;i++){
getch();
if(number10[i]!=0)
for(int g=0;g<row;g++)
if(number2[g]!=0) mvprintw(number2[g],number10[i]," %d,%d %d,%d",i,g,number10[i],number2[g]);
}*/

/*clear();
for(int i=0;i<row;i++)printw("%d %d\n",number10[i],number2[i]);*/

/*for(int i=0;i<row;i++)
if(number2[i]!=0) mvprintw(number2[i],number10[i],"%d",rand() % 2);*/

//input
input();
}
endwin();
return 0;
}
/*

0=true, 1=false, 2=1 or 0, 3=' ' or space

###############
#0001000100000# if number3[y]=row > number10[x]=0
#             #
#       3     #
#   3   2     #
#   2   2     #
#   2   2     #
#       2     #
#             #
###############

number10[x]=cal, number2[y]=0 or 1, number3[y]=random y

*/
