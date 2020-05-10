#include <ios>
#include <stdlib.h>
using namespace std;
int main(){
system("cd 3program");
while(true){
printf("start 1\n");
system("./matrix1 S");
printf("start 2\n");
system("./matrix2 S");
printf("start 3\n");
system("./matrix3 S");
}
return 0;
}
/*
#include <ncurses.h>
using namespace std;

int main(int argc, char **argv)
{
if(argc < 2) printf("No arguments\n");
else printf("yes");
return 0;
}
*/
