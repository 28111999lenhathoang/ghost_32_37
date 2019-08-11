#include<stdio.h>
#include<string.h>
void in_chuoi_dai_nhat(char s[][20],int n){
	int vi_tri = 0;
	long int max = strlen(s[0]);
	for(int i = 0 ; i < n ; ++i){
		if(max < strlen(s[i])){
			max = strlen(s[i]);
			vi_tri = i;
		}
	}
	printf("chuoi dai nhat : %d",s[vi_tri]);
}
int main(){
	char s[4][20];
	for(int i = 0; i <4 ; ++i){
		printf("nhap chuoi  : \n");
		scanf("%s",s[i]);
	}
	for(int i = 0; i < 4 ; ++i){
		printf("chuoi vua nhap la : %s \n",i,s[i]);
	}

}
