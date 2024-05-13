#include <iostream>
using namespace std;

int itc_rev_oct_num(long long ch){
long long a = 0;
long long b = 0;
long long c = 0;
int e = 1;
  
while(ch != 0){
        while (b+c > 0){
            e *= 8;
            b--;
        }
        a += (ch%10)*e;
        ch /= 10;
        c++;
}
return a;
}
