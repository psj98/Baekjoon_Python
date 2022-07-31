#include <iostream>

using namespace std;

int main() {
    int n, m, k, ans=0;
    scanf("%d %d %d", &n, &m, &k);

    printf("%d", min(m,k)+min(n-m, n-k));
    
    return 0;
}