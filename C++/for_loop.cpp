#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	// Complete the code.
	int a,b;
	string numbers[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

	cin >> a;
	cin >> b;

	for (int i=a; i<=b; i++) {
		if(i<=9) {
			cout << numbers[i] << endl;
		}
		else {
			if(i%2 ==0) {
				cout << "even" << endl;
			}
			else {
				cout << "odd" << endl;
			}
		}
	}
	return 0;
}
