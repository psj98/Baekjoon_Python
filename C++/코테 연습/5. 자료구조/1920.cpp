#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> v;

int main() {
    int n, m;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        int a;
        scanf("%d", &a);

        v.push_back(a);
    }

    sort(v.begin(), v.end());

    scanf("%d", &m);

    for(int i=0; i<m; i++){
        bool check=false;
        int a, s=0, e=v.size()-1;
        scanf("%d", &a);
        
        while(s<=e){
            int m=(s+e)/2;

            if(v[m]>a){
                e=m-1;
            }

            else if(v[m]<a){
                s=m+1;
            }

            else {
                check=true;
                break;
            }
        }

        if(check) printf("1\n");
        else printf("0\n");        
    }

    return 0;
}