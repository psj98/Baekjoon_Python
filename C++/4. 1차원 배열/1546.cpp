#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> v;

int main(){
    int n, a;
    float sum=0;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d", &a);
        v.push_back(a);
    }

    float m=float(*max_element(v.begin(), v.end()));

    for(int i=0; i<v.size(); i++)
        sum+=float(v[i])/m*100.0;

    printf("%.16f", sum/v.size());

    return 0;
}