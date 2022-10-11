#include <iostream>
#include <algorithm>
#define MAX 100001

using namespace std;

int up[MAX]={1};
int down[MAX]={1};
int arr[MAX];

int main() {
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    for(int i=1; i<n; i++){
        if(arr[i-1]>=arr[i]) down[i]=down[i-1]+1;
        else down[i]=1;
    }

    for(int i=1; i<n; i++){
        if(arr[i-1]<=arr[i]) up[i]=up[i-1]+1;
        else up[i]=1;
    }

    int m1=*max_element(down, down+n);
    int m2=*max_element(up, up+n);

    printf("%d", max(m1, m2));

    return 0;
}