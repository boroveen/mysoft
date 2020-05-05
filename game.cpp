#include <ncurses.h>
#include <stdlib.h>

using namespace std;

bool game = false, gg = false, frut;
bool inpurtb, timeb = true;

//inpurtb
//1
bool yi1 = true;
bool yi2 = true;
bool xi1 = true;
bool xi2 = true;
//2
bool yi3 = true;
bool yi4 = true;
bool xi3 = true;
bool xi4 = true;
//end

int y, x, y1, x1, y2, x2;
int d, d1, d2;
int row, col;
int timei = 5;

void inpurt(){
switch(getch()){
case ERR: break;
//1
case 119:
yi1 = false, yi2 = true, xi1 = true, xi2 = true;
break;
case 115:
yi1 = true, yi2 = false, xi1 = true, xi2 = true;
break;
case 97:
yi1 = true, yi2 = true, xi1 = false, xi2 = true;
break;
case 100:
yi1 = true, yi2 = true, xi1 = true, xi2 = false;
break;
//2
case 259:
yi3 = false, yi4 = true, xi3 = true, xi4 = true;
break;
case 258:
yi3 = true, yi4 = false, xi3 = true, xi4 = true;
break;
case 260:
yi3 = true, yi4 = true, xi3 = false, xi4 = true;
break;
case 261:
yi3 = true, yi4 = true, xi3 = true, xi4 = false;
break;
case 'p': inpurtb = true; break;
case 113: game = true; break; //3
}
}

void logic(){
getmaxyx(stdscr, row, col);
if(!inpurtb){
if(!yi1) y--;
if(!yi2) y++;
if(!xi1) x--;
if(!xi2) x++;
if(!yi3) y1--;
if(!yi4) y1++;
if(!xi3) x1--;
if(!xi4) x1++;
}
else{
int yP = row / 2, xP = col / 2 - 3;
raw();
attron(COLOR_PAIR(1));
mvprintw(yP, xP, "pause");
getch();
halfdelay(1);
for(int g = 0; g < 5; g++){
mvprintw(yP, xP, "%d", rand() % 2);
xP++;
getch();
}
clear();
halfdelay(timei);
inpurtb = false;
}
if(!gg){
y = 5, x = 5;
y1 = row - 5, x1 = col - 5;
gg = true;
}
if(y == y2 && x == x2){
d++, d1++;
frut = false;
}
else if(y1 == y2 && x1 == x2){
d++, d2++;
frut = false;
}

if(!frut){
y2 = rand() % row, x2 = rand() % col;
frut = true;
}
//1
if(y > row) y = 0;
if(y < 0) y = row;
if(x > col) x = 0;
if(x < 0) x = col;
//2
if(y1 == row) y1 = 0;
if(y1 < 0) y1 = row;
if(x1 == col) x1 = 0;
if(x1 < 0) x1 = col;
//end
}

void draw(){
clear();
attron(COLOR_PAIR(1));
printw("$: %d\n", d);
printw("$1: %d\n", d1);
printw("$2: %d\n", d2);
attron(COLOR_PAIR(3));
mvprintw(y, x, "1");
mvprintw(y1, x1, "2");
attron(COLOR_PAIR(2));
mvprintw(y2, x2, "#");
}

int main(){
initscr();
noecho();
curs_set(0);
halfdelay(5);
start_color();
keypad(stdscr, true);
init_pair(1, COLOR_GREEN, COLOR_BLACK);
init_pair(2, COLOR_YELLOW, COLOR_BLACK);
init_pair(3, COLOR_WHITE, COLOR_BLACK);
bool mainb = false, mainb1 = true, colorb = true;
int a = 0, a1 = 0;
while(!mainb){
while(!mainb1){
getmaxyx(stdscr, row, col);
clear();
attron(COLOR_PAIR(1));
mvprintw(row / 2 - 5, col / 2 - 15, "______ _______ _______ _______");
mvprintw(row / 2 - 4, col / 2 - 15, "|  ____ |_____| |  |  | |______");
mvprintw(row / 2 - 3, col / 2 - 15, "|_____| |     | |  |  | |______");
attron(COLOR_PAIR(3));
mvprintw(row / 2, col / 2 - 1, "time");
if(a1 == 0) printw("<");
mvprintw(row / 2 + 1, col / 2 - 1, "back");
if(a1 == 1) printw("<");
switch(getch()){
case 'w':
case 'W':
case 259:
if(a1 == 0) a1 = 1;
else a1--;
break;
case 's':
case 'S':
case 258:
if(a1 == 1) a1 = 0;
else a1++;
break;
case 10:
if(a1 == 0){
timeb = false;
while(!timeb){
mvprintw(row / 2 + 3, col / 2 - 2, "< %d >  ", timei);
switch(getch()){
case 'a':
case 'A':
case 260:
if(timei == 0) timei = 100;
else timei--;
break;
case 'd':
case 'D':
case 261:
if(timei == 100) timei = 0;
else timei++;
break;
case 10:
halfdelay(timei);
timeb = true;
break;
default: break;
}
}
}
if(a1 == 1) mainb1 = true;
break;
default: break;
}
}
getmaxyx(stdscr, row, col);
clear();
attron(COLOR_PAIR(1));
mvprintw(row / 2 - 5, col / 2 - 15, "______ _______ _______ _______");
mvprintw(row / 2 - 4, col / 2 - 15, "|  ____ |_____| |  |  | |______");
mvprintw(row / 2 - 3, col / 2 - 15, "|_____| |     | |  |  | |______");
attron(COLOR_PAIR(3));
mvprintw(row / 2, col / 2 - 2, "start");
if(a == 0) printw("<");
mvprintw(row / 2 + 1, col / 2 - 2, "settings");
if(a == 1) printw("<");
mvprintw(row / 2 + 2, col / 2 - 2, "exit");
if(a == 2) printw("<");
switch(getch()){
case 'w':
case 'W':
case 259:
if(a == 0) a = 2;
else a--;
break;
case 's':
case 'S':
case 258:
if(a == 2) a = 0;
else a++;
break;
case 10:
if(a == 0) mainb = true;
if(a == 1) mainb1 = false;
if(a == 2){
mainb = true;
game = true;
}
break;
default: break;
}
}
while(!game){
logic();
draw();
inpurt();
}
endwin();
return 0;
}
