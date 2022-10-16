#include <iostream>
#include <math.h>
#include <stack>

using namespace std;

stack<double> s;
double arr[26];

int main(){
    int n;
    double a;
    string str;
    cin >> n >> str;

    for(int i=0; i<n; i++)
        cin >> arr[i];

    for(int i=0; i<str.size(); i++){
        if(isalpha(str[i])) s.push(arr[str[i]-'A']);
        else{
            double num1=s.top();
            s.pop();

            double num2=s.top();
            s.pop();

            if(str[i]=='+') num1+=num2;
            else if(str[i]=='-') num1=num2-num1;
            else if(str[i]=='*') num1*=num2;
            else if(str[i]=='/') num1=num2/num1;

            s.push(num1);
        }
    }

    cout << fixed;
    cout.precision(2);
    cout << s.top();

    return 0;
}