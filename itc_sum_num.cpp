#include <iostream>
#include "middle.h"

int itc_sum_num(long long ch){
    if (ch < 0){
        ch = ch * -1;
    }
    int a = 0;
    int result = 0;
    while(ch != 0){
            a = ch % 10;
            ch = ch / 10;
        result += a;
    }
  return result;
}
