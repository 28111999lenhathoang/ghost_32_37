#include<stdio.h>
int tim_max(int a[], int n){
	int max = a[0];
	for(int i = 0 ; i < n ; ++i){
		if(max < a[i]){
			max = a[i];
		}
	}
	return max;
}
void in_mang_sap_xep(int a[],int n){
	for(int i = 0 ; i < n -1 ; ++i){
		for ( int j = 0 ; j < n - i - i ; ++j){
			if(a[j] > a[j + 1]){
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	printf("\nmang sau khi sap xep la : \n");
	for(int i = 0; i < n; ++i){
		printf("%4d",a[i]);
	}
}
int main(){
	int x[5] = {1, 2, 4, 9, 8};
	printf("so lon nhat : %d",tim_max(x,5));
	in_mang_sap_xep(x,5);
	return 0;
}
