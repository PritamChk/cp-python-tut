#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long int
//===========================================
#define si(x)	scanf("%d",&x)
#define sl(x)	scanf("%lld",&x)
#define ss(s)	scanf("%s",s)
#define pi(x)	printf("%d\n",x)
#define pl(x)	printf("%lld\n",x)
#define ps(s)	printf("%s\n",s)
//===========================================
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
//===============================
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define bitcount __builtin_popcountll
#define INF (int)(1e18+9)
#define endl '\n'
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define TEST ll tc;cin>>tc;for(ll i=0;i<tc;i++)
using namespace std;
#define MOD 1000000007 //mod = 1e9+7
#define MAX 1000001
//==========================================
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;

using namespace std;
//================= End of Gen read write ==========================
template<class T>
void printVec(T &v,const string sep=" " ){
	auto c=0L;
	auto n = v.size(); 
	for(auto &ele:v){
		c++;
		cout<<ele;if (c<n)cout<<sep;
	}
	//cout<<endl;
}

// ============= USER DEFINED FuNction ==============


//============== User Solution ================

void solve(){
	//body
	vi n = {1,2,3,4};
	printVec(n,", ");
	//cout<<"int test"<<endl;
}
//====================================


////////////////[ MAIN ]/////////////////////////////////////
int main(){
	FIO;
	TEST solve();
	return 0;
}
