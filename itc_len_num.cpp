#include <iostream>
#include "middle.h"


int itc_len_num(long long ch){
    int result = 0;
    while(ch !=0){
            ch = ch / 10;
        result += 1;
    }
     return result;
}
