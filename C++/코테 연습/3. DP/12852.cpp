#include <iostream>
#include <vector>
#include <algorithm>
#define MAX 1000001

using namespace std;

int arr[MAX];
int dp[MAX]={0, 0};
int idx[MAX];

int main() {
	int n;
    scanf("%d", &n);

    for(int i=2; i<=n; i++){
        vector<pair<int, int>> v;
        
        if(i%3==0) v.push_back(make_pair(dp[i/3], 3));
        if(i%2==0) v.push_back(make_pair(dp[i/2], 2));
        v.push_back(make_pair(dp[i-1], 1));

        sort(v.begin(), v.end());
        
        dp[i]=v[0].first+1;
        idx[i]=v[0].second;
    }

    printf("%d\n%d ", dp[n], n);

    while(1){
        if(idx[n]==3){
            printf("%d ", n/3);
            n/=3;
        }

        else if(idx[n]==2){
            printf("%d ", n/2);
            n/=2;
        }

        else if(idx[n]==1){
            printf("%d ", n-1);
            n-=1;
        }

        if(n==1) break;
    }

	return 0;
}