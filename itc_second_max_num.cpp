#include <iostream>
#include "middle.h"

int itc_second_max_num(long long ch){
    if (ch < 0){
        ch = ch * -1;
    }
    if (ch < 10){
        return -1;
    }
    long long ch2 = ch;
    long long a = 0;
    long long a2 = 0;
    long long b = 0;
    while(ch !=0){
            a = ch % 10;
            if (a > b){
            b = a;
            }
             ch = ch / 10;
    }
    while(ch !=0){
            a = ch2 % 10;
            if (a > a2 and a < b){
            a2 = a;
            }
            ch2 = ch2 / 10;
        }
  return a2;
}
