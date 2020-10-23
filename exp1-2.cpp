#include <stdio.h>
#include <math.h>

double log2(double n){
	return log10(n)/log10(2);
}

long exponent(int n){
	long s =1;
	for(int i = 1;i<=n;i++){
		s*=2;
	}
	return s;
}

long factorial(int n){
	long s =1;
	for(int i = 1; i <= n;i++){
		s*=i;
	}
	return s;
}

void fun(int n){
	printf("log2(n)\tsqrt(n)\tn\tnlog2(n)\tn^2\tn^3\t2^n\tn!\n");
	printf("================================================================================\n");
	for(int i = 1;i<=n;i++){
		printf("%.2f\t",log2(double(i)));
		printf("%.2f\t",sqrt(i));
		printf("%d\t",i);
		printf("%.2f\t",i*log2(double(i)));
		printf("%d\t",i*i);
		printf("%d\t",i*i*i);
		printf("%d\t",i*i*i);
		printf("%d\t",exponent(i));
		printf("%d\n",factorial(i));
	}
}


int main(){
	int n = 10;
	fun(n);
	return 1;
}
