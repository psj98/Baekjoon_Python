#include <iostream>

using namespace std;

int main(){
    int i=0, cnt=0;
    string s;
    cin >> s;

    while(s.length() > i){
        if(s[i]=='c'){
            if(s[i+1]=='=' || s[i+1]=='-') i++, cnt++;
            else cnt++;
        }

        else if(s[i]=='d'){
            if(s[i+1]=='-') i++, cnt++;
            else if(s[i+1]=='z' && s[i+2]=='=') i+=2, cnt++;
            else cnt++;
        }

        else if(s[i]=='z' && s[i+1]=='=') i++, cnt++;
        else if(s[i]=='s' && s[i+1]=='=') i++, cnt++;
        else if(s[i]=='l' && s[i+1]=='j') i++, cnt++;
        else if(s[i]=='n' && s[i+1]=='j') i++, cnt++;
        else cnt++;

        i++;
    }
    

    printf("%d", cnt);

    return 0;
}