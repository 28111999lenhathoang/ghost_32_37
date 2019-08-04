#include<stdio.h>
int main(){
	int n;
	double S;
	printf("nhap n : ");
	scanf("%d",&n);
	S = 0;
	for(int i = 1; i <= n ; ++i){
		S = S + 1/(double)i;
	}
	printf("S = %lf",S);

	return 0;
}
