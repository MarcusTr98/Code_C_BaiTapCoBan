#include<stdio.h>
int timMax(int a[], int n){
    int max=a[0];
    for( int i=0; i<n; i++){
        if(max < a[i]){
            max=a[i];
        }
    }
    printf("%d", max);
    return max;
}
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    timMax(arr,n);
    return 0;
}
