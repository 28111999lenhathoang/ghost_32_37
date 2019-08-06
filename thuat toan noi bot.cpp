//#include<stdio.h>
//int main(){
//	int arr[10]={1,23,5,3,77,45,23,43,12,23};
//	for(int i = 0 ; i<9 ; i++){
//		for(int j = 0 ; j<9-i ; j++){
//			if(arr[j]>arr[j+1]){
//				int temp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = temp;
//			}
//		}
//	}
//	for(int i = 0 ; i < 10 ; ++i){
//		printf("%5d",arr[i]);
//	
//	}
//	
//	return 0;
//}
#include<stdio.h>
int main(){
	int arr[10]={1,23,5,3,77,45,23,43,12,23};
	for(int i = 0 ; i < 9 ; ++i){
		for(int j = 9 ; j>i ; --j){
			if(arr[j]<arr[j-1]){
				int temp = arr[j];
				arr[j] = arr[j-1];
				arr[j-1]  = temp;
			}
		}
	}
	for(int i = 0 ; i<10 ; i++){
		printf("%5d",arr[i]);
	}
	return 0;
}
