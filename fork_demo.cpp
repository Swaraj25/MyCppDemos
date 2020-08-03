#include<iostream>
#include<zconf.h>
using namespace std;
int main(){
    int p = 10;
    int *a = &p;
    printf("%d\n",*a);
    fork();
    p++;
    printf("%d\n",*a);
    return 0;
}