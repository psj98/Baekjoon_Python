#include <iostream>
#include <algorithm>
#define MAX 10001

using namespace std;

string dp[MAX]={"0", "1"};

string fibo(string a, string b){
    int num, up=0;
    string ans;

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    while(a.size()<b.size()){
        a+='0';
    }

    while(a.size()>b.size()){
        b+='0';
    }

    for(int i=0; i<a.size(); i++){
        num=(a[i]-'0'+b[i]-'0'+up)%10;
        ans+=to_string(num);
        up=(a[i]-'0'+b[i]-'0'+up)/10;
    }

    if(up!=0) ans+=to_string(up);

    reverse(ans.begin(), ans.end());

    return ans;
}

int main() {
    int n;
    cin >> n;

    for(int i=2; i<=n; i++)
        dp[i]=fibo(dp[i-1], dp[i-2]);

    cout << dp[n];

	return 0;
}