#include <iostream>
#include "middle.h"

int itc_null_count(long long ch){
    long long a = 0;
    long long result = 0;
    while(ch !=0){
            a = ch % 10;
            ch = ch / 10;
        if(a == 0){
        result += 1;
        }
    }
  return result;
}
