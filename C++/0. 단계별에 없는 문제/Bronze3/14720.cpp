#include <iostream>

using namespace std;

int main() {
    int a, n, sum=0, cnt=0;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d", &a);
        if(cnt==0 && a==0) sum++, cnt=1;
        else if(cnt==1 && a==1) sum++, cnt=2;
        else if(cnt==2 && a==2) sum++, cnt=0;
    }

    printf("%d", sum);

    return 0;
}