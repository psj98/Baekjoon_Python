#include <iostream>
#define MAX 21

using namespace std;

int arr[MAX];

int main() {
    ios_base::sync_with_stdio(0);
    cout.tie(0), cin.tie(0);
    
    string s;
    int n, m;
    cin >> m;

    for(int i=0; i<m; i++){
        cin >> s;
        if(s=="all"){
            for(int j=1; j<=20; j++)
                arr[j]=1;
        }
        
        else if(s=="empty"){
            for(int j=1; j<=20; j++)
                arr[j]=0;
        }

        else{
            cin >> n;

            if(s=="add"){
                if(!arr[n]) arr[n]=1;
            }

            else if(s=="remove"){
                if(arr[n]) arr[n]=0;
            }

            else if(s=="check"){
                if(arr[n]) cout << 1 << "\n";
                else cout << 0 << "\n";
            }

            else if(s=="toggle"){
                if(arr[n]) arr[n]=0;
                else arr[n]=1;
            }
        }
    }

    return 0;
}