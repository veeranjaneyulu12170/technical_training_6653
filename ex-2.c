#include<stdio.h>
int main(){
    int i,n=2;
    int arr[5]={1,2,3,4,5};
    int arr3[2];
    int arr2[5];
    for(i=0;i<n;i++){
        arr3[i]=arr[i];
    }
   for(i=0;i<=n;i++){
       arr2[i]=arr[n+i];
       arr2[n+1+i]=arr3[i];
   }
   
   for(i=0;i<5;i++){
       printf("%d",arr2[i]);
   }
}