#include <iostream>
#include "middle.h"

int itc_second_max_num(long long ch){
    if (ch < 0){
        ch = ch * -1;
    }
    long long ch2 = ch;
    long long a = 0;
    long long b2 = 0;
    long long b = 0;

     if (ch < 10){
        return -1;
    }
 else{
    while (ch != 0){
        a = ch % 10;
        if(b2 <= a){
            b = b2;
            b2 = a;
        }
        if(a < b2 && a > b){
            b = a;
        }
        ch = ch / 10;
    }
return b;
}
}

