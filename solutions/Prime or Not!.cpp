#include <bits/stdc++.h>
using namespace std;

//n might be too big for integer. Therefore, we need to use long long
bool prime(long long x)
{
	for (long long i = 2; i*i <= x; ++i) // take i as long long as well because i*i might exceed max integer and overlflow 
		if(x % i == 0)
			return false;

	return true;
}

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(0);
	long long n;
	cin >> n;
	if(prime(n))
		cout << "YES";	
	else
		cout << "NO";
}