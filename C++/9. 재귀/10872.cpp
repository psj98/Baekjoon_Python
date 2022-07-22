#include <iostream>

using namespace std;

int main(){
    int n, sum=1;
    scanf("%d", &n);

    if(n==0){
        printf("1");
        return 0;
    }

    for(int i=1; i<=n; i++)
        sum*=i;

    printf("%d", sum);

    return 0;
}