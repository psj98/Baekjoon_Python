#include <iostream>

using namespace std;

int arr[26];

int main() {
	string s;
    cin >> s;

    for(int i=0; i<s.length(); i++)
        arr[s[i]-97]++;

    for(int i=0; i<26; i++)
        cout << arr[i] << " ";

    return 0;
}