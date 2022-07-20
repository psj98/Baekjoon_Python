#include <iostream>
#include <algorithm>

using namespace std;

int arr[26];

int main(){
    string s;
    char a;
    int cnt=0;
    cin >> s;
    
    for(int i=0; i<s.length(); i++)
        arr[tolower(s[i])-'0'-49]++;
    
    int m=*max_element(arr, arr+26);
    
    for(int i=0; i<26; i++){
        if(arr[i]==m){
            a=i+65;
            cnt++;
        }
    }

    if(cnt!=1)
        printf("?");
    else
        printf("%c", a);

    return 0;
}