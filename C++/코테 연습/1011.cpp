#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        int a, b, times;
        scanf("%d %d", &a, &b);

        int num=b-a;
        if(int(sqrt(num))*int(sqrt(num))==num) times=int(sqrt(num));
        else times=int(sqrt(num))+1;

        if(times*times-times>=num) printf("%d\n", times*2-2);
        else printf("%d\n", times*2-1);
    }

    return 0;
}