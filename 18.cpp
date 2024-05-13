#include <iostream>
using namespace std;

int itc_rev_covert_num(long long  ch, int ch2){
long long a = 0;
long long c = 0;
long long num = 0;
int b = 1;

while(ch != 0){

    while (c+a > 0){
        b *= ch2;
        c--;
        }

num += (ch%10)*b;
ch /= 10;
a++;
}

return num;
}
