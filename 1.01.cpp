#include<stdio.h>
#include<string.h>
int main(){
	char s1[50],s2[50];
	printf("Nhap vao chuoi s1 : ");
	gets(s1);
	printf("Nhap vao chuoi s2 : ");
	gets(s2);
	if(strstr(s1,s2)== NULL){
		printf("S1 khong chua S2");
	}else{
		printf("S1 chua S2");
	}

	return 0;
}
