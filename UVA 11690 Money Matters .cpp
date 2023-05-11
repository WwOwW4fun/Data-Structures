/* 
Author : Nguyen Xuan An 
Gmail : xuanan437@gmail.com
*/   
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define for0(i ,l ,r) for(int i = (l); i < (r); ++i)
#define for1(i, l, r) for(int i = (l); i >= (r); --i)
#define for2(v) for(auto it : v)
#define reset(a) memset(a,0,sizeof(a))
#define mem(a) memset(a,-1,sizeof(a))
#define membo(a) memset(a,false,sizeof(a))

#define vi vector<int>
#define vpi vector<pair<int, int>>
#define pii pair<int,int>
#define fi first
#define se second
#define prq priority_queue
#define pb push_back

#define output ios::sync_with_stdio(0);cin.tie(0);
#define fastio 	ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define PI 3.1415926535897932385
#define INF 10000000

#define BIT(n) (1<<(n))
#define AND(a,b) ((a) & (b))
#define OR(a,b) ((a) | (b))
#define XOR(a,b) ((a) ^ (b))

const int MaXX = 1e9 + 7;
int parent[1000000], size[1000000] , c[1000000], sum[1000000];
void make_set(int n)
{
    for(int i = 0; i < n; i++)
    {
        parent[i] = i;
        size[i] = 1;
    }
}
int  find(int a)
{
    if(a == parent[a]) return a;
    else return parent[a] = find(parent[a]);
}
void union1(int a, int b)
{
    a = find(a), b = find(b);
    if(a != b)
    {
        if(size[b] > size[a]) swap(a,b);
        parent[b] = a;
        size[a] += size[b];

    }

}
int main()
{
    int tc; cin >> tc;
    while(tc -- )
    {
        int n, m; cin >> n >> m;
        for(int i = 0; i < n; i++)
        {
            cin >> c[i];
        }

        make_set(n);
        while( m--)
        {
            int x, y; cin >> x >> y;
            union1(x,y);
        }
        int mark = 0;
        for0(i,0,n)
        {
            sum[i] = 0;
        }
        for0(i,0,n)
        {
            sum[find(i)] += c[i];
        }
        for(int  i = 0; i < n ;i ++)
        {
           if(sum[parent[i]] != 0)
           {
              mark = 1;
           }
        }
        cout << (mark == 0 ? "POSSIBLE" : "IMPOSSIBLE") << endl;

    }
}