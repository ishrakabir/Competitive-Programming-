#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int t;
        cin >> t;
        sort(arr, arr + n);
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == t)
            {
                count++;
                cout << i << " ";
            }
        }
        if (count == 0)
            cout << "no data" << endl;
        else
            cout << endl;
    }
    return 0;
}
