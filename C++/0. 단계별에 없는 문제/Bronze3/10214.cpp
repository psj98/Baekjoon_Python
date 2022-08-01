#include <iostream>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        int y=0, k=0;
        for(int j=0; j<9; j++){
            int a, b;
            scanf("%d %d", &a, &b);
            y+=a, k+=b;
        }

        if(y==k) printf("Draw\n");
        else if(y>k) printf("Yonsei\n");
        else printf("Korea\n");
    }

    return 0;
}