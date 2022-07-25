#include <iostream>

using namespace std;

int arr[10];

int main(){
    string n;
    cin >> n;

    for(int i=0; i<n.length(); i++)
        arr[n[i]-'0']++;
    
    for(int i=9; i>=0; i--)
        for(int j=0; j<arr[i]; j++)
            printf("%d", i);

    return 0;
}   