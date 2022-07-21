#include <iostream>

using namespace std;

int main(){
    int t, a, b, c;
    scanf("%d", &t);

    for(int i=0; i<t; i++){
        scanf("%d %d %d", &a, &b, &c);
        int x=(c-1)/a+1, y;
        if(c%a==0) y=c%a+a;
        else y=c%a;

        if(x<10) printf("%d0%d\n", y, x);
        else printf("%d%d\n", y, x);
    }

    return 0;
}