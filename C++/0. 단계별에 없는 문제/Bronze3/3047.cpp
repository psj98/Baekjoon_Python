#include <iostream>
#include <algorithm>

using namespace std;

int arr[3];

int main() {
    string s;
    cin >> arr[0] >> arr[1] >> arr[2];
    cin >> s;

    sort(arr, arr+3);

    for(int i=0; i<3; i++){
        if(s[i]=='A') printf("%d ", arr[0]);
        else if(s[i]=='B') printf("%d ", arr[1]);
        else if(s[i]=='C') printf("%d ", arr[2]);
    }

    return 0;
}