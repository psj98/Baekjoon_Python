#include <iostream>
#include <algorithm>

using namespace std;

int a[1001];
int h[1001];

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);
    
    for(int i=0; i<m; i++)
        scanf("%d", &h[i]);

    printf("%d", *max_element(a, a+n)+*max_element(h, h+m));

    return 0;
}