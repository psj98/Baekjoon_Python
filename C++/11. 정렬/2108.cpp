#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
#define MAX 8001

using namespace std;

vector<int> v;
int cnt[MAX];

int main(){
    int a, n, sum=0, more, check=0;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d", &a);
        sum+=a;
        v.push_back(a);
        cnt[a+4000]++;
    }

    int b=*max_element(cnt, cnt+MAX);

    sort(v.begin(), v.end());
    
    for(int i=0; i<MAX; i++){
        if(cnt[i]==b){
            more=i;
            check++;
            if(check==2)
                break;
        }
    }    

    printf("%d\n", int(round(float(sum)/float(n))));
    printf("%d\n", v[n/2]);
    printf("%d\n", more-4000);
    printf("%d", v[n-1]-v[0]);

    return 0;
}