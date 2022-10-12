#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int num[101];

int main() {
    int a, n, k;
    scanf("%d %d", &n, &k);

    vector<pair<int, int>> v(n); // 학생 번호, 순서

    for(int i=0; i<k; i++){
        bool check=false;
        scanf("%d", &a);
        num[a]++;

        for(int j=0; j<n; j++){
            if(v[j].first==0){
                v[j].first=a;
                v[j].second=i;
                check=true;
                break;
            }

            else if(v[j].first==a){
                check=true;
                break;
            }
        }

        if(!check){
            int m=0;
            for(int j=1; j<n; j++){
                if(num[v[m].first]==num[v[j].first]){
                    if(v[m].second>v[j].second)
                        m=j;
                }

                else if(num[v[m].first]>num[v[j].first]) m=j;
            }

            num[v[m].first]=0;

            v[m].first=a;
            v[m].second=i;
        }
    }

    sort(v.begin(), v.end());

    for(int i=0; i<v.size(); i++){
        if(v[i].first!=0)
            printf("%d ", v[i].first);    
    }

    return 0;
}