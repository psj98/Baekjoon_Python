#include <iostream>

using namespace std;

int main() {
    int n, cnt=1;
    bool check=false;
    scanf("%d", &n);

    for(int i=1; i<=31; i++){
        if(n==cnt){
            check=true;
            break;
        }

        else if(n<cnt) break;
        cnt*=2;
    }

    if(check) printf("1");
    else printf("0");

    return 0;
}