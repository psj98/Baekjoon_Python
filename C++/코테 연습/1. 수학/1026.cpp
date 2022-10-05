#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, ans=0;
    scanf("%d", &n);

    int a[n], b[n];
    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);

    for(int i=0; i<n; i++)
        scanf("%d", &b[i]);

    sort(a, a+n, greater<int>());
    sort(b, b+n);

    for(int i=0; i<n; i++)
        ans+=a[i]*b[i];

    printf("%d", ans);

    return 0;
}