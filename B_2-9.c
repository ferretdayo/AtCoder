#include<stdio.h>

int check(int A[],int K,int N){
	int i,j,count=0,ok=0;
	if(N/2<K){
		return 0;
	}
	for(i=0;i<N-K;i++){
		count=0;
		for(j=0;j<K-1;j++){
			if(A[j+i]<A[j+1+i]){
				count++;
			}
		}
		if(count==(K-1)){
			ok++;
		}
	}
	return ok;
}

int main(){
	int N;
	int K;
	int A[300000];
	int i,res;
	scanf("%d %d",&N,&K);
	
	for(i=0;i<N;i++){
		scanf("%d",&A[i]);
	}

	res = check(A,K,N);
	printf("%d\n",res);
	
	return 0;

}
