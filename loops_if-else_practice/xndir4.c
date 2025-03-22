#include <stdio.h>

int main(){
	int num=0;
	scanf("%d",&num);
	int p=1;
	int c=0;
	for(int i=0;p<=num;c++){
		p*=10;
	}
	int res=0;
	int number=num;
	for(int i=0;i<c;i++){
		int d=1;
		for(int j=0;j<c;j++){
			d*=num%10;
		}
		num/=10;
		res+=d;
	}
	if(res==number){
		printf("Yes");
	}else{
		printf("NO");
	}
	return 0;
}
