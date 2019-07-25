#include<stdio.h>

 int main(){
 	int a,b,c;
 	printf("nhap a =");
 	scanf("%d",&a);
 	printf("nhap b =");
 	scanf("%d",&b);
 	printf("nhap c =");
 	scanf("%d",&c);
 	if(a>b&b>c){
 		printf("%d max,%d min",a,c);}
 	else if(a>b&c>b&a>c){
 		printf("%d max, %d min",a,b);}
 	else if(a>b&c>b&c>a){
 		printf("%d max, %d min",c,b);}
 	else if(a<b&c<a){
 		printf("%d max, %d min",b,c);}
 	else if(a<b&a<c&c>b){
 		printf("%d max, %d min",c,a);}
 	else{
 		printf("%d max, %d min",b,a);
	 }
 	
 		
 	return 0 ;
}
