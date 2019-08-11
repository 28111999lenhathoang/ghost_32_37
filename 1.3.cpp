#include<stdio.h>
#include<string.h>
int main(){
	char s[10];
	int kq = 0;
	printf("nhap vao chuoi s : ");
	scanf("%s",s);
//	gets(s);
	printf("chuoi da nhap : %s\n",s);
	printf("chuoi dao nguoc cua s : %s",strrev(s));
	return 0;
}
//#include<stdio.h>
//#include <string.h>
// 
//int main() {
//  char str[20];
//  printf("Nhap chuoi: ");
//  gets(str);
//  printf("Chuoi da nhap: %s", str);
//  printf("\nChuoi dao nguoc: %s", strrev(str));
//  return 0;
//}

