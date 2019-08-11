#include<stdio.h>
#include<string.h>

void ham_in(char s[][100], int n){
	printf("nhap chuoi : ");
	for(int i = 0 ; i < n ; i++){
		scanf("%s",&s[i]);
	}
	printf("Chuoi vua in la : ");
	for(int i = 0 ; i < n ; ++i){
		printf("%s",s[i]);
	}

	char ph[n];
	for(int i = 0 ; i < n; i++){
		for(int j = 0 ; j < n ; ++j){
			if(strcmp(s[j],s[j+1])>0){
				strcpy(ph,s[j]);
				strcpy(s[j],s[j+1]);
				strcpy(s[j+1],ph);
			}
		}
	}
	printf("\nSap xep thu tu cua cac chuoi:");
   for (int i = 0; i < 5; i++){
      printf("\n%s", s[i]);
      }

}
int main(){
	char s[5][100];
	int n = 5;
	ham_in(s,n);

	return 0;
}
