#include <iostream>
#include "middle.h"
using namespace std;

int itc_mirror_count(long long ch){

int risult = 0;
long long a = 1;

if(ch == 0){
 return 1;
}

while (a <= ch){
    if(itc_mirror_num(a)){
        risult++;}
    a++;
    }
return risult;
}
