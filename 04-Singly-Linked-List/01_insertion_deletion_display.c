#include <stdio.h>
#include <stdlib.h>
struct Node{int data;struct Node*next;};
void display(struct Node*h){while(h){printf("%d ",h->data);h=h->next;}}
int main(){
    struct Node *head=NULL,*p,*q; int n,x,pos,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){scanf("%d",&x);p=malloc(sizeof(*p));p->data=x;p->next=NULL;
        if(!head)head=p;else{q=head;while(q->next)q=q->next;q->next=p;}}
    scanf("%d%d",&pos,&x);
    p=malloc(sizeof(*p));p->data=x;
    if(pos==1){p->next=head;head=p;}else{q=head;for(i=1;i<pos-1&&q;i++)q=q->next;if(q){p->next=q->next;q->next=p;}}
    display(head);
    scanf("%d",&pos);
    if(pos==1&&head){p=head;head=head->next;free(p);}
    else{q=head;for(i=1;i<pos-1&&q;i++)q=q->next;if(q&&q->next){p=q->next;q->next=p->next;free(p);}}
    printf("\n");display(head);return 0;
}