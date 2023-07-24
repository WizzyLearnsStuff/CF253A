#include<iostream>
#include<stdio.h>

using namespace std;

int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n, m;
	cin >> n >> m;

	char c, c2;
	if (n > m) {
		c = 'B';
		c2 = 'G';
	} else { c = 'G'; c2 = 'B'; }
 
	for (int i = 0; i < min(n, m); i++) {
		cout << c << c2;
	}

	for (int i = 0; i < abs(m - n); i++) {
		cout << c;
	}
}
