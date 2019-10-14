#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
	if(a>b) std::swap(a,b);

	int tmp;
	while(a > 0)
	{
		if(a > b)
			a = a%b;
		else
		{
			tmp = a;
			a = b%a;
			b = tmp;
		}
	}

	return b;
}

int n,a,res;

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(0);
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> a;
		res = gcd(res, a);
	}
	cout << res << endl;
}