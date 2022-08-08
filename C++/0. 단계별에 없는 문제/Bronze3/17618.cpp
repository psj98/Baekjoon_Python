#include <iostream>

using namespace std;

int main() {
    int n, cnt=0;
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        int sum=0;
        string s=to_string(i);
        for(int j=0; j<s.size(); j++)
            sum+=s[j]-'0';

        if(i%sum==0) cnt++;
    }

    printf("%d", cnt);

    return 0;
}