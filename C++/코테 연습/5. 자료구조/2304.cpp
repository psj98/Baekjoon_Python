#include <iostream>
#include <algorithm>
#define MAX 1001

using namespace std;

int arr[MAX];

int main() {
    int a, b, n, idx=-1, m=-1, sum=0;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d %d", &a, &b);
        arr[a]=b;
        if(m<b){
            idx=a;
            m=b;
        }
    }

    int left=0;
    for(int i=1; i<idx; i++){
        left=max(left, arr[i]);
        sum+=left;
    }

    int right=0;
    for(int i=MAX-1; i>idx; i--){
        right=max(right, arr[i]);
        sum+=right;
    }

    sum+=m;

    printf("%d", sum);

    return 0;
}