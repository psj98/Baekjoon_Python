#include <iostream>

using namespace std;

int main() {
    int t, x, y;
    scanf("%d", &t);

    for(int i=0; i<t; i++){
        scanf("%d %d", &x, &y);
        printf("You get %d piece(s) and your dad gets %d piece(s).\n", x/y, x%y);
    }

    return 0;
}