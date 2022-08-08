#include <iostream>

using namespace std;

int main() {
    int arr[4]={1, 0, 0, 2};
    string s;
    cin >> s;

    for(int i=0; i<s.size(); i++){
        if(s[i]=='A'){
            int t=arr[0];
            arr[0]=arr[1];
            arr[1]=t;
        }

        else if(s[i]=='B'){
            int t=arr[0];
            arr[0]=arr[2];
            arr[2]=t;
        }

        else if(s[i]=='C'){
            int t=arr[0];
            arr[0]=arr[3];
            arr[3]=t;
        }

        else if(s[i]=='D'){
            int t=arr[1];
            arr[1]=arr[2];
            arr[2]=t;
        }

        else if(s[i]=='E'){
            int t=arr[1];
            arr[1]=arr[3];
            arr[3]=t;
        }

        else if(s[i]=='F'){
            int t=arr[2];
            arr[2]=arr[3];
            arr[3]=t;
        }
    }

    for(int i=0; i<4; i++)
        if(arr[i]==1) cout << i+1 << "\n";
    
    for(int i=0; i<4; i++)
        if(arr[i]==2) cout << i+1 << "\n";

    return 0;
}