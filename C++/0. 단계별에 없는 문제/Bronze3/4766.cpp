#include <iostream>

using namespace std;

int main() {
    double a;
    scanf("%lf", &a);

    while(1){
        double b;
        scanf("%lf", &b);

        if(b==999) break;

        printf("%.2lf\n", b-a);
        a=b;
    }

    return 0;
}