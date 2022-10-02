#include <iostream>

using namespace std;

int main() {
    int n, a, b, cnt=1;
    scanf("%d %d %d", &n, &a, &b);

    while(1){
        if((a+1)/2==(b+1)/2) break;

        a=(a+1)/2;
        b=(b+1)/2;

        cnt++;
    }

    printf("%d", cnt);
    
    return 0;
}