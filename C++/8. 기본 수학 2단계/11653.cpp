#include <iostream>

using namespace std;

int main(){
    int n, a=2;
    scanf("%d", &n);

    while(n!=1){
        if(n%a==0) n/=a, printf("%d\n", a);
        else a++;
    }

    return 0;
}