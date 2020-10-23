#include <stdio.h>
#include <time.h>
#include <math.h>

bool prime1(long n){
	long i;
	for(i = 2; i<n;i++)
		if(n%i==0)  return false;
	return true;
}

void PrimeTime1(long n){
	clock_t t;
	long sum = 0,i;
	t = clock();
	for(i = 2;i<=n;i++)
		if(prime1(i))
			sum++;
	t = clock() - t;
	printf("Way1:\n");
	printf("Result:2~%d: %d\n",n,sum);
	printf("Cost time:%lfs\n",((float)t)/CLOCKS_PER_SEC);
}

bool prime2(long n){
	long i;
	for(i=2;i<=(int)sqrt(n);i++){
		if(n%i==0)
			return false;
	}
	return true;
}

void PrimeTime2(long n){
	clock_t t;
	long sum = 0,i;
	t = clock();
	for(i = 2;i<=n;i++)
		if(prime2(n))
			sum++;
	t = clock()-t;
	printf("Way2:\n");
	printf("Result:2~%d :%d\n",n,sum);
	printf("Cost time:%lfs\n",((float)t)/CLOCKS_PER_SEC);
}

int main(){
	long n;
	printf("n(greater than 100000):");
	scanf("%ld",&n);
	if(n<100000) return 0;
	PrimeTime1(n);
	PrimeTime2(n);
	return 1;
}

