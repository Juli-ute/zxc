#include <iostream>
#include "middle.h"
using namespace std;



long long itc_bin_num(long long ch){
long long jj = 10;
long long result = 0;
long long a = 0;

while (ch >= 0){
a = ch % 2;
ch /= 2;
result += jj*a;
jj *= 10;
}
return  result/10;
}
