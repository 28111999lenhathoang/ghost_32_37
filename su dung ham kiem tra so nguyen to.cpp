#include<stdio.h>
int tim_so_uoc(int n){
	int dem_so_uoc = 0;
	for(int i = 1 ; i<=n;++i){
		if(n % i ==0){
			dem_so_uoc ++;
		}
	}
	if(dem_so_uoc == 2){
		return 1;
	}else{
		return 0;
	}
}
int main(){
	int a;
	int status;
		
	printf("nhap a :");
	scanf("%d",&a);
	//	printf("%d",tim_so_uoc(a));
	status = tim_so_uoc(a);
	printf("Status = %d\n", status);
	if(status == 1){
		printf("%d la so nguyen to \n",a);
	} else {
		printf("%d khong la so nguyen to\n",a);	
	}
		
	return 0;
}
