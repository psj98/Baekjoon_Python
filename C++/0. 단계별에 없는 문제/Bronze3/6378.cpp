#include <iostream>

using namespace std;

int main() {
	while(1) {
        string s;
	    int sum=0;
		cin >> s;
 
		if(s=="0") break;
		while(1) {
			for(int i=0; i<s.length(); i++)
				sum+=s[i]-'0';
		
			if(sum<10) break;
			else{
				s=to_string(sum);
				sum=0;
			}
		}
 
		cout << sum << "\n";
	}

    return 0;
}