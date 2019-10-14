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

int n,a,b,c;

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(0);

	cin >> n;
	cin >> a >> b >> c;

	int ab = (a*b) / gcd(a,b); // lcm of a and b
	int bc = (b*c) / gcd(b,c); // lcm of b and c
	int ac = (a*c) / gcd(a,c); // lcm of a and c
	int abc = (a*bc) / gcd(a,bc); // lcm of a,b,c
	int res = 0;

	res = 
		n/ab + // number of the numbers that divide by both a and b
		n/bc + // number of the numbers that divide by both b and c
		n/ac - // number of the numbers that divide by both a and c
		3 * (n/abc); // number of the numbers that divide by a, b and c

	cout << fixed << res << endl; // number of the numbers that divide by only two of the (a,b,c)
}