#include <stdio.h>
#include <stdlib.h>
struct Node{int data;struct Node*next;};
int main(){
    struct Node*h=NULL,*t=NULL,*p;int n,x,count=0;
    scanf("%d",&n);
    while(n--){scanf("%d",&x);p=malloc(sizeof(*p));p->data=x;p->next=NULL;
        if(!h)h=t=p;else{t->next=p;t=p;}}
    for(p=h;p;p=p->next)count++;
    printf("%d",count);return 0;
}