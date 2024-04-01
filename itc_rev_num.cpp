#include "middle.h"


int itc_rev_num(long long ch){
    long long a = 0;
    long long z = 0;
    int result = 0;
    long long chp = 0;

    if (ch < 0){
        ch = ch * -1;
    }
    if (ch == 0){
        return 1;
    }

    while(ch != 0){
            a = ch % 10;
            z = z * 10 + a;
            ch = ch / 10;
    }
    while(z != 0){
            z = z / 10;
        result += 1;
    }
     return result;
}

