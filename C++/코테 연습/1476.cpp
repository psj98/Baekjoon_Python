#include <iostream>

using namespace std;

int main() {
    int e, s, m, cnt=1;
    scanf("%d %d %d", &e, &s, &m);

    while(1){
        if((cnt-e)%15==0 && (cnt-s)%28==0 && (cnt-m)%19==0){
            printf("%d", cnt);
            break;
        }

        else cnt++;
    }

    
    return 0;
}