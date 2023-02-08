#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> left(n), right(n);
    vector<int> leftVal(n), rightVal(n);

    for(int i=0; i<n; i++){
        int num;
        cin >> num;

        if(num==1){
            left[i]=1;
            right[i]=-1;
        }

        else if(num==2){
            left[i]=-1;
            right[i]=1;
        }
    }

    leftVal[0]=left[0];
    rightVal[0]=right[0];

    for(int i=1; i<n; i++){
        leftVal[i]=max(left[i], leftVal[i-1]+left[i]);
        rightVal[i]=max(right[i], rightVal[i-1]+right[i]);
    }

    int leftAns=*max_element(leftVal.begin(), leftVal.end());
    int rightAns=*max_element(rightVal.begin(), rightVal.end());

    cout << max(leftAns, rightAns);

    return 0;
}