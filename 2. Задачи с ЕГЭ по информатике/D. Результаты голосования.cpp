#include <bits/stdc++.h>

#define ll long long

using namespace std;

ll check(vector <pair <ll, string>>& a, string key) {
    ll i;
    for (i = 0; i < a.size(); i++) {
        if (a[i].second == key) {
            return i;
        }
    }
    return -1;
}
 
bool cmp(pair<ll, string>a, pair<ll, string>b) {
    if (a.first == b.first) return a.second < b.second;
    return a.first > b.first;
}
 
int main()
{
    ll n;
    cin >> n;
    vector <pair <ll, string>> a;
    string s;
    getline(cin, s);
    ll i;
    for (i = 0; i < n; i++) {
        getline(cin, s);
        ll t = check(a, s);
        if (t == -1) {
            a.push_back(make_pair(1, s));
        }
        else {
            a[t].first++;
        }
    }
    ll si = a.size();
    sort(a.begin(), a.end(), cmp);
    for (i = 0; i < si; i++) {
        cout << a[i].second << "\n";
    }
    return 0;
}