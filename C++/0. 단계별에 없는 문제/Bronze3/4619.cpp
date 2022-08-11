#include <iostream>
#include <math.h>

using namespace std;

int main() {
    while(1){
        int b, n;
        scanf("%d %d", &b, &n);

        if(b==0 && n==0) break;

        int cnt=1;
        while(1){
            if(int(pow(cnt, n))>b){
                if(int(pow(cnt, n))-b>b-int(pow(cnt-1, n))) printf("%d\n", cnt-1);
                else printf("%d\n", cnt);
                break;
            }
            cnt++;
        }
    }

    return 0;
}