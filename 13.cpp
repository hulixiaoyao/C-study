
#include <stdio.h>
#include <stdlib.h>
#define MaxSize 5
typedef int ElemType;
typedef struct
{
    ElemType data[MaxSize];
    int top;
}SqStack;
typedef struct{
    ElemType data[MaxSize];
    int front,rear;
}SqQueue;
void INitStack(SqStack &S)
{
    S.top=-1;
}
bool StackEmpty(SqStack S)
{
    if (S.top==-1)
    {
        return true;
    }return false;

}
bool Push(SqStack &S,ElemType e)
{
    if (S.top==MaxSize-1)
    {
        return false;
    }
    S.data[++S.top]=e;
    return true;
}
bool GetTop(SqStack S,ElemType &e)
{
    if (S.top==-1)
    {
        return false;
    }
    e=S.data[S.top];
    return true;
}
bool Pop(SqStack &S,ElemType &e)
{
    if (S.top==-1)
        return false;
    e=S.data[S.top--];
    return true;
}
void InitQueue(SqQueue &Q){
    Q.front = Q.rear = 0;
}
bool isEmpty(SqQueue Q){
    return Q.front == Q.rear;
}
bool EnQueue(SqQueue &Q,ElemType e){
    if((Q.rear+1)%MaxSize==Q.front){
        return false;
    }
    Q.data[Q.rear] = e;
    Q.rear = (Q.rear+1)%MaxSize;
    return true;
}
bool DeQueue(SqQueue &Q,ElemType &e){
    if(isEmpty(Q)){
        return false;
    }
    e= Q.data[Q.front++];
    Q.front%=MaxSize;
    return true;
}

int main(){
    SqQueue Q; SqStack S;
    bool ret;
    ElemType element;    ElemType e;
    InitQueue(Q);    INitStack(S);
    int i,j,k,n,m;
    scanf("%d%d%d",&i,&j,&k);
    Push(S,i);
    Push(S,j);
    Push(S,k);
    ret =Pop(S,e);
    printf("%2d",e);
    ret =Pop(S,e);
    printf("%2d",e);
    ret =Pop(S,e);
    printf("%2d\n",e);
    scanf("%d%d%d%d%d",&i,&j,&k,&n,&m);
    EnQueue(Q,i);
    EnQueue(Q,j);
    EnQueue(Q,k);
    ret=EnQueue(Q,n);
    ret=EnQueue(Q,m);
    if(ret){
        printf("true\n");
    }else{
        printf("false\n");
    }
    ret=DeQueue(Q,element);
    printf("%2d",element);
    ret=DeQueue(Q,element);
    printf("%2d",element);
    ret=DeQueue(Q,element);
    printf("%2d",element);
    ret=DeQueue(Q,element);
    printf("%2d\n",element);


    return 0;
}