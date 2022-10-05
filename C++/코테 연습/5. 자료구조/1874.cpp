#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

vector<char> v;
stack<int> s;

int main() {
    int n, cnt=1;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        int a;
        scanf("%d", &a);

        for(int j=cnt; j<=a; j++){
            s.push(j);
            v.push_back('+');
            cnt++;
        }

        if(s.top()==a){
            s.pop();
            v.push_back('-');
        }

        else{
            printf("NO");
            return 0;
        }
    }

    for(int i=0; i<v.size(); i++)
        printf("%c\n", v[i]);

    return 0;
}