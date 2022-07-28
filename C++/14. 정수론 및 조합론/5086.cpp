#include <iostream>

using namespace std;

int main() {
    while(1){
        int a, b;
        scanf("%d %d", &a, &b);

        if(a==0 && b==0) break;

        if(a%b==0) printf("multiple\n");
        else if(b%a==0) printf("factor\n");
        else if(a%b!=0 && b%a!=0) printf("neither\n");
    }

    return 0;
}