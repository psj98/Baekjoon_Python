#include <iostream>

using namespace std;

int main() {
    int a, b, n, x=100, y=100;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d %d", &a, &b);
        
        if(a<b) x-=b;
        else if(a>b) y-=a;
    }

    printf("%d\n%d", x, y);

    return 0;
}