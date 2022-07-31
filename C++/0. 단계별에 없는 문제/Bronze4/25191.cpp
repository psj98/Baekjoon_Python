#include <iostream>

using namespace std;

int main() {
    int n, a, b;
    scanf("%d %d %d", &n, &a, &b);
    printf("%d", min(a/2+b, n));
    
    return 0;
}