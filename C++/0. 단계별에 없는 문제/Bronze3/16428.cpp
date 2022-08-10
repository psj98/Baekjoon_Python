#include <iostream>

using namespace std;

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int sum=0;

    sum+=a;
    while(1){
        a/=b;
        sum+=a;
        if(a/b==0)
            break;
            
    }

    printf("%d", sum);

    return 0;
}