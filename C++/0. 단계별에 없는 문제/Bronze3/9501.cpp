#include <iostream>

using namespace std;

int main() {
    int t;
    scanf("%d", &t);

    for(int i=0; i<t; i++){
        int n, d, ans=0;
        scanf("%d %d", &n, &d);

        for(int j=0; j<n; j++){
            int v, f, c;
            scanf("%d %d %d", &v, &f, &c);

            if(v*f/c>=d) ans++;
        }

        printf("%d\n", ans);
    }

    return 0;
}