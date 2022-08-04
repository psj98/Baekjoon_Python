#include <iostream>

using namespace std;

int main() {
    int a, n;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d", &a);
        
        for(int j=0; j<a; j++){
            for(int k=0; k<a; k++){
                if(k==0 || k==a-1 || j==0 || j==a-1) printf("#");
                else printf("J");
            }
            printf("\n");
        }

        printf("\n");
    }

    return 0;
}