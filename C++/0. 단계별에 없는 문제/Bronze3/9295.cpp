#include <iostream>

using namespace std;

int main() {
    int t, x, y;
    scanf("%d", &t);

    for(int i=0; i<t; i++){
        scanf("%d %d", &x, &y);
        printf("Case %d: %d\n", i+1, x+y);
    }

    return 0;
}