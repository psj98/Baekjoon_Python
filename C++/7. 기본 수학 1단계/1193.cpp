#include <iostream>

using namespace std;

int main(){
    int n, ans=0, cnt=1;
    scanf("%d", &n);

    while(1){
        if(n>ans && n<=ans+cnt)
            break;
        else ans+=cnt, cnt++;
    }

    if(cnt%2==0) printf("%d/%d", n-ans, cnt+1-n+ans);
    else printf("%d/%d", cnt+1-n+ans, n-ans);

    return 0;
}