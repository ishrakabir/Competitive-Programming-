#include <bits/stdc++.h>
using namespace std;
int prime[100000000], nPrime;
int mark[100000002];
void sieve(int n)
{
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
    sieve(100000000);
    for (int i = 0; i <= 100;i++)
        cout << prime[i] << endl;
}