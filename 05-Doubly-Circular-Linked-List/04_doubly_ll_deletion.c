#include <stdio.h>
#include <stdlib.h>
struct Node{int data;struct Node*prev,*next;};
int main(){
    struct Node*h=NULL,*t=NULL,*p,*q;int n,x;
    scanf("%d",&n);
    while(n--){scanf("%d",&x);p=malloc(sizeof(*p));p->data=x;p->next=NULL;p->prev=t;
        if(!h)h=p;else t->next=p;t=p;}
    if(h){p=h;h=h->next;if(h)h->prev=NULL;else t=NULL;free(p);}
    for(q=h;q;q=q->next)printf("%d ",q->data);
    return 0;
}