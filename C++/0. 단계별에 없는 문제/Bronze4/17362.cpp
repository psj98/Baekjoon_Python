#include <iostream>

using namespace std;

int main() {
	int n;
    scanf("%d", &n);

    if((n-5)%8==0) printf("5");
    else if((n-1)%8==0) printf("1");
    else if((n-2)%8==0 || n%8==0) printf("2");
    else if((n-4)%8==0 || (n-6)%8==0) printf("4");
    else printf("3");

    return 0;
}