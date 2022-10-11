#include <iostream>

using namespace std;

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    if(n==1) printf("1");
    else if(n==2) printf("%d", min((m+1)/2, 4));
    else{
        if(m<=6) printf("%d", min(m, 4));
        else printf("%d", m-2);
    }

    return 0;
}