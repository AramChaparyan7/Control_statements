#include <stdio.h>

int main(){
	int n=0;
	int q=1;
	scanf("%d",&n);
	if(n==1){
		printf("Yes");
		return 0;
	}
	for(int i=2;i<n;i++){
		if(n%i==0){
			q+=i;
		}
	}
	if(q==n){
		printf("Yes");
	}else{
		printf("No");
	}
	return 0;
}
