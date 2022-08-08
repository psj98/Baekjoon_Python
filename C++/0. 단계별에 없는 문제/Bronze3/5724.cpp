#include <iostream>

using namespace std;

int main() {
    while(1){
        int m, sum=0;
        scanf("%d", &m);

        if(m==0) break;
        
        for(int j=1; j<=m; j++)
            sum+=j*j;
        
        printf("%d\n", sum);
    }

    return 0;
}