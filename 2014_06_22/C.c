#include <stdio.h>
 
int max(int data[]){
       int max = data[0];
       int i;
       for(i=1;i<3;i++){
           if(max < data[i]){
                  max = data[i];
           }
        }
        return max;
}
 
int min(int data[]){
       int min = data[0];
       int i;
       for(i=1;i<3;i++){
           if(min > data[i]){
                  min = data[i];
           }
        }
        return min;
}  
 
int check(int n,int ng1,int ng2,int ng3){
	int data[3] = {ng1,ng2,ng3};
  int dat[3];
	int s = n,flg = 0,ok = 0;
	int cnt = 0,M,m,i;
  double a = n / 3;
  M = max(data);
  m = min(data);
  dat[0] = m;
  dat[2] = M;
  if(ng1 < M && ng1 > m) dat[1] = ng1;
  if(ng2 < M && ng2 > m) dat[1] = ng2;
  if(ng3 < M && ng3 > m) dat[1] = ng3;
  for (i = 0;i<3;i++){
    if(n < dat[i]){
        ok++;
    }
  }
  if(ok == 3) return 1;
  if((dat[0] == dat[1]-1) && (dat[1] == dat[2]-1)){
    return 0;
  }
  if(n == ng1 || n == ng2 || n == ng3) return 0;
	while(1){
		if(s-1 == ng1 || s-1 == ng2 || s-1 == ng3){
			flg = 1;
		}
		if(s-2 == ng1 || s-2 == ng2 || s-2 == ng3){
			flg = 2;
		}
		if(s-3 == ng1 || s-3 == ng2 || s-3 == ng3){
			flg = 3;
		}
		if(s-1 == 0 || s-2 == 0 || s-3 == 0){
			return 1;
		}
    if(flg == 0){
			s -= 3;
		}else if(flg == 1){
			s -= 3;
		}else if(flg == 2){
			s -= 3;
		}else if(flg == 3){
			s -= 2;
		}
		cnt++;
		if(cnt >=100){
			return 0;
		}
	}
}
int main(){
	int N,NG1,NG2,NG3;
	scanf("%d%*c",&N);
	scanf("%d%*c",&NG1);
	scanf("%d%*c",&NG2);
	scanf("%d%*c",&NG3);
	if(check(N,NG1,NG2,NG3) == 1){
		printf("YES\n");
	}else{
		printf("NO\n");
	}
	return 0;
}
