#include <iostream>

using namespace std;

int main() {
    int a1, a2, b1, b2;
    scanf("%d %d %d %d", &a1, &a2, &b1, &b2);

    while(1){
        a2-=b1;
        b2-=a1;
        if(a2<=0 || b2<=0) break;
    }

    if(a2<=0 && b2<=0) printf("DRAW");
    else if(a2>0 && b2<=0) printf("PLAYER A");
    else printf("PLAYER B");

    return 0;
}