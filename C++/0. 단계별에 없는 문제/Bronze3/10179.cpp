#include <iostream>

using namespace std;

int main() {
    int a;
    double n;
    scanf("%d", &a);
    for(int i=0; i<a; i++){
        scanf("%lf", &n);
        printf("$%.2lf\n", n*0.8);
    }

    return 0;
}