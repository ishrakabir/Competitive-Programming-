#include <bits/stdc++.h>
using namespace std;

#define el endl
int parent[100005];
int Size[100005];
void make(int v)
{
    parent[v] = v;
    Size[v] = 1;
}
int find(int v)
{
    if (v == parent[v])
        return v;
    return parent[v] = find(parent[v]);
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
    }
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (find(i) == i)
            cnt++;
    }
    cout << cnt;
}

int main()
{
    solve();
    //     test;
}
