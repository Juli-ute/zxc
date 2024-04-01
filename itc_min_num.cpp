#include <iostream>
#include "middle.h"

int itc_min_num(long long ch){
    long long a = 0;
    long long b = 10;
    
    if (ch == 0){
         return 0;
    }
     if (ch < 0){
        ch = ch * -1;
    }
    while(ch !=0){
            a = ch % 10;
            if (a < b){
            b = a;
            }
            ch = ch / 10;
        }
  return b;
}

