#include<stdio.h>
int main(){
    int n,i,target;
    printf("Enter Size:\n");
    scanf("%d",&n);
    printf("Enter Target Value:\n");
    scanf("%d",&target);
    
    int arr[n];
    printf("Enter Array Elements: \n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int flag=0;
    for(i=0;i<n;i++){
        if (arr[i]==target){
            printf("Element Founded at position: %d \n",i+1);
            flag=1;
        }
    }
    if(flag==0){
        printf("Element Not Founded");
    }
}