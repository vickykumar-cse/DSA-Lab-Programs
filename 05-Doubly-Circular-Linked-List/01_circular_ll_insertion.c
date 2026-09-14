#include <stdio.h>
#include <stdlib.h>
struct Node{int data;struct Node*next;};
int main(){
    struct Node*h=NULL,*tail=NULL,*p;int n,x;
    scanf("%d",&n);
    while(n--){scanf("%d",&x);p=malloc(sizeof(*p));p->data=x;
        if(!h){h=tail=p;p->next=h;}else{p->next=h;tail->next=p;tail=p;}}
    scanf("%d",&x);p=malloc(sizeof(*p));p->data=x;p->next=h;tail->next=p;h=p;
    for(struct Node*q=h;;q=q->next){printf("%d ",q->data);if(q->next==h)break;}
    return 0;
}