#include<iostream>

using namespace std;

int turnes = 0;

void solution(int n, char a, char b, char c) {
	if (n > 0) {
		solution(n - 1, a, c, b);
		turnes++;
		cout << "Move disk number " << n << " from pole " << a << " to pole " << c << endl;
		solution(n - 1, b, a, c);
	}
}

int main() {

	int n = 4;
	solution(n, 'A', 'B', 'C');  // to move n disks from pole A to pole C using pole B
	cout << "Total turnes: " << turnes << endl;

	return 0;
}