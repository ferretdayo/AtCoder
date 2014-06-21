#include <stdio.h>
 
void change(char *str){
   int flg = 0;
   while(*str != '\0'){
      if(flg == 0){
         if((*str >= 'a') && (*str <= 'z')){
            *str -= 32;
         }
            flg = 1;
      }else if(flg ==1){
        if((*str >= 'A') && (*str <= 'Z')){
            *str += 32;
        }
      }
      str++;
    }
}
      
 
int main(){
    char str[15];
    scanf("%s",str);
    change(str);
    printf("%s\n",str);
    return 0;
}
