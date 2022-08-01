#include <iostream>

using namespace std;

int main() {
    int a, b, n, ans=1;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d %d", &a, &b);
        if(ans==a) ans=b;
        else if(ans==b) ans=a;
    }

    printf("%d", ans);

    return 0;
}