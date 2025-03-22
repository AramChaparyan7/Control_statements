#include <stdio.h>

int main(){
	int num=0;
	scanf("%d",&num);
	while(num>0){
		int h=num%10;
		if(h!=4 && h!=7){
			printf("NO");
			return 0;
		}
		num/=10;
	}
	printf("YES");
	return 0;
}
