#include <iostream>

using namespace std;

int main() {
    int t, sum=0;
    scanf("%d", &t);

    for(int i=1; i*i<=t; i++){
        if(t%i==0) sum+=i+t/i;
        if(i*i==t) sum-=i;
    }

    printf("%d", sum*5-24);

    return 0;
}