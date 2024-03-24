#include <iostream>
#include "middle.h"

int itc_max_num(long long ch){
    long long a = 0;
    long long b = 0;
    while(ch !=0){
            a = ch % 10;
            if (a > b){
            b = a;
            }
            ch = ch / 10;
        }
  return b;
}
