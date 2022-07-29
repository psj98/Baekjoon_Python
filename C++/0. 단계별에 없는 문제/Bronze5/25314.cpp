#include <iostream>

using namespace std;

int main() {
	int n;
    scanf("%d", &n);

    for(int i=0; i<n/4; i++)
        printf("long ");
    printf("int");

    return 0;
}