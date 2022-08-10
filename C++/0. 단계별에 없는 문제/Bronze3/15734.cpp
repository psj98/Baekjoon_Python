#include <iostream>

using namespace std;

int main() {
    int l, a, r;
    scanf("%d %d %d", &l, &r, &a);

    while(1){
        if(l<r) l++, a--;
        else if(l>r) r++, a--;
        else{
            l+=(a/2), r+=(a/2);
            break;
        }

        if(a==0) break;
    }

    if(l<r) printf("%d", l*2);
    else printf("%d", r*2);

    return 0;
}