#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<double> v;

int main() {
    double x, y;
    int n;
    scanf("%lf %lf", &x, &y);
    v.push_back(x*1000/y);

    scanf("%d", &n);
    
    for(int i=0; i<n; i++){
        scanf("%lf %lf", &x, &y);
        v.push_back(x*1000/y);
    }

    printf("%.2lf", *min_element(v.begin(), v.end()));

    return 0;
}