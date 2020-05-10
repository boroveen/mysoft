#include <ncurses.h>
#include <stdlib.h>
using namespace std;
bool gg = false, end;
int row, cal, a = 0, i = 0;
int y, y1, x1, x2, a1 = 0;
void inpurt(){
switch(getch()){
case ERR: break;
case 113:
gg = true;
y1 = i;
break;
default: clear(); break;
}
}
int main(int argc, char **argv){
if(argc < 2) end = true;
else end = false;
initscr();
noecho();
curs_set(0);
halfdelay(1);
keypad(stdscr, true);

start_color();
init_pair(1, COLOR_GREEN, COLOR_BLACK);
init_pair(2, COLOR_WHITE, COLOR_BLACK);
while(!gg){
clear();
getmaxyx(stdscr, row, cal);
//1
attron(COLOR_PAIR(2));
y = row / 2 / 2, y1 = row / 2, x1 = cal / 2, x2 = x1;
y = y + y + y, a1 = 0;
mvprintw(y, x1, "#");
for(i = 0; i < y1; i++){
x1--, x2++, y--, a1 = a1 + 2;
mvprintw(y, x2, "#");
mvprintw(y, x1, "#");
}
for(i = 0; i < a1; i++) printw("#");
//2
for(i = 0; i < y1 - 2; i++){
y++, x1++, a1 = a1 - 2;
int a2 = rand() % a1;
attron(COLOR_PAIR(2));
mvprintw(y, x1, "#", rand() % 2);
attron(COLOR_PAIR(1));
for(int g = 0; g < a2; g++) printw("%d", rand() % 2);
inpurt();
}
if(!end) a++;
if(a == 10) gg = true;
}
endwin();
return 0;
}
