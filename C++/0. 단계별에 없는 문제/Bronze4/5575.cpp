#include <iostream>

using namespace std;

int main() {
	int a, b, c, d, e, f;
    for(int i=0; i<3; i++){
        scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
        d-=a, e-=b, f-=c;
        if(f<0) f+=60, e--;
        if(e<0) e+=60, d--;

        printf("%d %d %d\n", d, e, f);
    }

    return 0;
}