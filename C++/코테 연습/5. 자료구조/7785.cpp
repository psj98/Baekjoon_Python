#include <iostream>
#include <map>

using namespace std;

map<string, int, greater<>> mp;
map<string, int>::iterator it;

int main(){
    int n, cnt=0;
    string name, now;
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> name >> now;

        if(now=="enter") mp.insert(make_pair(name, 1));
        else if(now=="leave") mp.erase(name);
    }

    for(it=mp.begin(); it!=mp.end(); it++)
        cout << it->first << "\n";


    return 0;
}