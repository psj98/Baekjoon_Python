#include <iostream>

using namespace std;

int main() {
    int t;
    scanf("%d", &t);

    for(int i=0; i<t; i++){
        int n, c;
        scanf("%d %d", &n, &c);

        if(n%c==0) printf("%d\n", n/c);
        else printf("%d\n", n/c+1);
    }

    return 0;
}