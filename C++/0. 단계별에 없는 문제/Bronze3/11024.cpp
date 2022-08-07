#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();

    for(int i=0; i<n; i++){
        int sum=0;
        string s, tmp;
        getline(cin, s);

        for(int j=0; j<s.size(); j++){
            if(s[j]==' ') sum+=stoi(tmp), tmp="";
            else tmp+=s[j];
        }

        sum+=stoi(tmp);

        printf("%d\n", sum);
    }

    return 0;
}