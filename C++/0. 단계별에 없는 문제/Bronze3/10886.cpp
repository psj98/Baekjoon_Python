#include <iostream>

using namespace std;

int main() {
    int n, k, a=0, b=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &k);
        if(k==1) a++;
        else b++;
    }

    if(a>b) printf("Junhee is cute!");
    else printf("Junhee is not cute!");
    
    return 0;
}