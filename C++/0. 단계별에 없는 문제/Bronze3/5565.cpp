#include <iostream>

using namespace std;

int main() {
    int n, m, sum=0;
    scanf("%d", &n);
    for(int i=0; i<9; i++){
        scanf("%d", &m);
        sum+=m;
    }

    printf("%d", n-sum);
    
    return 0;
}