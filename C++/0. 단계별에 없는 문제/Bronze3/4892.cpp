#include <iostream>

using namespace std;

int main() {
    int cnt=1;
    while(1){
        int n, tf=0;
        scanf("%d", &n);

        if(n==0) break;

        n*=3;
        if(n%2==0){
            n/=2;
            tf=0;
        }

        else{
            n=(n+1)/2;
            tf=1;
        }

        n*=3;
        n/=9;

        if(tf==0) printf("%d. even %d\n", cnt, n);
        else printf("%d. odd %d\n", cnt, n);
        cnt++;
    }

    return 0;
}