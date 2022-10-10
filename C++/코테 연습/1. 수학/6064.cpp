#include <iostream>

using namespace std;

int gcd(int a, int b){
    if(a%b==0) return b;

    return gcd(b, a%b);
}

int lcm(int a, int b){
    return (a*b)/gcd(a, b);
}

int main() {
    int m, n, x, y, t;
    scanf("%d", &t);

    for(int i=0; i<t; i++){
        int num, ans=-1;
        scanf("%d %d %d %d", &m, &n, &x, &y);

        num=lcm(m, n);

        for(int j=x; j<=num; j+=m){
            if(j%n==y){
                ans=j;
                break;
            }

            else if(j%n==0){
                if(n==y){
                    ans=j;
                    break;
                }
            }
        }

        printf("%d\n", ans);
    }

    return 0;
}