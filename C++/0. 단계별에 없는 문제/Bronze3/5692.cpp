#include <iostream>

using namespace std;

int main() {
    while(1){
        int n, sum=0;
        scanf("%d", &n);

        if(n==0) break;

        string s=to_string(n);
        for(int i=0; i<s.size(); i++){
            int a=1;
            for(int j=1; j<=s.size()-i; j++){
                a*=j;
            }

            sum+=a*(s[i]-'0');
        }

        printf("%d\n", sum);
    }

    return 0;
}