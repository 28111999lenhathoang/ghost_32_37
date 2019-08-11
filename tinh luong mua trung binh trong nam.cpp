#include<stdio.h>
int main(){
	int n;
	printf("n : ");
	scanf("%d",&n);
	int arr[n];
	int tong=0;
	double trungbinh;
	for(int i = 0 ; i<n ; ++i){
		printf("arr[%d] : ",i);
		scanf("%d",&arr[i]);
		tong += arr[i];
		trungbinh = (double)tong/n;
	}
	printf("%0.3lf\n",trungbinh);
	for(int i = 0 ; i < n ; ++i){
		if(trungbinh < arr[i]){
			printf("%7d ",arr[i]);
		}	
	}
	

	return 0;
}
