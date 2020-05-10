#include <ncurses.h>
#include <stdlib.h>
using namespace std;
bool end, gg = false;
int row, cal, y, x, a = 0;
void inpurt(){
switch(getch()){
case ERR: break;
case 113:
gg = true;
y = row;
break;
default: break;
}
}
void draw(){
getmaxyx(stdscr, row, cal);
clear();
for(y = 0; y < row; y++){
int x1 = rand() % cal;
for(x = 0; x < x1; x++) printw("%d", rand() % 2);
printw("\n");
inpurt();
}
if(!end) a++;
if(a == 10) gg = true;
}
int main(int argc, char **argv){
if(argc < 2) end = true;
else end = false;
initscr();
halfdelay(1);
noecho();
start_color();
init_pair(1, COLOR_GREEN, COLOR_BLACK);
curs_set(0);
attron(COLOR_PAIR(1));
while(!gg){
draw();
}
endwin();
return 0;
}

