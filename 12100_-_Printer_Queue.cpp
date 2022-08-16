#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned ll;
using ld = long double;
using pi = pair<int, int>;
using pii = pair<ll, ll>;
using vi = vector<int>;
using vii = vector<ll>;
using vip = vector<pair<int, int>>;

const int MAX_N = 1e5 + 1;
const ll mod = 1e9 + 7;
const ll INF = 1e9;

#define ci cin
#define co cout

#define PI 3.141592653589793238
#define w(n) while (n--)
#define fir first
#define sec second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define mp make_pair
#define loop(i, n, x) for (int i = n; i < x; i++)
#define sz(a) ((int)(a).size())
#define st(x) sort(x.begin(), x.end())
#define For(n, x) for (int i = 1; i <= x; i++)
#define ite iterator it
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define test     \
    ll t;        \
    cin >> t;    \
    while (t--)  \
    {            \
        solve(); \
    }
#define in insert
#define el endl
struct job
{
    int i;
    int p;
    job(int i_, int p_)
    {
        i = i_;
        p = p_;
    }
};
bool operator<(job a,job b)
{
    return a.p < b.p;
}
queue<job> q;
priority_queue<job> pq;
void solve()
{

    int t;
    cin >> t;
    w(t)
    {
        int n, m;
        cin >> n >> m;
        for (int i = 0; i < n;i++)
        {
            int p;
            cin >> p;
            job j(i, p);
            q.push(j);
            pq.push(j);
        }
        int cnt = 0;
        while(1)
        {
            if(q.front().p==pq.top().p)
            {
                if(q.front().i==m)
                    break;
                q.pop();
                pq.pop();
                cnt++;
            }
            else 
            {
                q.push(q.front());
                q.pop();
            }
        }
        cout << cnt + 1<<el;
        q=queue<job>();
        pq=priority_queue<job>();
    }
}

int main()
{
    fast;
    solve();
    //     test;
}