#include <iostream>
using namespace std;

int main() {
	int n, cnt = 0, num, temp;
	scanf("%d", &n);
	num=n;

	while (1){
		temp=(n%10)*10+(n/10+n%10)%10;
		cnt++;

		n=temp;
		if(temp==num)
			break;
	}
	printf("%d", cnt);
}