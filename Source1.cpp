#include <iostream>
using namespace std;

int main() {
	const int m = 7;
	int n, sum = 0, i = 0, k = 0;
	cin >> n;
	int a[m];
	scanf_s("%d %d %d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4], &a[5], &a[6]);
	while (sum < n) {
		sum = sum + a[i];
		i++;
		k = i;
		if (i == 7) i = 0;
	}
	cout << k;
}