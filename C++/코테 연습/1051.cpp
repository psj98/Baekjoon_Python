#include <iostream>

using namespace std;

int arr[51][51];

int main() {
    int n, m, ans=1;
    scanf("%d %d", &n, &m);

    for(int i=0; i<n; i++){
        char s[51];
        scanf("%s", s);

        for(int j=0; j<m; j++)
            arr[i][j]=s[j]-'0';
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            for(int k=1; k<min(n, m); k++){
                if(arr[i][j]==arr[i+k][j] && arr[i][j]==arr[i][j+k] && arr[i][j]==arr[i+k][j+k] && i+k<n && j+k<m)
                    ans=max(ans, k+1);
            }
        }
    }

    printf("%d", ans*ans);
    
    return 0;
}