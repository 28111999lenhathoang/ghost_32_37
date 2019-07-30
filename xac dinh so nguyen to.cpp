#include<stdio.h>
int main(){
	int n;
	printf("nhap n = ");
	scanf("%d",&n);
	int dem_so_uoc=0;
	for(int i=1;i<=n;++i){
		if(n%i==0){
		}
		dem_so_uoc++;
	}
	if(dem_so_uoc==2){
		printf("%d la so nguyen to",n);
	}else{
		printf("%d khong la so nguyen to",n);
	}
	return 0;
}
