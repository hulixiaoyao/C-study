#include <stdio.h>
#define MaxSize 50
typedef int ElemType;
//静态分配
typedef struct {
    ElemType data[MaxSize];
    int length;
}SqList;

bool ListInsert(SqList &L,int i,ElemType e){
    if(i<1||i>L.length+1){
        return false;
    }
    if(L.length>=MaxSize){
        return false;
    }
    for(int j=L.length;j>=i;j--){
        L.data[j]=L.data[j-1];
    }
    L.data[i-1]=e;
    L.length++;
    return true;
}
void ListPrintf(SqList L){
    for(int i=0;i<L.length;i++){
        printf("%3d",L.data[i]);
    }
    printf("\n");
}
bool ListDelete(SqList &L,int i,ElemType &e){
    if(i<1||i>L.length)
    {
        return false;
    }
    e=L.data[i-1];
    for(int j=i;j<=L.length;j++){
        L.data[j-1]=L.data[j];
    }
    L.length--;
    return true;
}
int main(){
    SqList L;
    bool ret;
    L.data[0]=1;
    L.data[1]=2;
    L.data[2]=3;
    L.length=3;
    int q;
    scanf("%d",&q);
    ret=ListInsert(L,2,q);
    if(ret){
        ListPrintf(L);
    }else{
        printf("false\n");
    }
    ElemType e;
    scanf("%d",&q);
    ret=ListDelete(L,q,e);
    if(ret)
    {
        ListPrintf(L);
    }else{
        printf("false");
    }

}
