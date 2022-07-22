#include <iostream>

using namespace std;

int arr[10001];

int main(){
    int m, n, sum=0, ans=0;
    scanf("%d %d", &n, &m);

    for(int i=2; i<=10000; i++)
        for(int j=2; i*j<=10000; j++)
            if(!arr[i*j])
                arr[i*j]=true;

    for(int i=m; i>=n; i--)
        if(!arr[i] && i!=1) sum+=i, ans=i;

    if(sum==0) printf("-1");
    else printf("%d\n%d", sum, ans);

    return 0;
}