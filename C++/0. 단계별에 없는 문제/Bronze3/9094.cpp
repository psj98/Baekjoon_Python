#include <iostream>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        int a, b, sum=0;
        scanf("%d %d", &a, &b);

        for(int j=1; j<a-1; j++)
            for(int k=j+1; k<a; k++)
                if((j*j+k*k+b)%(j*k)==0)
                    sum++;

        printf("%d\n", sum);
    }

    return 0;
}