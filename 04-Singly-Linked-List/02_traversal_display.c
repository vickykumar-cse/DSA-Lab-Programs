#include <stdio.h>
#include <stdlib.h>
struct Node{int data;struct Node*next;};
int main(){
    struct Node *head=NULL,*tail=NULL,*p; int n,x;
    scanf("%d",&n);
    while(n--){scanf("%d",&x);p=malloc(sizeof(*p));p->data=x;p->next=NULL;
        if(!head)head=tail=p;else{tail->next=p;tail=p;}}
    for(p=head;p;p=p->next)printf("%d ",p->data);
    return 0;
}