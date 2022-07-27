#include <iostream>

using namespace std;

int main() {
    int t;
    scanf("%d", &t);

    for(int i=0; i<t; i++){
        int n, x1, x2, y1, y2, cx, cy, r, in=0, out=0;
        scanf("%d %d %d %d %d", &x1, &y1, &x2, &y2, &n);

        for(int j=0; j<n; j++){
            scanf("%d %d %d", &cx, &cy, &r);

            if((cx-x2)*(cx-x2)+(cy-y2)*(cy-y2)<r*r && (cx-x1)*(cx-x1)+(cy-y1)*(cy-y1)>r*r) in++;
            if((cx-x1)*(cx-x1)+(cy-y1)*(cy-y1)<r*r && (cx-x2)*(cx-x2)+(cy-y2)*(cy-y2)>r*r) out++;
        }

        printf("%d\n", in+out);
    }

    return 0;
}