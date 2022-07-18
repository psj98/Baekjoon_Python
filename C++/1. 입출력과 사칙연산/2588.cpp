#include <iostream>

using namespace std;

int main(){
    int a;
    char b[4];
    scanf("%d %s", &a, b);

    printf("%d\n", a*(b[2]-'0'));
    printf("%d\n", a*(b[1]-'0'));
    printf("%d\n", a*(b[0]-'0'));
    printf("%d", a*atoi(b));

    return 0;
}