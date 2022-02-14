#include <bits/stdc++.h>
using namespace std;

int Size[200002];
int parent[200002];
map<int, int> mp;
void make(int v)
{
    Size[v] = 1;
    parent[v] = v;
    mp[1]++;
}
int find(int v)
{
    if (parent[v] == v)
        return v;
    else
    {
        return parent[v] = find(parent[v]);
    }
}
void merge(int a, int b)
{
    mp[Size[a]]--, mp[Size[b]]--;
    if (mp[Size[a]] == 0)
        mp.erase(mp.find(Size[a]));
    if (mp[Size[b]] == 0)
        mp.erase(mp.find(Size[b]));
}
void Union(int a, int b)
{
    a = find(a);
    b = find(b);
    if (a != b)
    {
        if (Size[a] < Size[b])
            swap(a, b);
        parent[b] = a;
        merge(a, b);
        Size[a] += Size[b];
        mp[Size[a]]++;
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        make(i);
    }
    while (m--)
    {
        int i, j;
        cin >> i >> j;
        Union(i, j);
        if (mp.size() == 1)
        {
            cout << 0 << endl;
            continue;
        }
        auto it = mp.begin();
        if (it->second > 1)
        {
            cout << 0 << endl;
            continue;
        }

        int prev = 0;
        prev = it->first;
        it++;
        int diff = INT_MAX;
        while (it != mp.end())
        {
            if (it->second > 1)
            {
                diff = 0;
                break;
            }

            diff = min(diff, it->first - prev);
            prev = it->first;
            it++;
        }
        cout << diff << endl;
    }
}
