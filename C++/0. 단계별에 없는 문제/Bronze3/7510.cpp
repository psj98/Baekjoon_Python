#include <iostream>
#include <algorithm>

typedef long long ll;
using namespace std;

ll arr[3];

int main() {
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        for(int j=0; j<3; j++)
            scanf("%lld", &arr[j]);
        
        sort(arr, arr+3);

        if(arr[0]*arr[0]+arr[1]*arr[1]==arr[2]*arr[2]) printf("Scenario #%d:\nyes\n\n", i+1);
        else printf("Scenario #%d:\nno\n\n", i+1);        
    }

    return 0;
}