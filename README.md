# mysoft
# my soft for linux, iSH and termux
## download
Termux
```
pkg update && pkg upgrade
pkg install clang && pkg install git
```
iSH
```
apk add ncurses-dev git gcc g++ nano
```
Ubuntu
```
sudo apt-get install libncurses-dev
sudo apt-get install git nano clang
```
Arch Linux
```
pacman -S gcc g++ nano ncurses-dev nano
```
```
git clone https://github.com/boroveen/mysoft/
cd mysoft
ls
make
```
## error denied
```
chmod 775 ./test
```
or
```
chmod 775 *
```
## start on devices
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
