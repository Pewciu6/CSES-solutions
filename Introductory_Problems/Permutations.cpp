#include <iostream>
#include <string>

using namespace std;

int main()
{
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(0);

	int x;
	cin >> x;

	string s = "";

	if (x <= 3&&x!=1) {
		cout << "NO SOLUTION";
		return 0;
	}

	for (int i = 1; i <= x; i++) {

		if (i % 2 == 0) {
			cout << i << " ";
		}

		else s += to_string(i)+" ";

	}
	cout << s;
	return 0;
}
