#include <iostream>
#include <string>
#include <list>

using namespace std;

list<char> l;

int main() {
    ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

    int n;
    string s;
    cin >> s;

    // 리스트로 string 값 넣음 -> 뒤에서부터 넣어야 리스트 처음부터 읽으면 순서대로임
    for(int i=0; i<s.size(); i++)
        l.push_back(s[i]);

    auto cursor=l.end(); // 커서 생성 (iterator라 걍 auto로 선언함)

    cin >> n;

    for(int i=0; i<n; i++){
        char c;
        cin >> c;

        if(c=='L'){
            if(cursor!=l.begin()) // 커서가 맨 앞이 아니면
                cursor--;
        }

        else if(c=='D'){
            if(cursor!=l.end()) // 커서가 맨 뒤가 아니면
                cursor++;
        }

        else if(c=='B'){
            if(cursor!=l.begin())
                cursor=l.erase(--cursor); // erase를 하면 cursor의 위치가 초기화되므로 값 재설정
        }

        else if(c=='P'){
            char a;
            cin >> a;
            l.insert(cursor, a); // insert(위치, 값)
        }
    }

    for(auto it=l.begin(); it!=l.end(); it++)
        cout << *it;

    return 0;
}