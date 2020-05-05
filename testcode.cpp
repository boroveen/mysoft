#include <ncurses.h>
#include <stdlib.h>
using namespace std;
char hello_world[] = "hello world";
/*
bool gg = false
while(!gg){
printf("a");
}
*/
int row, cal;
int main(){
if(has_colors() == FALSE) printf("color on\n");
else printf("color off\n");
initscr();
noecho();
curs_set(0);
start_color();
init_pair(1, COLOR_GREEN, COLOR_BLACK);
init_pair(2, COLOR_RED, COLOR_BLACK);
init_pair(3, COLOR_YELLOW, COLOR_BLACK);
init_pair(4, COLOR_BLUE, COLOR_BLACK);
init_pair(5, COLOR_MAGENTA, COLOR_BLACK);
init_pair(6, COLOR_CYAN, COLOR_BLACK);
getmaxyx(stdscr, row, cal);
attron(COLOR_PAIR(1));
mvprintw(row / 2, cal / 2 - 5, "hello world");
getch();
halfdelay(1);
mvprintw(row / 2, cal / 2 - 6, " ");
for(int i = 0; i < 11; i++){
int a = rand() % 7;
while(a == 0) a = rand() % 7;
attron(COLOR_PAIR(a));
printw("%d", rand() % 2);
getch();
}
endwin();
return 0;
}
