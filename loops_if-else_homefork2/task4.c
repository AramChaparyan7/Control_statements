#include <stdio.h>

int main(){
  	int n=0,q=1;
	scanf("%d",&n);
	for(int i=1;q<=n;i++){
		for(int j=0;j<i;j++){
			if(q>n){
				break;
			}
			printf("%d ",q);
			q++;
		}
		printf("\n");
	}
	return 0;
}
