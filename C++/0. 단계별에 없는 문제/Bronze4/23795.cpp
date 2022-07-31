#include <iostream>

using namespace std;

int main() {
    int sum=0;
    while(1){
        int a;
        scanf("%d", &a);
        if(a==-1) break;
        sum+=a;
    }
    printf("%d", sum);
    
    return 0;
}