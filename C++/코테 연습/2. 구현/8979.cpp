#include <iostream>
#define MAX 1001

using namespace std;

int gold[MAX];
int silver[MAX];
int bronze[MAX];

int main() {
    int a, n, k, ans=0;
    scanf("%d %d", &n, &k);

    for(int i=0; i<n; i++){
        scanf("%d", &a);
        scanf("%d %d %d", &gold[a], &silver[a], &bronze[a]);
    }

    for(int i=1; i<=n; i++){
        if(gold[i]>gold[k]) ans++;
        else if(gold[i]==gold[k]){
            if(silver[i]>silver[k]) ans++;
            else if(silver[i]==silver[k]){
                if(bronze[i]>bronze[k]) ans++;
            }
        }
    }

    printf("%d", ans+1);

    return 0;
}