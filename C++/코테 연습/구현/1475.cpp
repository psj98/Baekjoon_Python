#include <iostream>
#include <algorithm>

using namespace std;

int arr[10];

int main() {
    int n;
    scanf("%d", &n);

    string s=to_string(n);

    for(int i=0; i<s.size(); i++){
        arr[n%10]++;
        n/=10;
    }

    int check=arr[6]+arr[9];
    if(check%2==1) arr[6]=arr[9]=check/2+1;
    else arr[6]=arr[9]=check/2;

    printf("%d", *max_element(arr, arr+10));

    return 0;
}