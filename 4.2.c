#include <stdio.h>
int main(){
  int n=0;
  int sum=1;
  int j=1;
  scanf("%d",&n);
  while (j<=n){
  sum=sum*j;
  j++;
}
printf("%d",sum);
return 0;
}