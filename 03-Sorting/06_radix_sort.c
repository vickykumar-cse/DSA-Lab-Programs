#include <stdio.h>
int main(){
    int a[100],n,i,j,max,exp=1,b[100],count[10];
    scanf("%d",&n);
    for(i=0;i<n;i++)scanf("%d",&a[i]);
    max=a[0]; for(i=1;i<n;i++)if(a[i]>max)max=a[i];

    while(max/exp>0){
        for(i=0;i<10;i++)count[i]=0;
        for(i=0;i<n;i++)count[(a[i]/exp)%10]++;
        for(i=1;i<10;i++)count[i]+=count[i-1];
        for(i=n-1;i>=0;i--)b[--count[(a[i]/exp)%10]]=a[i];
        for(i=0;i<n;i++)a[i]=b[i];
        exp*=10;
    }
    for(i=0;i<n;i++)printf("%d ",a[i]);
    return 0;
}