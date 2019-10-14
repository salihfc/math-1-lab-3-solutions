#include <bits/stdc++.h>
using namespace std;

#define MAXN ((int)1e7+5)

bool sieve[MAXN];

void sieve_setup()
{
	sieve[1] = 1;

	// There is better implementations of Sieve of Eratosthenes.
	// But this version should suffice for this problem.

	for (int i = 2; i < MAXN; ++i)
		if(sieve[i] == 0)
			for (int j = 2*i; j < MAXN; j += i)
				sieve[j] = 1;
}

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(0);

	int n;
	cin >> n;

	sieve_setup();

	int a;
	for (int i = 0; i < n; ++i)
	{
		cin >> a;
		if(sieve[a] == 0)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}