#include<stdio.h>
int main(){
	int n;
	printf(" n : ");
	scanf("%d",&n);
	int arr[n];
	int max,min;
	max = arr[0];
	min = arr[0];
	for(int i = 0 ; i<n ; ++i){
		printf("arr[%d] : ",i);
		scanf("%d",&arr[i]);
		}
	for(int i = 0 ; i<n;++i){
		if(max < arr[i]){
			max = arr[i];
	}
	}
	printf(" max : %d ",max);
	return 0;
}
