#include <iostream>

using namespace std;

int fibo(int a){
    if(a==0) return 0;
    if(a==1 || a==2) return 1;

    return fibo(a-1)+fibo(a-2);
}

int main(){
    int n;
    scanf("%d", &n);

    printf("%d", fibo(n));

    return 0;
}