#include <bits/stdc++.h>
using namespace std;

#define el endl

long long sqrt_method(long long n) // O(sqrtN)
{
    long long cnt = 0, sum = 0;

    for (long i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
            if (i != n / i)
            {
                sum += n / i;
            }
        }
    }
    return sum - n;
    // }
    // cout << n << " " << sum - n << el;
}

int main()
{

    long t;
    cin >> t;
    // long arr[500001];
    // for (long i = 1; i < 500001; i++)
    // {
    //     arr[i] = sqrt_method(i);
    // }
    while (t--)
    {
        long long n;
        cin >> n;
        cout << sqrt_method(n)<<el;
    }
}
