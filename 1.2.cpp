#include<stdio.h>
#include<string.h>
int main(){
	char s1[10],s2[10];
	printf("nhap chuoi s1 : ");
	scanf("%s",s1);
	printf("nhap chuoi s2 : ");
	scanf("%s",s2);
	printf("chuoi s1 sau khi nhap la : %s\n",s1);
	strcat(s1,s2);
	printf("chuoi s1 sau khi dung ham la : %s\n",s1);
	strcmp(s1,s2);
	printf("ket qua : %d",strcmp(s1,s2));
	printf("\nvi tri cua ki tu a trong chuoi s1 la %ld\n",strchr(s1,'a')-s1);
	strcpy(s1,s2);
//	printf("s1 sau khi copy la : %s\n",s1);
	printf("s1 sau khi copy la : %ld",strlen(s1));
	return 0;
}
