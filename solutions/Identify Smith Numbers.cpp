#include <bits/stdc++.h>
using namespace std;

#define MAXN ((int)2e5+5)

bool sieve[2*MAXN];

void sieve_setup()
{

	sieve[1] = 1;
	for (int i = 2; i < MAXN; ++i)
	{
		if(sieve[i] == 0)
		{
			for (int j = 2*i; j < MAXN; j += i)
				sieve[j] = 1;
		}
	}

}

long long digitsum(long long x)
{
	long long res = 0;
	while(x > 0)
	{
		res += x%10;
		x/=10;
	}
	return res;
}

long long pfactor(long long x)
{
	long long sum = 0;
	long long ct = 0;
	for (long long i = 2; i*i <= x; ++i)
	{
		if(sieve[i] == 0 && (x % i == 0))
		{
			ct = 0;
			while(x%i==0){
				ct++;
				x /= i;
			}
			sum += digitsum(i) * ct;
		}
	}
	if(x > 1)
		sum += digitsum(x);

	return sum;
}

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(0);
	long long n;	
	cin >> n;
	sieve_setup();

	if(pfactor(n) == digitsum(n))
		cout << 1 << endl;
	else
		cout << 0 << endl;

}