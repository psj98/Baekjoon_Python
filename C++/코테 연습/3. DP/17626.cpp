#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#define MAX 50001

using namespace std;

int dp[MAX]={0, 1};

int main() {
	int n;
    scanf("%d", &n);

    for(int i=2; i<=n; i++){
        vector<int> v;
        for(int j=sqrt(i); j>=1; j--)
            v.push_back(dp[i-j*j]);

        dp[i]=1+*min_element(v.begin(), v.end());    
    }

    printf("%d", dp[n]);

	return 0;
}