#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ld long double
#define vt vector
#define pb push_back
#define vi vector<int>
#define FASTIO ios::sync_with_stdio(0); cin.tie(0);

#define nl "\n"
#define sp " "

#define FOR(i, a, b) for (int i=a; i<b; i++)
#define ir(i, nums) for (int i : nums)

int i = 0, j = 0, k = 0;

void solve(){
    int n;
    bool ans = false;
    string ans1 = "";
    map <string, ll> m;
    cin >> n;
    vt<string> arr(n);
    FOR(i,0,n){
        cin >> arr[i];
        m[arr[i]]++;
    }
    FOR(i,0,n){
        vector<string> subs;
        FOR(j,0, arr[i].length()) {
            string s1 = arr[i].substr(0,j);
            string s2 = arr[i].substr(j,arr[i].length()-1);
            if(m[s2] > 0 && m[s1] > 0) {
                ans = true;
                break;
            }
        }
        if (ans) ans1+="1";
        else ans1 +="0";
        ans = false;
    }
    cout << ans1;
}

int main () {
    FASTIO;
    int t;
    cin >> t;
    while(t--){
        solve();
        cout << nl;
    }
    return 0;
}