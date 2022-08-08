#include <iostream>

using namespace std;

int main() {
    int a, b, c, d, n;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    for(int i=0; i<3; i++){
        int sum=0;
        scanf("%d", &n);

        if(n%(a+b)<=a && n%(a+b)!=0) sum++;
        if(n%(c+d)<=c && n%(c+d)!=0) sum++;

        printf("%d\n", sum);
    }

    return 0;
}