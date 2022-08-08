#include <iostream>

using namespace std;

int main() {
    int a, b, n, m;
    scanf("%d %d", &n, &m);

    for(int i=0; i<n; i++){
        scanf("%d %d", &a, &b);
        if(a!=b){
            printf("Wrong Answer");
            return 0;
        }
    }

    for(int i=0; i<m; i++){
        scanf("%d %d", &a, &b);
        if(a!=b){
            printf("Why Wrong!!!");
            return 0;
        }
    }

    printf("Accepted");

    return 0;
}