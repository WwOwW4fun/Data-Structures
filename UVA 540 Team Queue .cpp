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
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int k = 1, n;
    while(cin >> n && n != 0)
    {   
		map<int, int> pos;
    	cout << "Scenario #" << k << endl;
    	k++;
    	int a[n]; 
    	for(int i = 0; i < n ;i++)
		{
			cin >> a[i];
			int b[a[i]];
			for(int j = 0; j < a[i] ;j++)
			{
				cin >> b[j];
				pos[b[j]] = i+1;
			}
	
		}
		queue<int> qu[20*n];
		string cod;
		int start = 0, end = n,t = 0;
		while(cin >> cod)
		{   
			if(cod =="ENQUEUE")
			{
				int m; cin >> m;
				for(int i = start; i < end; i++)
				{
					if(pos[qu[i].front()] == pos[m] || qu[i].empty())
					{
						qu[i].push(m);
						break;
					}
				  
					
				}			
			}
			else if(cod == "STOP") break;
			else if(cod == "DEQUEUE")
			{
				for(int i = start; i < end;i++)
				{   
					if(!qu[i].empty())
					{
						cout << qu[i].front() << endl;
						qu[i].pop();
						break;
					}
					 
				}
			}
			if(qu[t].empty())
			{
				t++;
				start++;
				end++;
			}
		} 
		cout << endl;
    }
}
