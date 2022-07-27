#include <iostream>
#define MAX 20000001

using namespace std;

bool check[MAX];

int main(){
    int a, n, m;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d", &a);
        check[a+10000000]=true;
    }

    scanf("%d", &m);
    for(int i=0; i<m; i++){
        scanf("%d", &a);
        if(check[a+10000000]) printf("1 ");
        else printf("0 ");
    }

    return 0;
}   