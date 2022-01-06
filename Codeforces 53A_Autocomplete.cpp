#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    string p, s[111];
    cin >> p;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> s[i];
    sort(s, s + n);
    for (int i = 0; i < n; i++)
        if (int(s[i].find(p)) == 0)
        {

            cout << s[i] << endl;
            return 0;
        }
    cout << p << endl;
}
