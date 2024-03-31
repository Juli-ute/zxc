#include <iostream>
#include "middle.h"

long long itc_multi_num(long long ch){
    long long a = 0;
    long long b = 0;
    long long result = 1;
    if(ch < 0){
        b = 1;}

    while(ch !=0){
            a = ch % 10;
            ch = ch / 10;
        result *= a;
        }
        if(b == 1){
        return -result;}
  return result;
}
