#include <iostream>
#include <set>
#include <algorithm>
#include <vector>
using namespace std;

vector <string> cringo;

void recursion( string alfabet, string s) {

	if (alfabet.empty())
	{
		cringo.push_back(s);
		return;
	}

	set <char> secik;

	for (int i = 0; i < alfabet.length(); i++)
	{
		char znak = alfabet[i];

		if (secik.count(znak)==1)
		{
			continue;
		}

		string pamietaj = alfabet;

		secik.insert(znak);

		alfabet.erase(alfabet.begin() + i);

		recursion(alfabet, s + znak);

		alfabet = pamietaj;
	}

}

int main()
{
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(0);

	string s;
	cin >> s;
	sort(s.begin(), s.end());
	int a = s.length();
	recursion(s,"");
	cout << cringo.size() << "\n";
	for (string x : cringo)
	{
		cout << x << "\n";
	}

}
