#include<bits/stdc++.h>
using namespace std;
//defines
#define ll  long long
#define vll   vector<ll>
#define vvll  vector<vector<ll>>
#define pb    push_back
#define popb  pop_back
#define fi     first
#define se     second
#define nl  "\n"
#define cy cout<<"YES"<<nl;
#define cn cout<<"NO"<<nl;
#define gcd(a, b) __gcd((a), (b))
#define lcm(a, b) (a * b) / gcd(a, b)
const ll mod = 1000000007;
const long double pi=3.14159265358979323846264338327950288419716939937510582097494459230;


//functions
void solve();
void csort(vector <ll>);
void csort(vector <int>);
void csort(vector <ll> &v){
	ll i = 0;
	while(i < v.size()){
		ll cur = v[i] - 1;
		if(cur < v.size() && v[i] != v[cur]){
			swap(v[i],v[cur]);
		}else  
			i++;
 	}
}
void csort(vector <int> &v){
	ll i = 0;
	while(i < v.size()){
		ll cur = v[i] - 1;
		if(cur < v.size() && v[i] != v[cur]){
			swap(v[i],v[cur]);
		}else  
			i++;
 	}
}
int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);

	// ll tt;
	// cin >> tt;
   //      while(tt--)
	solve();
return 0;
}

void solve(){
	//write down your solution from here	
		long long n, k;
		cin >> n >> k;
		char s[n];
		for (int i = 0; i < n; i++) cin >> s[i];
		ll i = 0;

		// cout << n << " " << k << endl;
		// for (auto x : s) cout << x;
		if (n == 1){
			if (k > 0) cout << 0 << "\n";
			if (k <= 0) cout << s[0] << "\n";
			return;
		}
		while (i < n && k > 0){
			if (i == 0 && s[i] != '1'){
				s[i] = '1'; 
				k--;
			}else if (s[i] != '0' && i != 0){
				s[i] = '0';
				k--;
			}i++;
		}
		for (auto x : s) cout << x;
			cout << "\n";

}

 