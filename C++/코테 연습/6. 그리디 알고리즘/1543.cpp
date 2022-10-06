#include <iostream>

using namespace std;

int main() {
    int cnt=0;
    string str, check;
    getline(cin, str);
    getline(cin, check);

    for(int i=0; i<str.size(); i++){
        bool same=false;
        for(int j=0; j<check.size(); j++){
            if(str[i+j]==check[j])
                same=true;

            else{
                same=false;
                break;
            }
        }

        if(same){
            cnt++;
            i+=check.size()-1;
        }
    }

    cout << cnt;

    return 0;
}