#include<stdio.h>
int main(){
	int n,S;
	printf("nhap n : ");
	scanf("%d",&n);
	S = 1;
	for(int i=1;i <= n ;++i){
		S *= i;
	}
	printf(" S = %d",S);
	return 0;
}
