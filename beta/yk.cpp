#include <ncurses.h>
using namespace std;
int main(){
initscr();
noecho();
curs_set(0);
bool gg=false;
int row,cal;
start_color();
init_pair(1,COLOR_YELLOW,COLOR_YELLOW);
init_pair(2,COLOR_BLUE,COLOR_BLUE);
while(!gg){
getmaxyx(stdscr,row,cal);
attron(COLOR_PAIR(2));
for(int i=0; i<row/2*cal; i++) printw("h");

attron(COLOR_PAIR(1));
for(int i=0; i<row/2*cal; i++){
printw("$");
}
switch(getch()){
case 410: clear(); break;
default: gg=true; break;
}
}
endwin();
return 0;
}
