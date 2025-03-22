#include <stdio.h>

int main(){
	int n=0;
	scanf("%d",&n);
	for(int i=0;i<n-1;i++){
		for(int j=0;j<2*n-1;j++){
			if(j==n-i-1 || j==n-1+i){
				printf("*");
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
	for(int i=0;i<n;i++){
		printf("* ");
	}
	return 0;
}
