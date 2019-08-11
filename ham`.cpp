#include<stdio.h>
 int tinh_tong(int a, int b){
 	int c;
 	c = a + b;
 	return c ;
 }
 void in_ra(int a){
 	int a2 = a*a ;
 	printf("%d",a2);
 
 }
 int main(){
 	int x = 10 , y = 20;
// 	int z = tinh_tong(x,y);
 	printf("%d\n",tinh_tong(x,y));
 	in_ra(tinh_tong(x,y));
 	return 0;
 }
