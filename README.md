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
or
```
cd termux
./test
lol, not found
a net)))))
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
