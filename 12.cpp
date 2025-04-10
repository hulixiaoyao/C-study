#include <stdio.h>
#include <stdlib.h>
typedef int ElemType;
typedef struct LNode{
  ElemType data;
  struct LNode *next;
  }LNode,*LinkList;
bool  list_head_insert (LinkList &L){
  L=(LinkList)malloc(sizeof(LNode));
  LinkList s;ElemType x;
  L->next=NULL;
  scanf("%d",&x);
  while(x!=9999){
  s=(LinkList)malloc(sizeof(LNode));
  s->data=x;
  s->next=L->next;
  L->next=s;
  scanf("%d",&x);
  }
  return true;
}
void print_list(LinkList L)
{

  L = L->next;

  while (L != NULL)

  {

    printf("%3d", L->data);//打印当前结点数据

    L = L->next;//指向下一个结点

  }

  printf("\n");

}
void list_tail_insert(LinkList &L)
{
  ElemType x;
  L=(LinkList)malloc(sizeof(LNode));
  L->data=NULL;
  LinkList s,r=L;
  scanf("%d",&x);
  while (x!=9999)
  {
    s=(LinkList)malloc(sizeof(LNode));
    s->data=x;
    s->next=r->next;
    r->next=s;
    r=s;
    scanf("%d",&x);
  }

}
LinkList GetElem(LinkList L,ElemType e)
{
  ElemType i=1;
  LinkList p=L->next;
  if (e==0)
  {
    return L;
  }
  if (e<1)
  {
    return NULL;
  }
  while (p&&i<e)
  {
    p=p->next;
    i++;
  }
  return p;
}
LinkList LocateElem(LinkList L,ElemType e)
{
  LinkList p=L->next;
  while (p!=NULL&&p->data!=e){
  p=p->next;}
  return p;
}
bool ListFrontInsert(LinkList &L,int i,ElemType e)
{
  LinkList p=GetElem(L,i-1);
  if(p==NULL)
  {
    return false;
  }
  LinkList s=(LinkList)malloc(sizeof(LNode));
  s->data=e;
  s->next=p->next;
  p->next=s;
  return true;
}
bool ListDelete(LinkList &L,ElemType i)
{
  LinkList p=GetElem(L,i-1);
  if(p==NULL)
  {
    return false;
  }
  LinkList q=p->next;
  if (q==NULL)
  {
    return false;
  }
  p->next=q->next;
  free(q);
  return true;
}

int main(){
  LinkList L;
  LinkList search;
  /*list_head_insert(L);
  print_list(L);*/
  list_tail_insert(L);
  search=GetElem(L,2);
  if (search!=NULL)
  {
    printf("%d\n",search->data);
  }
  ListFrontInsert(L,2,99);
  print_list(L);
  ListDelete(L,4);
  print_list(L);
  return 0;
  }