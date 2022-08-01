#include <iostream>

using namespace std;

int main() {
    int a=0, n, m, k;
    scanf("%d %d %d", &n, &m, &k);
    
    for(int i=0; i<=k; i++)
        if(a<min(((n-i)/2), m-k+i))
            a=min(((n-i)/2), m-k+i);

    printf("%d", a);

    return 0;
}