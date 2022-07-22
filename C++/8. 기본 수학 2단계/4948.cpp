#include <iostream>
#define MAX 123456*2+1

using namespace std;

int arr[MAX];

int main(){
    for(int i=2; i<MAX; i++)
        for(int j=2; i*j<MAX; j++)
            if(!arr[i*j])
                arr[i*j]=true;

    while(1){
        int n, cnt=0, a;
        scanf("%d", &n);

        if(n==0) break;

        for(int i=n+1; i<=2*n; i++)
            if(i!=1 && !arr[i]) cnt++;

        printf("%d\n", cnt);    
    }

    return 0;
}