#include<stdio.h>
 
  int main(){
  	int a,b;
  	printf("nhap a bang ");
  	scanf("%d",&a);
  	printf("nhap b bang ");
  	scanf("%d",&b);
  	if(a>b&b==0){
  		printf("khong the thuc hien chuong trinh");}
  	else if(a>b & b!=0){
  		printf("%d/%d=%d",a,b,a/b);
	  }
  	else{
  		printf("%d*%d=%d",a,b,a*b);
	}
  	return 0;
}
