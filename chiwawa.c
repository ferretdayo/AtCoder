#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    int i;
    int j=0,k=0,l=0,m=0,n=0;
    int count;
    
    scanf("%s",s);

    for(i=0; i < strlen(s); i++) {
        if(s[i]=='a') {
            j++;
        }else if(s[i]=='b'){
            k++;
        }else if(s[i]=='c'){
            l++;
        }else if(s[i]=='d'){
            m++;
        }else if(s[i]=='e'){
            n++;
        }
    }
    printf("%d %d %d %d %d\n",j,k,l,m,n);
    return 0;
}
