#include <iostream>

using namespace std;

int main() {
    int a, b, c, d, e, ans;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    if(a<0) ans=c*(-a)+d+e*b;
    else if(a==0) ans=d+e*b;
    else ans=e*(b-a);

    printf("%d", ans);
    
    return 0;
}