#include <iostream>

using namespace std;

int main() {
    int r, e, c, n;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d %d %d", &r, &e, &c);
        if(r+c==e) printf("does not matter\n");
        else if(r+c>e) printf("do not advertise\n");
        else printf("advertise\n");
    }

    return 0;
}