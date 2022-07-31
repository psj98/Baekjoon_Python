#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> v;

int main() {
    int n, a, b;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d %d", &a, &b);
        if(a<=b) v.push_back(b);
    }

    if(v.size()==0) printf("-1");
    else printf("%d", *min_element(v.begin(), v.end()));   
    
    return 0;
}