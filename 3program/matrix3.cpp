#include <ncurses.h>
#include <stdlib.h>
using namespace std;
bool gg = false, end;
int row, cal, a, a1;
int y, y1, x, x1, x2;
void inpurt(){
switch(getch()){
case ERR: break;
case 113:
gg = true;
break;
default: break;
}
}
int main(int argc, char **argv){
if(argc < 2) end = false;
else end = true;
initscr();
noecho();
curs_set(0);
halfdelay(1);
start_color();
init_pair(1, COLOR_WHITE, COLOR_BLACK);
init_pair(2, COLOR_RED, COLOR_BLACK);
while(!gg){
getmaxyx(stdscr, row, cal);
//1
attron(COLOR_PAIR(1));
clear();
y = row / 2 / 2 / 2, x = cal / 2;
y1 = y;
mvprintw(y, x - 2, "#");
for(int i = 0; i < 5; i++) printw("#");
for(int i = 0; i < y1; i++){
mvprintw(y, x - 2, "#");
}
//2
}
endwin();
return 0;
}
