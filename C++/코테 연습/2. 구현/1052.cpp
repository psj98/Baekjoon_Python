#include <iostream>

using namespace std;

int main() {
    int n, k, ans=0;
    scanf("%d %d", &n, &k);

    if(n<=k) printf("0");
    else{
        while(1){
            int d=n, cnt=0;
            while(d!=0){
                if(d%2==1) cnt++;
                d/=2;
            }

            if(cnt<=k) break;

            ans++;
            n++;
        }

        printf("%d", ans);
    }

	return 0;
}