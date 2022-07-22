#include <iostream>

using namespace std;

int main(){
    string t, s1, s2, ans, zero;
    cin >> s1 >> s2;

    if(s1.length() < s2.length()){
        t=s1;
        s1=s2;
        s2=t;
    }

    if(s1.length()!=s2.length())
        for(int i=0; i<s1.length()-s2.length(); i++)
            zero+="0";

    s2=zero+s2;

    int carry = 0;
    int x, y, digit;
    for (int i=s1.length()-1; i>=0; i--){
        x = s1[i] - '0';
        y = s2[i] - '0';
        digit = x + y;
        if (carry == 1) {
            digit++;
            carry = 0;
        }
        if (digit > 9)
            carry = 1;
        ans += digit%10 + '0';
    }

    if (carry == 1)
        ans += "1";

    for (int i=ans.length() - 1; i>=0; i--)
        cout << ans[i];

    return 0;
}