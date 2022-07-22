#include <iostream>

using namespace std;

int main(){
    int n;
    scanf("%d", &n);

    if(n==4 || n==7){
        printf("-1");
        return 0;
    }

    if(n%5==0) printf("%d", n/5);
    else if(n%5==1 || n%5==3) printf("%d", n/5+1);
    else if(n%5==2 || n%5==4) printf("%d", n/5+2);

    return 0;
}