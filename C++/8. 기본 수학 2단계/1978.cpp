#include <iostream>

using namespace std;

int arr[1001];

int main(){
    int a, n, cnt=0;
    scanf("%d", &n);

    for(int i=2; i<=1000; i++)
        for(int j=2; i*j<=1000; j++)
            if(!arr[i*j])
                arr[i*j]=true;

    for(int i=0; i<n; i++){
        scanf("%d", &a);

        if(a==1) continue;
        if(!arr[a]) cnt++;
    }
    
    printf("%d", cnt);

    return 0;
}