#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int i;
    char c;
    scanf("%d",&i);
    char *p;
    p=(char*)malloc(i);
    scanf("%c",&c);
    fgets(p,i,stdin);
    puts(p);
    free(p);
    return 0;
}