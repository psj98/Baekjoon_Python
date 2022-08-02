#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, x;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        vector<int> v;
        int sum=0;
        for(int j=0; j<7; j++){
            scanf("%d", &x);

            if(x%2==0){
                sum+=x;
                v.push_back(x);
            }
        }

        printf("%d %d\n", sum, *min_element(v.begin(), v.end()));
    }

    return 0;
}