#include <stdio.h>
unsigned long long int calcu(int under){
	int i,j;
	int a=1;
	int b=2;
	unsigned long long int last=2;
	unsigned long long int sum = 3;
	for(i=3;i<=under;i++){
		last += (sum%100000);
		last %= 100000;
		sum+=last;
	}
	return last;
}
int main(){
	int i,j;
	int n; 
	unsigned long long int total;
	scanf("%d",&n);
	if(n==1) total = 1;
	if(n==2) total = 2;
	if(n>=3){
		for(i=3;i<=n;i++){
			total = calcu(i);	
		}
	}	
	printf("%lld\n",total%100000);
	return 0;
}
