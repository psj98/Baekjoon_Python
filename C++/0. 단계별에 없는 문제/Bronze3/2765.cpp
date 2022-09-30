#include <iostream>
#define PI 3.1415927

using namespace std;

int main() {
    int cnt=1;
    while(1){
        double a, b, c;
        scanf("%lf %lf %lf", &a, &b, &c);

        if(!b) break;
        printf("Trip #%d: %.2lf %.2lf\n", cnt, PI*a*b/12.0/5280.0, PI*a*b/12.0/5280.0/c*3600);
        cnt++;
    }

    return 0;
}