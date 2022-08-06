#include <iostream>

using namespace std;

int main() {
    int n, k, sum=0;
    scanf("%d %d", &k, &n);

    for(int i=0; i<n; i++){
        int t;
        char z;
        scanf("%d %c", &t, &z);

        sum+=t;
        if(sum>=210){
            printf("%d", k);
            break;
        }

        if(z=='T'){
            k++;
            if(k==9) k=1;
        }
    }

    return 0;
}