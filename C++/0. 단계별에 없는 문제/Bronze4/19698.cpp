#include <iostream>

using namespace std;

int main() {
    int n, w, h, l;
    scanf("%d %d %d %d", &n, &w, &h, &l);
    
    int ans=(w/l)*(h/l);
    if(n>ans) printf("%d", ans);
    else printf("%d", n);
    
    return 0;
}