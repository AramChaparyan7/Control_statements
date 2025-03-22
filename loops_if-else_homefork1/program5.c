#include <stdio.h>

int main(){
	int a=0;
	int res=1;
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
		res*=i;
	}
	printf("%d ",res);
	return 0;
}
