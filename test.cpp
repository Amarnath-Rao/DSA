#include<bits/stdc++.h>
#define fi first
#define se second
#define ll long long
#define pb push_back
#define db double
#define inf 0x3f3f3f3f
using namespace std;
const long long int N=2e5+5;
const long long int mod=998244353;
long long int n,d[N];
ll res,inv[N],fac[N];
ll fpow(ll x,ll y=mod-2){
    ll z(1);
    for(;y;y>>=1){
        if(y&1)z=z*x%mod;
        x=x*x%mod;
    }return z;
}
void init(long long int n){
    fac[0]=1;for(long long int i=1;i<=n;i++)fac[i]=fac[i-1]*i%mod;
    inv[n]=fpow(fac[n]);for(long long int i=n;i>=1;i--)inv[i-1]=inv[i]*i%mod;
}
void add(ll &x,ll y){
    x=(x+y)%mod;
}
ll omega[N<<1][2];
void ntt(vector<ll>&a,long long int f=0){
    long long int k=0,len=a.size();while((1<<k)<len)k++;
    for(long long int i=0;i<len;i++){
        long long int t=0;
        for(long long int j=0;j<k;j++){
            if(i>>j&1)t+=(1<<k-j-1);
        }if(i<t)swap(a[i],a[t]);
    }
    for(long long int l=2;l<=len;l<<=1){
        long long int k=l/2;ll x=omega[l][f];
        for(long long int i=0;i!=len;i+=l){
            ll y=1;
            for(long long int j=0;j<k;j++){
                ll tmp=a[i+j+k]*y%mod;
                a[i+j+k]=(a[i+j]-tmp)%mod;
                a[i+j]=(a[i+j]+tmp)%mod;
                y=y*x%mod;
            }
        }
    }if(f){
        ll invlen=fpow(len);
        for(long long int i=0;i<len;i++)a[i]=a[i]*invlen%mod;
    }
}
struct poly{
    vector<ll>a;
    friend poly operator *(poly a,poly b){
        assert(a.a.size()==b.a.size());
        ntt(a.a),ntt(b.a);for(long long int i=0;i<a.a.size();i++)a.a[i]=a.a[i]*b.a[i]%mod;
        ntt(a.a,1);return a;
    }
};
poly solve(long long int l,long long int r){
    if(l==r){
        poly t;t.a.resize(2);
        t.a[0]=1,t.a[1]=d[l];
        return t;
    }long long int mid=l+r>>1;
    poly a=solve(l,mid),b=solve(mid+1,r);
    long long int len=1;while(len<=r-l+1)len<<=1;
    a.a.resize(len),b.a.resize(len);
    a=a*b;
    return a;
}
long long int add(long long int x,long long int y){
    return (x+y);
}
signed main(){
   string s1,s2;
   cin>>s1>>s2;
    int n=s1.size(),m=s2.size();
    if (n!=m){
        return false;
    }
    string temp=s1+s1;
    return (temp.find(s2)!=string::npos);
}