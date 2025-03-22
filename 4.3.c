#include <stdio.h>
int main(){
  int i,j,k,l,count=0;
  for(i=1;i<10;i++){
    for(j=1;j<20;j++){
      for(k=1;k<50;k++){
        for(l=1;l<100;l++){
          if(i+j+k+l==40&&i*10+j*5+k*2+l*1==100){
            count++;}
          }
          }
          }
          }
          printf("%d",count);
          return 0;
          }