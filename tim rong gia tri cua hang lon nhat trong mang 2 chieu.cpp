#include<stdio.h>
int main(){
	int arr[4][3];
	int max=0;
	int x = 0;
	for(int i = 0 ; i < 4 ; i++){
		for(int j = 0 ; j < 3 ; j++){
		printf("arr[%d][%d] : ",i,j);
		scanf("%d",&arr[i][j]);
		}
	}
	for(int i = 0 ; i < 4 ; i++){
		int tong = 0;
		for(int j = 0 ; j < 3 ; j++){	
			tong += arr[i][j];
		}
		if(i == 0){
			max = tong;
		}
		if(max < tong ){
			max = tong ;
			x = i;	
		}
	}
		
			printf("max : %d \n",max);
	return 0;
}
