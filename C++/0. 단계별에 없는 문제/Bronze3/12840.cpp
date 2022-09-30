#include <iostream>

using namespace std;

int main() {
    int h, m, s, t, sum=0;
    scanf("%d %d %d %d", &h, &m, &s, &t);

    sum=3600*h+60*m+s;
    for(int i=0; i<t; i++){
        int q, a;
        scanf("%d", &q);

        if(q==1){
            scanf("%d", &a);
            sum=(sum+a)%86400;
        }

        else if(q==2){
            scanf("%d", &a);
            sum=(sum-a)%86400;
            while(sum<0) sum+=86400;
        }

        else if(q==3) printf("%d %d %d\n", sum/3600, (sum/60)%60, sum%60);
    }

    return 0;
}