#include<stdio.h>
int main(){
	int m,n;
	printf(" nhap m : ");
	scanf("%d",&m);
	printf(" nhap n : ");
	scanf("%d",&n);
	for(int i = 1; i<= m ; ++i){
		for(int j = 1; j <=n ; ++j)
			printf(" * ");
			printf("\n");
	}

	return 0;
}
