#include <iostream>
#define MAX 500001

using namespace std;
int sorted[MAX];
int ans=0, num;

void merge(int arr[], int left, int mid, int right){
    int i=left, j=mid+1, k=left;

    while(i<=mid && j<=right){
        if(arr[i]<=arr[j]) sorted[k++]=arr[i++];
        else sorted[k++]=arr[j++];
    }

    if(i>mid){
        for(int l=j; l<=right; l++)
            sorted[k++]=arr[l];
    }

    else{
        for(int l=i; l<=mid; l++)
            sorted[k++]=arr[l];
    }

    for(int l=left; l<=right; l++){
        arr[l]=sorted[l];
        ans++;
        if(ans==num) printf("%d\n", arr[l]);
    }
}

void mergeSort(int arr[], int left, int right){
    int mid;

    if(left < right){
        mid=(left+right)/2;
        mergeSort(arr, left, mid); // 앞 부분
        mergeSort(arr, mid+1, right); // 뒷 부분

        // Combine
        merge(arr, left, mid, right);
    }    
}

int main() {
    int n;
    scanf("%d %d", &n, &num);

    int arr[n]={0};
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    mergeSort(arr, 0, n-1);

    if(ans<num) printf("-1");

    return 0;
}