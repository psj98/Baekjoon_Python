#include <iostream>

using namespace std;

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int arr[n]={0};
    for(int i=0; i<m; i++){
        int a, b;
        scanf("%d %d", &a, &b);

        arr[a-1]++, arr[b-1]++;
    }

    for(int i=0; i<n; i++)
        printf("%d\n", arr[i]);

    return 0;
}