#include<stdio.h>
int main(){
    int i;
    int arr[5]={1,2,3,4,5};
    int arr2[5];
    for(i=5;i>0;i--){
        arr2[i]=arr[5-i];
    }
    for(i=1;i<5;i++){
        printf("%d",arr2[i]);
    }
}
