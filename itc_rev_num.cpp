
#include "middle.h"


int itc_rev_num(int ch){
    int a = 0;
    int z = 0;
    int result = 0;
    int chp = 0;

    if (ch < 0){
        ch = ch * -1;
    }
    if (ch == 0){
        return 0;
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
