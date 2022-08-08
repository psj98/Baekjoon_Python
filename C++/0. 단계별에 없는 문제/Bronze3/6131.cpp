#include <iostream>

using namespace std;

int main() {
    int n, sum=0;
    scanf("%d", &n);

    for(int i=1; i<=500; i++)
        for(int j=i; j<=500; j++)
            if(j*j==i*i+n) sum++;

    printf("%d", sum);

    return 0;
}