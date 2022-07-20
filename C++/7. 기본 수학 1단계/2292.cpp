#include <iostream>

using namespace std;

int main(){
    int n, i=1, cnt=1, ans=1;
    scanf("%d", &n);

    while(1){
        if(cnt>=n)
            break;
        cnt+=i*6, i++, ans++;
    }

    printf("%d", ans);

    return 0;
}