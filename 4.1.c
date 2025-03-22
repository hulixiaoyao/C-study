#include <stdio.h>
int main(){
  int i,n,a,sum=0;
  scanf("%d",&i);
  n=i;
  while(i!=0){
    a=i%10;
    sum=sum*10+a;
    i=i/10;
    }
   if(sum==n){
     printf("yes\n");
      }
   else{
        printf("no");
        }
        return 0;
        }