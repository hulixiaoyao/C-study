#include <stdio.h>
#include <string.h>
int main(){
  char str[100];
  gets(str);
  int len =strlen(str);
  char reverse[len];
  for(int i=0;i<len;i++){
    reverse[i]=str[len-i-1];
    }
    reverse[len]='\0';
    int result=strcmp(str,reverse);
    if(result==0){
      printf("0");
      }
    else if(result<0){
        printf("-1");}
    else{
          printf("1");
          }
          return 0;
          }