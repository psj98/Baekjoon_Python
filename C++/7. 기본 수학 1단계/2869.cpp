#include <iostream>

using namespace std;

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if((c-a)%(a-b)==0) printf("%d", (c-a)/(a-b)+1);
    else printf("%d", (c-a)/(a-b)+2);

    return 0;
}