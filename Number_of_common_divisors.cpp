#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int sqrt_method(int n) // O(sqrtN)
{
    int cnt = 0, sum = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cnt += 1;
            if (i != n / i)
            {
                cnt += 1;
            }
        }
    }
    return cnt;
}

int main()
{

    int t;
    scanf("%d", &t);
    while (t--)
    {

        int n, m;
        scanf("%d%d", &n, &m);
        int gcd = __gcd(n, m);
        printf("%d\n", sqrt_method(gcd));
    }
    return 0;
}
