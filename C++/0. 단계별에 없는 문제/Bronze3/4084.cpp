#include <iostream>

using namespace std;

int main() {
    while(1){
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);

        if(a==0 && b==0 && c==0 && d==0) break;

        int cnt=0;
        while(1){
            if(a==b && b==c && c==d) break;

            int t1=abs(a-b);
            int t2=abs(b-c);
            int t3=abs(c-d);
            int t4=abs(d-a);

            a=t1, b=t2, c=t3, d=t4;
            cnt++;
        }

        printf("%d\n", cnt);
    }

    return 0;
}