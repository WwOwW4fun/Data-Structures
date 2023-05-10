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
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int tt; cin >> tt;
    while(tt-- )
    {
    	int len, n; cin >> len >> n;
    	len *= 100;
        int a[n];
    	queue<int > qul;
		queue <int > qur;
        for(int i = 0; i < n; i++)
        {	
			string str;
        	cin >> a[i] >> str;
        	if(str == "left") qul.push(a[i]);
            else if (str == "right")  qur.push(a[i]);
		}
		int g = 0, cnt = 0;
		while(!qul.empty() || !qur.empty())
		{
			if( g % 2 == 0 && !qul.empty())
			{   
				long long sum = 0;
				while (sum <= len && !qul.empty())
				{
					sum += qul.front();
					if(sum > len) break;
					qul.pop();
				}
			}
			else if( g % 2 != 0 && !qur.empty())
			{
				long long sum = 0;
				while (sum <= len && !qur.empty())
				{
					sum += qur.front();
					if(sum > len) break;
					qur.pop();
				}

			}
			g ++;
		}
		cout << g << endl;
	}
}