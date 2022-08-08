#include <iostream>
#include <vector>

using namespace std;

vector<int> v;

int main() {
    int n;
    scanf("%d", &n);

    while(1){
        v.push_back(n%9);
        n/=9;
        if(n==0)
            break;
    }

    for(int i=v.size()-1; i>=0; i--)
        printf("%d", v[i]);

    return 0;
}