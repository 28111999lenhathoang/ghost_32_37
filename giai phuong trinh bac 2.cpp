#include<stdio.h>
#include<math.h>
// nhap vao 3 so a,b,c cho phuong trinh
//bac 2 ax2 + bx + c = 0.tim nghiem cua pt
int main(){
	float a,b,c,x1,x2,delta;
	printf("nhap a(!0) = ");
	scanf("%f",&a);
	printf("nhap b = ");
	scanf("%f",&b);
	printf("nhap c = ");
	scanf("%f",&c);
	delta = b*b - 4*a*c;
	if(delta<0){
		printf("phuong trinh vo nghiem");
	}else if(delta>0){
		delta = sqrt(delta);
		x1=(-b+delta)/(2*a);
		x2=(-b-delta)/(2*a);
		printf("phuong trinh co 2 nghiem phan biet\nx1 = %f \nx2=%f",x1,x2);
	}else{
		x1=x2=-b/(2*a);
		printf("phuong trinh co nghiem kep\n x1=x2=%f",x1);
	}

return 0;
}
