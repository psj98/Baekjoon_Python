#include <iostream>

using namespace std;

int main() {
    int n, t;
    scanf("%d", &t);

    for(int i=0; i<t; i++){
        int c=0;
        double g=0;
        scanf("%d", &n);

        for(int i=0; i<n; i++){
            int a;
            double b;
            scanf("%d %lf", &a, &b);
            c+=a, g+=a*b;
        }

        printf("%d %.1lf\n", c, g/c);
    }

    return 0;
}