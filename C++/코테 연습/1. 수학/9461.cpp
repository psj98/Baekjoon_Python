#include <iostream>

typedef long long ll;
using namespace std;

ll tri[100]={1, 1, 1};

int main() {
    int t, n;
    scanf("%d", &t);

    for(int i=3; i<100; i++)
        tri[i]=tri[i-2]+tri[i-3];
    
    for(int i=0; i<t; i++){
        scanf("%d", &n);
        printf("%lld\n", tri[n-1]);
    }

    return 0;
}