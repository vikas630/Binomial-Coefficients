#include<iostream>
int bio(int n,int k){
if(n<k)
return 0;
if(k==0||n==k)
return 1;
long double a[n];
a[0]=1;
for(int i=1;i<n;i++){
    a[i]=a[i-1]*(i+1);
}
int kfac=a[n-k-1];
return (a[n-1])/(a[k-1]*kfac);
}