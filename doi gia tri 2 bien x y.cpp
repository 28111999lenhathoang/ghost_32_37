#include<stdio.h>
int main(){
	int x,y,z;
	printf("nhap x :");
	scanf("%d",&x);
	printf("nhap y :");
	scanf("%d",&y);
	x = x + y;
	y = x - y;
	x = x - y;	
	printf("gia tri sau khi doi 2 bien cho nhau : \n");
	printf(" x = %d\n",x);
	printf(" y = %d",y);

	return 0;
}
