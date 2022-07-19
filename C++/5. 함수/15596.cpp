#include <iostream>
#include <vector>

using namespace std;

long long sum(vector<int> & a){
    long long re=0;

    for(int i=0; i<a.size(); i++)
        re+=a[i];

    return re;
}