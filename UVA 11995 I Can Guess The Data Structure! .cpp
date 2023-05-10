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
int main () {
    int n;
    while(cin >> n && n)
    {  
       int x[n],y[n];
        stack<int>st;
        queue<int>q;
        priority_queue<int>pq;
        int cnt1=0;
        int cnt2=0;
        int cnt3=0;
          for(int i = 0; i < n; i++)
          {
          cin >> x[i] ;
          cin >> y[i];
          if (x[i]==1) {
             st.push(y[i]);
             q.push(y[i]);
             pq.push(y[i]);
             cnt1++;
             cnt2++;
             cnt3++;
          } else if (x[i]==2) {
             if (!st.empty() && st.top()==y[i]) {
                st.pop();
                cnt1++;
             }
             if (!q.empty() && q.front()==y[i]) {
                q.pop();
                cnt2++;
             }
             if (!pq.empty() && pq.top()==y[i]) {
                pq.pop();
                cnt3++;
             }
          }
      }
        
        if (cnt1==n && cnt2!=n && cnt3!=n) {
          cout << "stack" << "\n";
        } else if (cnt1!=n && cnt2==n && cnt3!=n) {
          cout << "queue" << "\n";
        } else if (cnt1!=n && cnt2!=n && cnt3==n) {
          cout << "priority queue" << "\n";
        } else if (cnt1 != n && cnt2 != n && cnt3 != n) {
          cout << "impossible" << "\n";
        } else {
          cout << "not sure" << "\n";
        }
    }
}
