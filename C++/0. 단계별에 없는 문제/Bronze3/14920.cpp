#include <iostream>

typedef long long ll;
using namespace std;

int main() {
    int cnt=1, a;
    scanf("%d", &a);

    while(1){
        if(a==1){
            printf("%d", cnt);
            break;
        }

        if(a%2==0) a/=2;
        else a=a*3+1;
        cnt++;
    }

    return 0;
}