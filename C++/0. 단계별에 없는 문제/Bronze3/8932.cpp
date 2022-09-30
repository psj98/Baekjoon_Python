#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        double a, b, c, d, e, f, g;
        int sum=0;
        scanf("%lf %lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f, &g);

        sum+=9.23076*pow(abs(26.7-a), 1.835);
        sum+=1.84523*pow(abs(75-b), 1.348);
        sum+=56.0211*pow(abs(1.5-c), 1.05);
        sum+=4.99087*pow(abs(42.5-d), 1.81);
        sum+=0.188807*pow(abs(210-e), 1.41);
        sum+=15.9803*pow(abs(3.8-f), 1.04);
        sum+=0.11193*pow(abs(254-g), 1.88);

        printf("%d\n", sum);
    }

    return 0;
}