#include <iostream>

using namespace std;

int main() {
    int q;
    scanf("%d", &q);

    for(int i=0; i<q; i++){
        int a;
        scanf("%d", &a);

        if((a&(-a))==a) printf("1\n");
        else printf("0\n");
    }

    return 0;
}