#include<stdio.h>
int main(){
	int n;
	printf("n :");
	scanf("%d ",&n);
	int arr[n];
	for(int i = 0 ; i < n ; ++i){
		printf("arr[%d] : ",i);
		scanf("%d",&arr[i]);
	}
//	printf("so lon nhat la : ",in_so_lon_nhat(arr,n) );
	return 0;
}
