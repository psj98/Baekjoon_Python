#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> v;

int main() {
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        if(a==b && b==c) v.push_back(10000+a*1000);
        else if((a==b && b!=c) || (a==c && b!=c)) v.push_back(1000+a*100);
        else if(a!=b && b==c) v.push_back(1000+b*100);
        else if(a!=b && b!=c && c!=a) v.push_back(max(max(a, b), c)*100);
    }

    printf("%d", *max_element(v.begin(), v.end()));

    return 0;
}