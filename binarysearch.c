#include<stdio.h>
int main(){
    int n,i,target;
    printf("Enter Size:\n");
    scanf("%d",&n);
    printf("Enter Target Value:\n");
    scanf("%d",&target);
    
    int arr[n];
    printf("Enter Sorted Array Elements: \n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int left=0;
    int right = n-1;
    while(left<=right){
        int mid=(left+right)/2;
        if(arr[mid]==target){
            printf("Element Found at position: %d\n",mid+1);
            return 0;
        }
        else if(arr[mid]<target){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
        printf("Element Not Found \n");
        return 0;

}