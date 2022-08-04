#include <iostream>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        int a, b, c, d, e;
        double sum=0;
        scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

        sum+=a*350.34;
        sum+=b*230.90;
        sum+=c*190.55;
        sum+=d*125.30;
        sum+=e*180.90;
        
        printf("$%.2lf\n", sum);
    }

    return 0;
}