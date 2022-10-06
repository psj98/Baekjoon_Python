#include <iostream>

using namespace std;

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    for(int i=0; i<m-1; i++)
        printf("%d %d\n", i, m-1);

    for(int i=m-1; i<n-1; i++)
        printf("%d %d\n", i, i+1);

    return 0;
}