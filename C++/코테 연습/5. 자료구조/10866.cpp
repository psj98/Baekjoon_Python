#include <iostream>
#include <queue>

using namespace std;

deque<int> dq;

int main() {
    int a, n;
    cin >> n;

    for(int i=0; i<n; i++){
        string s;
        cin >> s;

        if(s=="push_front"){
            cin >> a;
            dq.push_front(a);
        }

        else if(s=="push_back"){
            cin >> a;
            dq.push_back(a);
        }

        else if(s=="pop_front"){
            if(dq.size()==0) cout << "-1\n";
            else {
                cout << dq.front() << "\n";
                dq.pop_front();
            }
        }

        else if(s=="pop_back"){
            if(dq.size()==0) cout << "-1\n";
            else {
                cout << dq.back() << "\n";
                dq.pop_back();
            }
        }

        else if(s=="size") cout << dq.size() << "\n";
        
        else if(s=="empty"){
            if(dq.empty()) cout << "1\n";
            else cout << "0\n";
        }

        else if(s=="front"){
            if(dq.size()==0) cout << "-1\n";
            else cout << dq.front() << "\n";
        }

        else if(s=="back"){
            if(dq.size()==0) cout << "-1\n";
            else cout << dq.back() << "\n";
        }
    }

    return 0;
}