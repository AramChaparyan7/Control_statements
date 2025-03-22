#include <stdio.h>

int main(){
	int a=0,b=0;
	printf("input two numbers ");
	scanf("%d %d",&a, &b);
	if(a!=0 || b!=0){
		int res=1;
		for(int i=0;i<b;i++){
			res*=a;
		}
		printf("%d ",res);
	}else{
		printf("there is no 0 power of 0 \n");
	}
	return 0;
}
