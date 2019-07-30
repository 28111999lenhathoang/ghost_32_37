#include<stdio.h>
int main(){
	int n,tong=0;
	printf("nhap n = ");
	scanf("%d",&n);
	for(int i=1;i<=n;++i){
		if(n%i==0){
			tong = tong + i;
		}
	}
	if(tong == n){
		printf("%d la so hoan hao",n);
	}else{
		printf("%d khong phai la so hoan hao",n);
	}

	return 0;
}
