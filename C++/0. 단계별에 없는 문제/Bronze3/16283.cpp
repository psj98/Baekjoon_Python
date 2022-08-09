#include <iostream>

using namespace std;

int main() {
    int a, b, n, w, cnt=0, x, y;
    scanf("%d %d %d %d", &a, &b, &n, &w);

    for(int i=1; i<n; i++)
        if(i*a+(n-i)*b==w)
            x=i, y=n-i, cnt++;

    if(cnt==1) printf("%d %d", x, y);
    else printf("-1");

    return 0;
}