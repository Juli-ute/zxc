#include <iostream>
#include "middle.h"


int itc_len_num(long long ch){
    int result = 0;
    if (ch == 0){
        return 1;
    }
    while(ch != 0){
            ch = ch / 10;
        result += 1;
    }
     return result;
}
