#include <iostream>

using namespace std;

int main() {
	int a, n, b, c, sum=0;
    scanf("%d %d", &a, &n);

    for(int i=0; i<n; i++){
        scanf("%d %d", &b, &c);
        sum+=b*c;
    }

    if(sum==a) printf("Yes");
    else printf("No");

    return 0;
}