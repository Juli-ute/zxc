#include <iostream>
#include "middle.h"
using namespace std;

bool itc_mirror_num(long long ch){

int a = 0;
long long b = 0;
long long ch2 = ch;

while (ch != 0){
    a = ch % 10;
    b = b * 10 + a;
    ch = ch / 10;
}

if(b == ch2){
    return 1;
}
else{
    return 0;
}
}
