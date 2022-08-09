#include <iostream>

using namespace std;

int main() {
    int n, cnt=0;
    scanf("%d", &n);

    for(int i=1; n-2*i-2>=2; i++)
        for(int j=i+2; n-i-j>=2; j++)
            if((n-i-j)%2==0) cnt++;

    printf("%d", cnt);

    return 0;
}