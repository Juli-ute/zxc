#include <iostream>
#include "middle.h"

int itc_second_max_num(long long ch){
    if (ch < 10){
        return -1;
    }
    long long a = 0;
    long long a2 = 0;
    long long b = 0;
    long long b2 = 0;
    while(ch !=0){
            a = ch % 10;
            if (a > b){
            b = a;
            }
    }
     while(ch !=0){
            a = ch % 10;

            if (a > a2){
            a2 = a;
            }
            if (a2 < b){
            b2 = a2;
            }
            ch = ch / 10;
        }
  return b2;
}
