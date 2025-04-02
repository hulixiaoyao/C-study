#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void read(char *&b){
    b=(char*)malloc(100);
    fgets(b,100,stdin);
}
int main(){
    char *p;
    read(p);
    puts(p);
    free(p);
    return 0;
}