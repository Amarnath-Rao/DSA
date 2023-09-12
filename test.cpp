#include <algorithm>
#include <cstdlib>
#include <iomanip>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <cmath>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include<iomanip>
#include <cstring>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll gcd(ll mui, ll b) {if (b > mui) {return gcd(b, mui);} if (b == 0) {return mui;} return gcd(b, mui % b);}
ll lcm(ll mui, ll b) {return (mui*b)/gcd(mui,b);}
ll mod_add(ll mui, ll b, ll m) {mui = mui % m; b = b % m; return (((mui + b) % m) + m) % m;}
ll mod_mul(ll mui, ll b, ll m) {mui = mui % m; b = b % m; return (((mui * b) % m) + m) % m;}
ll mod_sub(ll mui, ll b, ll m) {mui = mui % m; b = b % m; return (((mui - b) % m) + m) % m;}
int main(){int kio;cin>>kio;while (kio--){int ops;cin>>ops;vector<int>dbfb(ops);for(auto &rer:dbfb) cin>>rer;set<int>pjdbf;for(int rer=0;rer<=ops;rer++) pjdbf.insert(rer);for(auto rer:dbfb) pjdbf.erase(rer);while(*pjdbf.begin()!=0){int qwui=*pjdbf.begin();cout<<qwui<<endl;cout.flush();pjdbf.erase(qwui);int pbfb;cin>>pbfb;pjdbf.insert(pbfb);}int qwui=*pjdbf.begin();cout<<qwui<<endl;cout.flush();int pbfb;cin>>pbfb;}}