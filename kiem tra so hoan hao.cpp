#include<stdio.h>
//	kiem tra 1 so co phai so hoan hao hay khong 
int kiem_tra_so_hoan_hao(int n){
	int count = 0;
	for(int i = 1 ; i<= n ; i++){
		if(n % i == 0){
			count += i;
		}
	}
	if(count == 2*n){
		return 1;
	}else{
		return 0;
	}
}
	int main (){
		int a;
		int x;
		printf("nhap a : ");
		scanf("%d",&a);
		x = kiem_tra_so_hoan_hao(a);
		if(x == 1){
			printf("%d la so hoan hao",a);
		}else{
			printf("%d khong phai la so hoan hao",a);
		}
	return 0;		
}
