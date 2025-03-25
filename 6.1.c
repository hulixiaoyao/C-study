#include <stdio.h>
int change( int *i){
  *i=*i/2;
    return *i;
  }
 int main(){
   int i=0;
    scanf("%d",&i);
    change(&i);
   printf("%d",i);
   return 0;}
