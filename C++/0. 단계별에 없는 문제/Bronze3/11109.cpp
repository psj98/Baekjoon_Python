#include <iostream>

using namespace std;

int main() {
    int t;
    scanf("%d", &t);

    for(int i=0; i<t; i++){
        int d, n, s, p;
        scanf("%d %d %d %d", &d, &n, &s, &p);

        int a=d+n*p;
        int b=n*s;

        if(a<b) printf("parallelize\n");
        else if(a>b) printf("do not parallelize\n");
        else printf("does not matter\n");
    }

    return 0;
}