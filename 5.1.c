#include <stdio.h>
int main(){
  int n,count=0;
  scanf("%d\n",&n);
  int a[n];
  for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
   for (int j=0;j<n;j++){
     if(a[j]==2){
       count++;
       }
       }
       printf("%d",count);
  return 0;
       }