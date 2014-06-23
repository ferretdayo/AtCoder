#include <stdio.h>

int main(){
	int m;
	scanf("%d",&m);
	
	if(m < 100){
		printf("00\n");
	}else if(m >= 100 && m <= 5000){
		if(m < 1000){
			printf("0%d\n",m/100);
		}else{
			printf("%d\n",m/100);
		}
	}else if(m >= 6000 && m <= 30000){
		printf("%d\n",m/1000 + 50);
	}else if(m >= 35000 && m <= 70000){
		printf("%d\n",(m/1000 - 30)/5 + 80);
	}else if(m > 70000){
		printf("89\n");
	}
	return 0;
}
