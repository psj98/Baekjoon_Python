#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int n=0;
    for(int i=0; i<5; i++){
        string s;
        cin >> s;

        if(s.find("FBI") != string::npos){
            n++;
            printf("%d ", i+1);
        }
    }

    if(n==0) printf("HE GOT AWAY!");

    return 0;
}