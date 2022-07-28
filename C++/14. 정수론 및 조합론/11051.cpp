#include <iostream>
#define MAX 1001
#define DIV 10007

typedef long long ll;
using namespace std;

ll arr[MAX][MAX];

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    for(int i=1; i<=n; i++)
        arr[i][0]=arr[i][i]=1;

    for(int i=2; i<=n; i++)
        for(int j=1; j<i; j++)
            arr[i][j]=arr[i-1][j-1]%DIV+arr[i-1][j]%DIV;

    printf("%lld", arr[n][k]%DIV);

    return 0;
}