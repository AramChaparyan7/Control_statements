#include <stdio.h>

int main(){
	int a;
	scanf("%d",&a);
	int b=1;
	while(10*b<=a){
		b*=10;
	}
	while(b>=1){
		printf("%d ",a/b);
		a=a%b;
		b/=10;
	}
	return 0;
}
