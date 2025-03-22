#include <stdio.h>

int main(){
    int a=0,b=0;
    scanf("%d %d",&a, &b);
    for(int i=a;i<=b;i++){
        if(i%5==0){
            printf("%d ",i);
        }
    }
    return 0;
}
