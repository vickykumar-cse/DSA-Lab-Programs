#include <stdio.h>
void merge(int a[],int l,int m,int r){
    int t[100],i=l,j=m+1,k=l;
    while(i<=m && j<=r) t[k++]=(a[i]<a[j])?a[i++]:a[j++];
    while(i<=m)t[k++]=a[i++];
    while(j<=r)t[k++]=a[j++];
    for(i=l;i<=r;i++)a[i]=t[i];
}
void sort(int a[],int l,int r){
    if(l>=r)return;
    int m=(l+r)/2;
    sort(a,l,m); sort(a,m+1,r); merge(a,l,m,r);
}
int main(){
    int a[100],n,i; scanf("%d",&n);
    for(i=0;i<n;i++)scanf("%d",&a[i]);
    sort(a,0,n-1);
    for(i=0;i<n;i++)printf("%d ",a[i]);
    return 0;
}