#include <iostream>
#include <algorithm>

typedef long long ll;
using namespace std;

int main(){
    int n, m, c;
    cin >> n >> m >> c;

    ll W[c][c];
    int nPer[n], mPer[m];
    ll arr[min(n, m)][abs(n-m)+1];

    for(int i=0; i<c; i++)
        for(int j=0; j<c; j++)
            cin >> W[i][j];

    for(int i=0; i<n; i++)
        cin >> nPer[i];

    for(int i=0; i<m; i++)
        cin >> mPer[i];

    for(int i=0; i<min(n, m); i++){
        for(int j=0; j<abs(n-m)+1; j++){
            if(n<m) arr[i][j]=W[nPer[i]-1][mPer[i+j]-1];
            else arr[i][j]=W[mPer[i]-1][nPer[i+j]-1];

            if(i>=1){
                ll sum=0;
                for(int k=0; k<=j; k++)
                    sum=max(sum, arr[i][j]+arr[i-1][k]);
                
                arr[i][j]=sum;
            }
        }
    }

    cout << *max_element(arr[min(n, m)-1], arr[min(n, m)-1]+abs(n-m)+1);

    return 0;
}