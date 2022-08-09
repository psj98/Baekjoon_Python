#include <iostream>
#include <math.h>

typedef long long ll;
using namespace std;

int main() {
    int cnt=1;
    while(1){
        ll a, b, c;
        scanf("%lld %lld %lld", &a, &b, &c);

        if(a==0 && b==0 && c==0) break;

        printf("Triangle #%d\n", cnt);
        if(a==-1){
            if(c*c-b*b<=0) printf("Impossible.\n\n");
            else printf("a = %.3lf\n\n", sqrt(double(c*c)-double(b*b)));
        }

        else if(b==-1){
            if(c*c-a*a<=0) printf("Impossible.\n\n");
            else printf("b = %.3lf\n\n", sqrt(double(c*c)-double(a*a)));
        }

        else if(c==-1)
            printf("c = %.3lf\n\n", sqrt(double(a*a)+double(b*b)));

        cnt++;
    }

    return 0;
}