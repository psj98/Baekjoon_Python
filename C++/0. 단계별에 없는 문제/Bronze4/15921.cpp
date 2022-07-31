#include <iostream>

using namespace std;

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    printf("%d", min(n/2, m/2));
    
    return 0;
}