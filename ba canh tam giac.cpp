#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c;
	printf("nhap a : ");
	scanf("%d",&a);
	printf("nhap b : ");
	scanf("%d",&b);
	printf("nhap c : ");
	scanf("%d",&c);
	if(!(a+b<=c || a+c<=b || b+c<=a)){ // if(a+bc> && a+c>b && b+c>a)
		int C = a+b+c;
		double P = (double)C/2;
		double S;
		S = sqrt(P*(P-a)*(P-b)*(P-c));
		printf("ba so la ba canh cua tam giac\n");
		printf("chu vi C : %d\n",C);
		printf("dien tich S : %lf:",S);
	}else{
		printf("ba so khong phai la ba canh cua tam giac");	
	}



return 0;
}
