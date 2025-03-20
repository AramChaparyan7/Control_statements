#include <stdio.h>

int main(){
	int a=0;
	scanf("%d",&a);
	int t=0;
	while(a>0){
		t=a%10;
		printf("%d",t);
		a/=10;
	}
	return 0;
}
