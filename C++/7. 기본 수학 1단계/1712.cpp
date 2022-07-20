#include <iostream>

using namespace std;

int main(){
    int a, b, c, ans;
    scanf("%d %d %d", &a, &b, &c);

    if(c-b<=0) printf("-1");
    else printf("%d", a/(c-b)+1);

    return 0;
}