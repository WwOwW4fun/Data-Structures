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
	int m; cin >> m;
	cin.ignore();
	for(int i = 0 ;i < m ;i++)
	{
		stack <char> s;
		string str; getline(cin,str);
		if(str.empty()) cout <<  "Yes" <<endl;
		else
		{
		
		int x;
		x = 0;
		for(int j = 0; j < str.length(); j++)
		{  
		    if(str[j] == '(' ||str[j] == '[') s.push(str[j]);
			else if(str[j] == ')')
			{
				if(s.empty())
				{
					
					x=1;
					break;
				}
				else if(s.top() == '[') 
				{
					x = 1;
					break;
				}
				else  s.pop();
				
			}
				else if(str[j] == ']')
			{
				if(s.empty())
				{
					
					x=1;
					break;
				}
				else if(s.top() == '(') 
				{
					x = 1;
					break;
				}
				else  s.pop();
				
			}
		}if(x == 1) cout << "No" << endl;
		else cout << (s.empty() ? "Yes" : "No") << endl;
			
		}
		
	}
}
