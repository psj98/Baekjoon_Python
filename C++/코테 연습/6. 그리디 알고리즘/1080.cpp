#include <iostream>

using namespace std;

string A[51];
string B[51];

int main() {
    bool check=true;
    int n, m, cnt=0;
    cin >> n >> m;

    for(int i=0; i<n; i++)
        cin >> A[i];

    for(int i=0; i<n; i++)
        cin >> B[i];

    for(int i=0; i<n-2; i++){
        for(int j=0; j<m-2; j++){
            if(A[i][j]!=B[i][j]){
                // 0 -> 1 / 1 -> 0
                for(int k=i; k<i+3; k++){
                    for(int l=j; l<j+3; l++){
                        if(A[k][l]=='1') A[k][l]='0';
                        else A[k][l]='1';
                    }
                }

                cnt++;
            }
        }
    }
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(A[i][j]!=B[i][j]){
                check=false;
                break;
            }
        }
    }

    if(check) cout << cnt;
    else cout << -1;

    return 0;
}