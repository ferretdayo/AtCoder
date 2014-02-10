#include<stdio.h>

int main(){
    int N;
    int i;
    scanf("%d",&N);
        for(i=2;i<N/2;i++){
            if(N%i==0){
                printf("NO\n");
                return 0;
            }
        }
    printf("YES\n");
    return 0;
}
