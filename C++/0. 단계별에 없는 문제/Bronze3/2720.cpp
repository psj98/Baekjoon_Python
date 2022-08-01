#include <iostream>

using namespace std;

int main() {
    int a, n;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        int q, d, m, p;
        scanf("%d", &a);

        q=a/25;
        d=(a%25)/10;
        m=((a%25)%10)/5;
        p=((a%25)%10)%5;

        printf("%d %d %d %d\n", q, d, m, p);
    }

    return 0;
}