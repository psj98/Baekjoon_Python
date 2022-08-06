#include <iostream>

using namespace std;

int main() {
    while(1){
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        if(a==0 && b==0 && c==0) break;

        if(a-b==b-c) printf("AP %d\n", c-(a-b));
        else if(b/a==c/b) printf("GP %d\n", c*(b/a));
    }

    return 0;
}