#include<stdio.h>
int main(){
	int n;
	printf("nhap sp phan tu n : ");
	scanf("%d",&n);
	int a[n];
	int sum=0;
	for(int i=0;i<n;++i){
		printf("nhap phan tu : \n");
		scanf("%d",&a[i]);
		sum += a[i];
	}
	double trung_binh = (double)sum/n;
		printf("gia tri trung binh cua mang bang %0.2lf ",trung_binh);


	return 0;
}
