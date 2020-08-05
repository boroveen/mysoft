# mysoft
# my soft for linux, iSH and termux
## download
```
termux:
(
pkg update && pkg upgrade
pkg install clang && pkg install git
)
iSH:
(
apk add ncurses-dev git gcc g++ nano
)
linux:
(
sudo apt-get install libncurses-dev
sudo apt-get install git nano clang
sudo apt-get install gcc
sudo apt-get install c++
)
git clone https://github.com/boroveen/mysoft/
cd mysoft
ls
./file
```
## error denied
```
chmod 775 ./test
```
or
```
chmod 775 *
```
## start on termux
```
gcc test.cpp -o test -lncurses
./test
```
## boroveen
```c++
#include <stdio.h>
int main(){
puts("######## #   #           #   #         #                         ######\n"
     "       # #   # ######### #   # #       # ########## ##########\n"
     "       # #   # #       # #   #  #     #          #          #  ##########\n"
     "      #  #   # #       # #   #       #          #          #   #        #\n"
     "    ##      #  #       #    #      ##        # #        # #           ##\n"
     "  ##       #   #########   #     ##           #          #          ##\n"
     "##       ##              ##    ##              #          #       ##\n");
return 0;
}
```
![alt tag](https://boroveen.github.io/video/прикольно.gif "./test")​
