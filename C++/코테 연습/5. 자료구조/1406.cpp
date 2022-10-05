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

    // ����Ʈ�� string �� ���� -> �ڿ������� �־�� ����Ʈ ó������ ������ ���������
    for(int i=0; i<s.size(); i++)
        l.push_back(s[i]);

    auto cursor=l.end(); // Ŀ�� ���� (iterator�� �� auto�� ������)

    cin >> n;

    for(int i=0; i<n; i++){
        char c;
        cin >> c;

        if(c=='L'){
            if(cursor!=l.begin()) // Ŀ���� �� ���� �ƴϸ�
                cursor--;
        }

        else if(c=='D'){
            if(cursor!=l.end()) // Ŀ���� �� �ڰ� �ƴϸ�
                cursor++;
        }

        else if(c=='B'){
            if(cursor!=l.begin())
                cursor=l.erase(--cursor); // erase�� �ϸ� cursor�� ��ġ�� �ʱ�ȭ�ǹǷ� �� �缳��
        }

        else if(c=='P'){
            char a;
            cin >> a;
            l.insert(cursor, a); // insert(��ġ, ��)
        }
    }

    for(auto it=l.begin(); it!=l.end(); it++)
        cout << *it;

    return 0;
}