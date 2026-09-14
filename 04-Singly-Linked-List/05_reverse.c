#include <stdio.h>
#include <stdlib.h>
struct Node{int data;struct Node*next;};
int main(){
    struct Node*h=NULL,*t=NULL,*p,*prev=NULL,*next;int n,x;
    scanf("%d",&n);
    while(n--){scanf("%d",&x);p=malloc(sizeof(*p));p->data=x;p->next=NULL;
        if(!h)h=t=p;else{t->next=p;t=p;}}
    p=h;
    while(p){next=p->next;p->next=prev;prev=p;p=next;}
    for(p=prev;p;p=p->next)printf("%d ",p->data);
    return 0;
}