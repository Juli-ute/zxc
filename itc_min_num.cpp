#include <iostream>
#include "middle.h"

int itc_min_num(long long ch){
    long long a = 0;
    long long b = 10;
    while(ch !=0){
            a = ch % 10;
            if (a < b){
            b = a;
            }
            ch = ch / 10;
        }
  return b;
}
