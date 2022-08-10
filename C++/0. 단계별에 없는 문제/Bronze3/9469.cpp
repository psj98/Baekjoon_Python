#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    scanf("%d", &t);

    for(int i=1; i<=t; i++){
        double n, d, a, b, f;
        scanf("%lf %lf %lf %lf %lf", &n, &d, &a, &b, &f);

        printf("%d %.6lf\n", int(n), d/(a+b)*f);
    }

    return 0;
}