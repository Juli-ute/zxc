#include <iostream>
#include "middle.h"
using namespace std;

long long itc_oct_num(long long ch){

long long a = 0;
long long c = 10;
long long num = 0;
while(ch != 0){
    a = ch%8;
    ch = ch / 8;
    num = c*a + num;
    c = c*10;
}
return num/10;
}

