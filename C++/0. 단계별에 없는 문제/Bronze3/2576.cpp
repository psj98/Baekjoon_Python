#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> v;

int main() {
    int n, sum=0;
    for(int i=0; i<7; i++){
        scanf("%d", &n);
        if(n%2==1){
            v.push_back(n);
            sum+=n;
        }
    }

    if(v.size()==0) printf("-1");
    else printf("%d\n%d", sum, *min_element(v.begin(), v.end()));
    
    return 0;
}