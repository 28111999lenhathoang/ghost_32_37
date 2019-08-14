#include<stdio.h>
int main(){
	int arr[10] = {2,5,1,8,4,11,9,6,7,3};
	printf("Mang nhao vao la :\n");
	for(int i = 0 ; i < 10 ; i ++){
		printf("%5d",arr[i]);
	}
	printf("\nMang sau khi dao nguoc la :\n ");
	for(int i = 9 ; i >= 0 ; --i ){
		printf("%5d",arr[i]);
	}
	return 0;
}


