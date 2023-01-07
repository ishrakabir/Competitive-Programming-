#include <bits/stdc++.h>
using namespace std;
long long prime[100000000], nPrime;
int mark[100000002];
int ans[100000002];
vector<long long> v;

void sieve(int n)
{
    int cnt = 2;
    int limit = sqrt(n) + 2;
    mark[1] = 1;
    for (int i = 4; i <= n; i += 2)
        mark[i] = 1;
    prime[nPrime++] = 2;
    for (int i = 3; i <= n; i += 2)
    {
        if (mark[i] == 0)
        {
            prime[nPrime++] = i;
            cnt++;
            if (i <= limit)
            {
                for (int j = i * i; j <= n; j += (i * 2))
                {
                    mark[j] = 1;
                }
            }
        }
    }
}

int main()
{
   
    sieve(10000000);
    
    for (int i = 0; i < 40000; i++)
    {
        for (int j = i + 1; j < 400000; j++)
        {
            if (prime[i] * prime[j] > 10527451)
                            break;
                v.push_back(prime[i] * prime[j]);
        }
    }

    sort(v.begin(), v.end());



    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << v[n - 1] << endl;
    }
}