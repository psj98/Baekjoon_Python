#include <iostream>

using namespace std;

int main() {
    int x, y, w, h;
    scanf("%d %d %d %d", &x, &y, &w, &h);

    int a=w-x;
    int b=h-y;

    printf("%d", min(x, min(y, min(a, b))));

    return 0;
}