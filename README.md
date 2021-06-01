# mysoft
# my soft for linux, iSH and termux
## download
Termux
```
pkg update && pkg upgrade
pkg install clang git nano make
```
iSH
```
apk add ncurses-dev git gcc g++ nano make
```
Ubuntu
```
sudo apt-get install libncurses-dev
sudo apt-get install git nano clang make
```
Arch Linux
```
pacman -S gcc g++ nano ncurses-dev nano make
```
```
git clone https://github.com/boroveen/mysoft/
cd mysoft
make
ls
./test
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
# not my soft, this is b0mb3r
```
cd beta
sh install_b0mb3r.sh
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
![alt tag](https://boroveen.github.io/video/прикольно.gif "./test")
