#include <iostream>

typedef long long ll;
using namespace std;

ll arr[91][2]={{0, 0}, {0, 1}};

int main() {
    int n;
    scanf("%d", &n);
    
    for(int i=2; i<=n; i++){
        for(int j=0; j<2; j++){
            if(j==1) arr[i][j]=arr[i-1][0];
            else arr[i][j]=arr[i-1][0]+arr[i-1][1];
        }
    }
    
    printf("%lld", arr[n][0]+arr[n][1]);

    return 0;
}