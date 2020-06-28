# mysoft
# my soft for linux and termux
## download
```
termux:
(
pkg update && pkg upgrade
pkg install clang && pkg install git
)
linux:
(
sudo apt-get install libncurses-dev
sudo apt-get install clang && sudo apt install gcc
sudo apt-get install git
)
git clone https://github.com/boroveen/mysoft/
cd mysoft
ls
./file
```
## error denied
```
chmod 775 ./file
```
## start on termux
```
gcc file.cpp -o file -lncurses
./file
```
or
```
cd termux
./file
```
## test code
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
