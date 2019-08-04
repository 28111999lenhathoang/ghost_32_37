//#include<stdio.h>
//int main(){
//	int n;
//	printf("nhap n : ");
//	scanf("%d",&n);
//	while(n%2!=0){
//		printf("nhap lai n : ");
//		scanf("%d",&n);
//	}
//	printf("%d la so chan",n);
//
//
//	return 0;
//}
#include<stdio.h>
int main(){
	int n;
	do{
		printf("nhap n : ");
		scanf("%d",&n);
	}
	while(n%2!=0);
	printf("%d la so chan ",n);

	return 0;
	
}
