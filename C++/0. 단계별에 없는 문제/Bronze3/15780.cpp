#include <iostream>

using namespace std;

int main() {
    int n, k, sum=0;
    scanf("%d %d", &n, &k);

    for(int i=0; i<k; i++){
        int a;
        scanf("%d", &a);

        if(a%2==0) sum+=(a/2);
        else sum+=(a/2+1);
    }

    if(sum>=n) printf("YES");
    else printf("NO");

    return 0;
}