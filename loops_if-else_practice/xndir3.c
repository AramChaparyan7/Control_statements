#include <stdio.h>

int main(){
	int num=0;
	scanf("%d",&num);
	int a=0;
	int b=1;
	for(int i=1;i<num;i++){
		b=b+a;
		a=b-a;
	}
	printf("%d",b);
	return 0;
}
