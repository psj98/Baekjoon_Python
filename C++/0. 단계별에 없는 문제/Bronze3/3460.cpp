#include <iostream>

using namespace std;

int main() {
    int a, n;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        int cnt=0;
        scanf("%d", &a);
        while(a>0){
            if(a%2==1) printf("%d ", cnt);
            a/=2;
            cnt++;
        }
    }

    return 0;
}