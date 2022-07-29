#include <iostream>

using namespace std;

int main() {
    int a, n, ans=0;
    scanf("%d", &n);

    for(int i=0; i<5; i++){
        scanf("%d", &a);
        if(a%10==n) ans++;
    }

    printf("%d", ans);

    return 0;
}