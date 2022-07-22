#include <iostream>
#define MAX 1000001

using namespace std;

int arr[MAX];

int main(){
    int m, n;
    scanf("%d %d", &n, &m);

    for(int i=2; i<MAX; i++)
        for(int j=2; i*j<MAX; j++)
            if(!arr[i*j])
                arr[i*j]=true;

    for(int i=n; i<=m; i++)
        if(i!=1 && !arr[i]) printf("%d\n", i);

    return 0;
}