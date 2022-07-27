#include <iostream>
#include <set>

using namespace std;
 
set<string> s;

int main() {
    string a, str = "";
    cin >> a;
    
    for (int i=0; i<a.size(); i++) {
        for (int j=i; j<a.size(); j++) {
            str+=a[j];
            s.insert(str);
        }

        str="";
    }
 
    cout << s.size();
}
