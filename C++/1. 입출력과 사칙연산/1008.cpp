#include <iostream>

using namespace std;

int main(){
    int a, b;
    scanf("%d %d", &a, &b);

    printf("%.16f", double(a)/double(b));

    return 0;
}