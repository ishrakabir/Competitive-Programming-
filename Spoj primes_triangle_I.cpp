#include <bits/stdc++.h>
using namespace std;
int prime[100000000], nPrime;
int mark[100000002];
int arr2[100000002];
int arr1[100000002];
// int cols[100000002];
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
    int cnt = 1;
    int row = 1, col = 1;
    for (int i = 0; i < 5761455; i++)
    {
        int np = (cnt * (cnt + 1)) / 2;
        if (i + 1 > np)
        {
            cnt++;
            col = 1;
            // cout << cnt << " ";
        }
        arr1[prime[i]] = cnt;
        arr2[prime[i]] = col;
        col++;
    }
}
int main()
{
    sieve(100000000);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (mark[n] == 0)
            cout << arr1[n] << " " << arr2[n] << endl;
        else
            cout << -1 << endl;
    }
}
