#include <stdio.h>
#include <stdlib.h>
struct Node{int data;struct Node*next;};
int main(){
    struct Node*head=NULL,*tail=NULL,*p;int n,x,key,pos=1;
    scanf("%d",&n);
    while(n--){scanf("%d",&x);p=malloc(sizeof(*p));p->data=x;p->next=NULL;
        if(!head)head=tail=p;else{tail->next=p;tail=p;}}
    scanf("%d",&key);
    for(p=head;p;p=p->next,pos++)if(p->data==key){printf("Found at position %d",pos);return 0;}
    printf("Not found");return 0;
}