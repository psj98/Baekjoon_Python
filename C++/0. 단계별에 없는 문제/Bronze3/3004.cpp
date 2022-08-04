#include <iostream>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);

    if(n%2==0) printf("%d", (n/2+1)*(n/2+1));
    else printf("%d", (n/2+1)*((n-n/2)+1));

    return 0;
}