#include <iostream>
using namespace std;

int itc_covert_numlong (long long ch, int ch2){
long long b = 10;
long long a = 0;
long long num = 0;

while(ch > 0){
    a = ch % ch2;
    ch /= ch2;
    num += b*a;
    b *= 10;
}

return num/10;
}
