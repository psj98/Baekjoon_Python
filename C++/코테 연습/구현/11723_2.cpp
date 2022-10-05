#include <iostream>
#define MAX 21

using namespace std;

int arr[MAX];

int main() {
    ios_base::sync_with_stdio(0);
    cout.tie(0), cin.tie(0);
    
    string s;
    int n, m, bit=0;
    cin >> m;

    for(int i=0; i<m; i++){
        cin >> s;
        if(s=="all") bit=(1<<21)-1;
        else if(s=="empty") bit=0;
        else{
            cin >> n;

            if(s=="add") bit|=(1<<n);
            else if(s=="remove") bit&=~(1<<n);
            else if(s=="check"){
                if(bit&(1<<n)) cout << "1\n";
                else cout << "0\n";
            }

            else if(s=="toggle"){
                if(bit&(1<<n)) bit&=~(1<<n);
                else bit|=(1<<n);
            }
        }
    }

    return 0;
}