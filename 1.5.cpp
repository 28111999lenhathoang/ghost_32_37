#include<stdio.h>
#include<math.h>
int main(){
	double a,b,c;
	scanf("%lf%lf%lf",&a,&b,&c);
	double C = double(a+b+c);
	double P = (double)(a+b+c)/2;
	double S = sqrt((P-a)*(P-b)*(P-c)*P); 
	if( a + b >= c && b + c >= a && a + c  >= b){
		printf("%.2lf %.2lf",C,S);
	}else{
		printf("NO");
	}
	return 0;
}
