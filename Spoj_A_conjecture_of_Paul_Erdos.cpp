#include <bits/stdc++.h>
using namespace std;
int prime[10000001] = {0}, nPrime;
int mark[10000001];
int ans[10000002] = {0};
int mx = 10000000;
void sieve(int n)
{
    int limit = sqrt(n) + 2;
    mark[1] = 1;
    for (int i = 4; i <= n; i += 2)
        mark[i] = 1;
    prime[2] = 1;
    for (int i = 3; i <= n; i += 2)
    {
        if (mark[i] == 0)
        {
            prime[i] = 1;
            if (i <= limit)
            {
                for (int j = i * i; j <= n; j += (i * 2))
                {
                    mark[j] = 1;
                }
            }
        }
    }

    for (int i = 1; i * i <= mx; i++)
    {
        for (int j = 1; j * j * j * j <= mx - i * i; j++)
        {
            long long x = i * i + j * j * j * j;
           
            if(prime[x]==1&&x<=mx)
            {
                ans[x] = 1;
            }
        }
    }
    
    long long cnt = 0;
    for (int i = 2; i <=  mx;i++)
    {
        cnt += ans[i];
        ans[i] = cnt;

    }
}

int main()
{
    sieve(10000000);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        cout << ans[n] << endl;
    }
}
