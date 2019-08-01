#include<stdio.h>
int main(){
	int n;
	printf("nhap n = ");
	scanf("%d",&n);
	int f1=0,f2=1;
	int fn=1;
	for(int i=1;i<=n;i++){
	fn=f2+f1;
	f1=f2;
	f2=fn;
	}
	printf("so fibonaci thu %d la %d",n,fn);

	return 0;
}
