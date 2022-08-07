#include <iostream>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);

    for(int i=1; i<=100; i++){
        if(i*(i+1)==n-1){
            printf("%d", i);
            break;
        }
    }

    return 0;
}