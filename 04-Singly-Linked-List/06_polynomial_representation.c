#include <stdio.h>
#include <stdlib.h>
struct Term{int coef,exp;struct Term*next;};
int main(){
    struct Term*h=NULL,*t=NULL,*p;int n,c,e;
    scanf("%d",&n);
    while(n--){scanf("%d%d",&c,&e);p=malloc(sizeof(*p));p->coef=c;p->exp=e;p->next=NULL;
        if(!h)h=t=p;else{t->next=p;t=p;}}
    for(p=h;p;p=p->next){if(p!=h&&p->coef>=0)printf("+");printf("%dx^%d ",p->coef,p->exp);}
    return 0;
}