#include <stdio.h>
struct student{
    int id;
    char name[10];
    char sex;
};
int main(){
    struct student s={292,"sshdd",'m'};
    scanf("%d%s %c",&s.id,&s.name,&s.sex);
    printf("%d %s %c",s.id,s.name,s.sex);
    return 0;
      }
