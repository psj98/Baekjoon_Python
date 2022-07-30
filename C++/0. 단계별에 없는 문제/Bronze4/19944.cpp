#include <iostream>

using namespace std;

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    if(m<=2) printf("NEWBIE!");
    else if(m<=n && m>=3) printf("OLDBIE!");
    else printf("TLE!");
    
    return 0;
}