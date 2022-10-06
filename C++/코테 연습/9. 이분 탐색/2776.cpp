#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    scanf("%d", &t);

    for(int i=0; i<t; i++){
        vector<int> test;
        vector<int> ans;
        int a, n, m;
        scanf("%d", &n);

        for(int j=0; j<n; j++){
            scanf("%d", &a);
            test.push_back(a);
        }

        scanf("%d", &m);

        for(int j=0; j<m; j++){
            scanf("%d", &a);
            ans.push_back(a);
        }

        sort(test.begin(), test.end());

        for(int j=0; j<m; j++){
            bool check=false;
            int s=0, e=test.size()-1;
            while(s<=e){
                int mid=(s+e)/2;

                if(ans[j]>=test[mid]){
                    if(ans[j]==test[mid]){
                        check=true;
                        printf("1\n");
                        break;
                    }
                    s=mid+1;
                }
                else e=mid-1;
            }

            if(!check) printf("0\n");
        }
    }

    return 0;
}