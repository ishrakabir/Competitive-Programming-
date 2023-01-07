#include <bits/stdc++.h>
using namespace std;
int prime[100000000], nPrime;
int mark[100000002];
int ans[100000002];
void sieve(int n)
{
    int limit = sqrt(n) + 2;
    mark[1] = 1;
    for (int i = 4; i <= n; i += 2)
        mark[i] = 1;
    prime[nPrime++] = 2;
    int cnt = 2;
    for (int i = 3; i <= n; i += 2)
    {
        if (mark[i] == 0)
        {
            if (i % 500 == 1)
            {
                prime[nPrime++] = i;
                cnt++;
            }
            if (i <= limit)
            {
                for (int j = i * i; j <= n; j += (i * 2))
                {
                    mark[j] = 1;
                }
            }
        }
    }
    // cout << cnt;
}

int main()
{
    sieve(1000000000);

    cout << prime[2];
}