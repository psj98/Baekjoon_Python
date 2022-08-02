#include <iostream>

using namespace std;

int main() {
    int n, w, h, t;
    scanf("%d %d %d", &n, &w, &h);

    for(int i=0; i<n; i++){
        int a;
        scanf("%d", &a);

        if(a<=w || a<=h || a*a<=w*w+h*h) printf("DA\n");
        else printf("NE\n");
    }

    return 0;
}