#include <iostream>
#include <map>

using namespace std;

map<string, double> mp;
map<string, double>::iterator it;

int main() {
    string str;
    double cnt=0;

    while(getline(cin, str)){
        if(mp.find(str)!=mp.end()) mp[str]+=1;
        else mp[str]=1;
        cnt++;
    }

    cout << fixed;
    cout.precision(4);

    for(it=mp.begin(); it!=mp.end(); it++){
        double ans=(it->second/cnt)*100;
        cout << it->first << " " << ans << "\n";
    }
    
    return 0;
}