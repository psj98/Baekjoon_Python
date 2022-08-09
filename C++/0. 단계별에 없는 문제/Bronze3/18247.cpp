#include <iostream>

using namespace std;

int main() {
    int t, n, m;
    scanf("%d", &t);

    for(int i=0; i<t; i++){
        scanf("%d %d", &n, &m);

        if(n>=12 && m>=4){
            printf("%d\n", 11*m+4);
        }
        
        else printf("-1\n");
    }

    return 0;
}