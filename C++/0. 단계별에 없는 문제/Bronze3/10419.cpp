#include <iostream>

using namespace std;

int main() {
    int t;
    scanf("%d", &t);

    for(int i=0; i<t; i++){
        int d, ans=0;
        scanf("%d", &d);

        for(int j=0; j<=d/2; j++){
            if(j+j*j<=d) ans=j;
            else break;
        }

        printf("%d\n", ans);
    }

    return 0;
}