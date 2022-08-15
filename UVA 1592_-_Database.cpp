#include <bits/stdc++.h>

using namespace std;

string db[10007][12];
char buff[85];
int n, m;

int main()
{
    while (1)
    {
        if (scanf("%d %d\n", &n, &m) == EOF)
            return 0;
        for (int i = 0; i < n; i++)
        {
            gets(buff);
            int j = 0, k = 0;
            while (buff[j] != '\0')
            {
                if (buff[j] != ',')
                {
                    db[i][k].push_back(buff[j]);
                }
                else
                    k++;
                j++;
            }
        }
        bool found = false;
        for (int i = 0; i < m; i++)
        {
            for (int j = i + 1; j < m; j++)
            {
                map<pair<string, string>, int> mp;
                for (int k = 0; k < n; k++)
                {
                    pair<string, string> p = make_pair(db[k][i], db[k][j]);

                    if (mp.find(p) == mp.end())
                        mp[p] = k;
                    else
                    {
                        cout << "NO" << endl
                             << mp[p] + 1 << " " << k + 1 << endl
                             << i + 1 << " " << j + 1 << endl;
                        found = true;
                        break;
                    }
                }
                if (found)
                    break;
            }
            if (found)
                break;
        }
        if (!found)
            printf("YES\n");
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                db[i][j].clear();
            }
        }
    }
}
