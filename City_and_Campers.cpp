#include <bits/stdc++.h>
using namespace std;

#define el endl
int parent[100005];
int Size[100005];
multiset<int> sizes;
void make(int v)
{
    parent[v] = v;
    Size[v] = 1;
    sizes.insert(1);
}
int Find_parent(int v)
{
    if (v == parent[v])
        return v;
    return parent[v] = Find_parent(parent[v]);
}
void merge(int a, int b)
{
    sizes.erase(sizes.find(Size[a]));
    sizes.erase(sizes.find(Size[b]));
    sizes.insert(Size[a] + Size[b]);
}
void Union(int a, int b)
{
    a = Find_parent(a);
    b = Find_parent(b);
    if (a != b)
    {
        if (Size[a] < Size[b])
            swap(a, b);
        parent[b] = a;
        merge(a, b);
        Size[a] += Size[b];
    }
}
void solve()
{
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        make(i);
    while (k--)
    {
        int u, v;
        cin >> u >> v;
        Union(u, v);
        if (sizes.size() == 1)
            cout << 0 << el;
        else
        {
            int mn = *(sizes.begin());
            int mx = *(--sizes.end());
            cout << mx - mn << el;
        }
    }
}

int main()
{
    solve();
    //     test;
}
