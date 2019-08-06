#include<stdio.h>
int main(){
	int matran1[4][3];
	int matran2[4][3];
	int matran3[4][3];
	for(int i = 0 ; i < 4 ; ++i){
		for(int j = 0 ; j < 3 ; ++j){
			printf("matran1[%d][%d] : ",i,j);
			scanf("%d",&matran1[i][j]);
		}
	}
	for(int i = 0 ; i < 4 ; ++i){
		for(int j = 0 ; j < 3 ; ++j){
			printf("matran1=2[%d][%d] : ",i,j);
			scanf("%d",&matran2[i][j]);
		}
	}
	for(int i = 0 ; i < 4 ; ++i){
		for(int j = 0 ; j < 3 ; ++j){
			matran3[i][j] = matran1[i][j] + matran2[i][j];
		}
	}
	printf("\nmatran3[4][3] la : \n");
	for(int i = 0 ; i < 4 ; ++i){
		for(int j = 0 ; j < 3 ; ++j){
			printf("%3d",matran3[i][j]);
		}
		printf("\n");
	}
	return 0;
}

