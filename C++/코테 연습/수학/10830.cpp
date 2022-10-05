#include <iostream>

typedef long long ll;
using namespace std;

ll n, m;
ll mat[5][5];
ll temp[5][5];
ll ans[5][5];

void cal(ll a[5][5], ll b[5][5]){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            temp[i][j]=0;
            for(int l=0; l<n; l++)
                temp[i][j]+=(a[i][l]*b[l][j]);
            temp[i][j]%=1000;
        }
    }

    // a로 넣어서 갱신 [cal(ans, mat)이면, ans로 / cal(mat, mat)이면, mat로 갱신]
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            a[i][j]=temp[i][j];
}

int main() {
    scanf("%lld %lld", &n, &m);

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
            scanf("%lld", &mat[i][j]);
        ans[i][i]=1;
    }

    while(m>0){
        if(m%2==1) cal(ans, mat);
        
        cal(mat, mat);

        m/=2;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
            printf("%lld ", ans[i][j]);
        printf("\n");
    }

    return 0;
}