#include <ncurses.h>

using namespace std;

int main(){
initscr();
keypad(stdscr, true);
curs_set(0);
start_color();
init_pair(1, COLOR_GREEN, COLOR_BLACK);
init_pair(2, COLOR_WHITE, COLOR_BLACK);
init_pair(3, COLOR_MAGENTA, COLOR_BLACK);
bool gg = false;
int y, x;
getmaxyx(stdscr, y, x);
int a = y - 4;
while(!gg){
if(a == y - 4){
clear();
getmaxyx(stdscr, y, x);
attron(COLOR_PAIR(1));

printw("     __                   _   __       / __        ___        __\n");
printw("  //   ) )   //   / /   // ) )  ) )   //   ) )   //___) )   //  ) )\n");
printw(" //   / /   //   / /   // / /  / /   //   / /   //         //\n");
printw("//   / /   ((___( (   // / /  / /   ((___/ /   ((____     //\n");

attron(COLOR_PAIR(3));

printw("y: %d, x: %d\n", y, x);

attron(COLOR_PAIR(2));
a = 0;
}
int ch = getch();
switch(ch){
case ERR: printw("%d\n", ch); break;
case 10:
printw("enter: %d\n", ch);
gg = true;
getch();
break;
default:
a++;
printw(": %d\n", ch);
break;
}
}
endwin();
return 0;
}
