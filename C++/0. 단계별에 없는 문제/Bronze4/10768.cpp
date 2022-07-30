#include <iostream>

using namespace std;

int main() {
	int a, b;
    scanf("%d %d", &a, &b);

    if((a==2 && b<18) || a==1) printf("Before");
    else if(a==2 && b==18) printf("Special");
    else if((a==2 && b>18) || a>=3) printf("After");

    return 0;
}