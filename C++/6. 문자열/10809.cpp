#include <iostream>
#include <cstring>

using namespace std;

int arr[26];

int main(){
    string s;
    memset(arr, -1, sizeof(int)*26);
    cin >> s;

    for(int i=0; i<s.length(); i++)
        if(arr[s[i]-'0'-49]==-1)
            arr[s[i]-'0'-49]=i;

    for(int i=0; i<26; i++)
        printf("%d ", arr[i]);

    return 0;
}