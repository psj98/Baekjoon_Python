#include <iostream>

using namespace std;

int check(int n){
    int cnt=0;
    for(int i=1; i<=n; i++){
        if(i<=99) cnt++;
        else{
            int a=i%10;
            int b=(i/10)%10;
            int c=i/100;
            
            int l=a-b;
            int m=b-c;

            if(l==m)
                cnt++;
        }
    }

    return cnt;
}

int main(){
    int n;
    scanf("%d", &n);

    int ans=check(n);
    
    printf("%d", ans);

    return 0;
}