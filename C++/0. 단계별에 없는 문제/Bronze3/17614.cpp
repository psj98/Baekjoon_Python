#include <iostream>

using namespace std;

int main() {
    int n, sum=0;
    cin >> n;

    for(int i=1; i<=n; i++){
        string s=to_string(i);

        for(int j=0; j<s.size(); j++)
            if(s[j]=='3' || s[j]=='6' || s[j]=='9')
                sum++;
    }

    printf("%d", sum);

    return 0;
}