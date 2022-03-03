#include <iostream>
using namespace std;

int main() {
	int a, b, c, q, w, e, r, t, y, m = 0;
	cin >> a;
	cin >> b;
	cin >> c;
	q = a + b * c;
	w = a * (b + c);
	e = a * b * c;
	r = (a + b) * c;
	t = a + b + c;
	y = a * b + c;
	if (q > m) m = q;
	if (w > m) m = w;
	if (e > m) m = e;
	if (r > m) m = r;
	if (t > m) m = t;
	if (y > m) m = y;
	cout << m;
}