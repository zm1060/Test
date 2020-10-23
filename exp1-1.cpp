#include <iostream>
#include <stdio.h>
#include <time.h>
#include <math.h>

using namespace std;

long add1(long n){
    long i,sum = 0;
    for (i = 0; i <= n; ++i)
        sum+=i;
    return sum;
}

void AddTime1(long n){
    clock_t t;
    long sum;
    t = clock();
    sum = add1(n);
    t = clock() - t;
    printf("Way1:\n");
    printf("Result 1~%d among %ld\n",n,sum);
    printf("Cost times:%lfs\n",((float)t)/CLOCKS_PER_SEC);
}

long add2(long n){
    return n*(n+1)/2;
}

void AddTime2(long n){
    clock_t t;
    long sum;
    t = clock();
    sum = add2(n);
    t = clock() - t;
    printf("Way2:\n");
    printf("Result:1~%d :%ld\n",n,sum);
    printf("Cost time:%lfs\n",((float)t)/CLOCKS_PER_SEC);
}
int main(){
    int n;
    printf("n(da yu1000000):");
    scanf("%d",&n);
    if(n<1000000) return 0;
    AddTime1(n);
    AddTime2(n);
    return 0;
}
