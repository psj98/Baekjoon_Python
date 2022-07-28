#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> v;

int gcd(int a, int b){
    if(b==0) return a;
    else return gcd(b, a%b);
}

int main() {
    int a, n, m;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d", &a);
        v.push_back(a);
    }

    sort(v.begin(), v.end()); // 정렬

    int ans=v[1]-v[0]; // 인접한 것끼리 뺀 것의 최대공약수의 약수가 답

    for(int i=1; i<v.size()-1; i++)
        ans=gcd(ans, v[i+1]-v[i]);

    for(int i=2; i<=ans/2; i++) // 약수 빠르게 구하기
        if(ans%i==0) printf("%d ", i);
    
    printf("%d", ans);

    return 0;
}