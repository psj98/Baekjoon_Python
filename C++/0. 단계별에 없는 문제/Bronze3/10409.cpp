#include <iostream>

using namespace std;

int main() {
    int a, n, t, sum=0;
    scanf("%d %d", &n, &t);

    int ans=n;

    for(int i=0; i<n; i++){
        scanf("%d", &a);
        sum+=a;

        if(sum>t){
            ans=i;
            break;
        }
    }

    printf("%d", ans);

    return 0;
}