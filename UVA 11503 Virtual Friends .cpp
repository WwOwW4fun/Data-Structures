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


int parent[10000000],size[10000000],n;
void make_set(){
	for(int i = 1; i <= 2*n; i++)
	{
		parent[i] = i;
		size[i] = 1;
	}
}
int find(int a){
	if(a == parent[a]) return a;
    else return parent[a] = find(parent[a]);
}
int union1 (int a, int b){
	a = find(a); b = find(b);
	if(a != b){
		if(size[b] > size[a]) swap(a,b);
		parent[b] = a;
		size[a] += size[b];
		
	}
	return size[a];
}
int main(){
	ios_base::sync_with_stdio(false);  
    cin.tie(NULL);cout.tie(NULL);
    int  tt; cin >> tt;
    while( tt--)
    {
    	cin >> n;
    	map <string, int> mp;
    	int pos = 0;
    	make_set();
    	mp.clear();
    	for(int i = 1 ;i <= n; i++)
    	{
    		string str1, str2;
    		cin >> str1 >> str2;
    		if(mp[str1] == 0)
    		{
    			mp[str1] = pos+1;
    			pos++;
			}
			if(mp[str2] == 0)
    		{
    			mp[str2] = pos+1;
    			pos++;
			}
			cout << union1(mp[str1],mp[str2]) << endl;
			
		}
	}
	
}