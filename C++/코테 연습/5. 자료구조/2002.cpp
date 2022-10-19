#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

int arr[1001];
map<string, int> mp;

int main() {
    string s;
    int n, cnt=0;
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> s;
        mp[s]=i;
    }

    for(int i=0; i<n; i++){
        cin >> s;
        arr[i]=mp[s];
    }

    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]>arr[j]){
                cnt++;
                break;
            }
        }
    }

    cout << cnt;
    
    return 0;
}