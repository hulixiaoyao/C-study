#include<stdio.h>
int step(int n){
    if(n==1||n==2){
        return n;}
    return step(n-1)+step(n-2);
}
int main(){
    int n,ret=0;
    scanf("%d",&n);
    ret=step(n);
    printf("%d",ret);
    return 0;}