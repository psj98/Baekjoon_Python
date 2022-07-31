#include <iostream>

using namespace std;

int main() {
    int n, k, cnt=0;
    scanf("%d %d", &n, &k);
    
    for(int i=1; i<=n; i++){
        if(n%i==0) cnt++;
        if(cnt==k){
            printf("%d", i);
            break;
        }
    }

    if(cnt<k) printf("0");
    
    return 0;
}