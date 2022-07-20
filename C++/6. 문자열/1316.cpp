#include <iostream>

using namespace std;

int main(){
    int n, cnt=0;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        bool check[26]={false}, a=false;
        string s;
        cin >> s;

        for(int j=0; j<s.length(); j++){
            if(!check[s[j]-'0'-49]) check[s[j]-'0'-49]=true;
            else if(check[s[j]-'0'-49] && s[j-1]!=s[j]){
                a=true;
                break;
            }
        }

        if(!a) cnt++;
    }

    printf("%d", cnt);

    return 0;
}