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

int main(){
	fastio;
    int n;
    while(cin >> n && n)
    {
    	int a[n];
    	while(cin >> a[0] && a[0])
    	{
    		for(int i = 1; i < n; i++)
    		{
    			cin >> a[i];
			}
			stack<int> st;
			int j = 0, x = 0;
			for(int i = 1; i <= n; i++)
			{
				st.push(i);
				while(!st.empty() && st.top() == a[j])
				{
					j++;
					st.pop();
					if(j >= n)
					{
						x = 1;
						break;
					}
				}
				if(x == 1) break;
			}
			if( st.empty()) cout << "Yes" <<endl;
			else cout << "No" << endl;
		}
		cout << endl;
	}
}
