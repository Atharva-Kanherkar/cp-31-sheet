#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<ll>
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define F first
#define S second
#define endl '\n'

const int MOD = 1e9 + 7;
const int INF = 1e9;
 void solve() {
   int n;
   cin>>n;
   vector<int> a(n);
  
   vector<int> b;
  
    for(int i = 0; i<n; i++){
        int x;
        cin>>x;
         

         if(i && b.back()>x){
            b.push_back(1);
         }
       b.push_back(x);
    }
    cout<<b.size()<<endl;
 for(auto x : b){
    cout<<x<<" ";
 }
 //fghfd
 cout<<endl;

 }

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}