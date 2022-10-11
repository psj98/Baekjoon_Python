#include <iostream>

using namespace std;

int arr[26];

int main() {
    int cnt=0, mid=-1;
    string s, f;
    cin >> s;

    for(int i=0; i<s.size(); i++)
        arr[s[i]-'A']++;

    for(int i=0; i<26; i++){
        if(arr[i]!=0 && arr[i]%2==1){
            mid=i;
            cnt++;
        }
    }

    if(cnt>=2) cout << "I\'m Sorry Hansoo";
    else{
        for(int i=0; i<26; i++){
            if(arr[i]!=0){
                for(int j=0; j<arr[i]/2; j++)
                    f+=i+'A';
            }
        }

        for(int i=0; i<f.size(); i++)
            cout << f[i];

        if(mid!=-1)
            cout << char(mid+'A');

        for(int i=f.size()-1; i>=0; i--)
            cout << f[i];
    }

    return 0;
}