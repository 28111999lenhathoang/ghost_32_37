#include<stdio.h>
int main(){
	int n;
	printf(" n : ");
	scanf("%d",&n);
	int arr[n];
	for(int i = 0 ; i<n ; ++i){
		printf("arr[%d] :",i);
		scanf("%d",&arr[i]);
	}
	int max = arr[0];
	int x = 0;
	for(int i = 0 ; i<n ; ++i){
		if(max < arr[i]){
			max = arr[i];
		}
	}
	for(int i = 0 ; i<n ; ++i){
		if(max == arr[i]){
			printf("%d ",i);
		}
	}
//	for(int i = 0 ; i < n ; ++i){
//		printf("%d",x);
//	}
//	printf("%d",x);
	
	return 0;
}
