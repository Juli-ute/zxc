#include <iostream>
#include "middle.h"
using namespace std;


long long itc_rev_bin_num(long long ch){

long long b = 0;
long long a = 0;
long long c = 0;
long long c2 = 0;
long long j = 1;
long long j2 = 1;

while(ch != 0){
    a = ch % 10;
    if(a == 1){
    c2 = c;
    while(c2 > 1){
      j2 = j2 * j;
      c2 -= 1;
    }
     b += j2;
    }
    j = 2;
    j2 = 2;
    c += 1;
    ch = ch / 10;
    }

return b;
}

