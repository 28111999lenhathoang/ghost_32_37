#include<stdio.h>
int main(){
	int n,S;
	printf("nhap n : ");
	scanf("%d",&n);
	S = 0;
	for(int i = 1 ; i<= n; i++){
		if(i%2!=0){
			S += i;
		}
	}
	printf("S = %d",S);

	return 0;
}
