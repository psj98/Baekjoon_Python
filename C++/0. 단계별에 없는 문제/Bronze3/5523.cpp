#include <iostream>

using namespace std;

int arr[2];

int main() {
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        int a, b;
        scanf("%d %d", &a, &b);

        if(a>b) arr[0]++;
        else if(a<b) arr[1]++;
    }

    printf("%d %d", arr[0], arr[1]);

    return 0;
}