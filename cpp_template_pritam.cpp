
#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long int
//#define str string
//===========C I/O================================
// #define si(x)	scanf("%d",&x)				
// #define sl(x)	scanf("%lld",&x)			
// #define ss(s)	scanf("%s",s)				
// #define pi(x)	printf("%d\n",x)			
// #define pl(x)	printf("%lld\n",x)			
 #define ps(s)	printf("%s\n",s)			    
//=================================================
//======================  iterators	==========================================
#define fo(i,n) for(i=0;i<n;i++)								           
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)						
#define all(x) x.begin(), x.end()											
#define sortall(x) sort(all(x))											
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)				
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);	
#define TEST ll tc;cin>>tc;for(ll i=0;i<tc;i++)								
//============================================================================
#define vec vector						
#define pb push_back						
#define mp make_pair						
#define fi first							
#define se second							
#define bitcount __builtin_popcountll		
using namespace std;						
//===== Constanst =============================
#define endl '\n'						
#define PI 3.1415926535897932384626			
#define INF (int)(1e18+9)					
#define MOD 1000000007 //mod = 1e9+7		
#define MAX 1000001						
//=============================================
//======= Frequently used DS==============================
typedef pair<int, int>				pii;		
typedef pair<ll, ll>				pll;		
typedef vector<int>				vi;		
typedef vector<ll>				vl;			
typedef vector<pii>				vpii;		
typedef vector<pll>				vpll;		
typedef vector<vi>				vvi;		
typedef vector<vl>				vvl;		
typedef vector<pair<string,string> > 		vpss; 		
typedef vector<pair<int,string> > 		vpis;			
//================-------------============================
using namespace std;
//================= End of Gen read write ===========================
//																
//					Mostly Used Functions							
//														
/////////////////------------------------------------////////////////

//==========Dynamic READ WRITE Function for C++17=========
template <typename... T>								
void read(T &...args) {										
    ((cin >> args), ...);								
}																	
//========================================================
template <typename... T>								
void write(string delimiter, T &&...args) {					
    ((cout << args << delimiter), ...);					
    //cout<<endl;											
}															
//========================================================
template <typename T>										
void readContainer(T &t) {									
    for (auto &e : t) {										
        read(e);															
    }													
}														
//========================================================
template <typename T>								
void writeContainer(string delimiter, T &t) {		
    for (const auto &e : t) {						
        write(delimiter, e);											
    }													
    cout<<endl;												
}														
////========================================================
template <typename T>									
void writeContainerPair(string delimiter, T &t) {	    
    for (const auto &e : t) {							
        cout<<e.fi<<" "<<e.se<<delimiter;	           
       												    				
    }													
    //cout<<endl;												
    ps("");
}													
//================END of I/O==============================

// ============= Frequently USED FuNctions ===================|
int mpow(int base, int exp); 
//____________________________________________________________|


//_____________________User Solution ___________________________

void solve(){
	vpii n = {	{7,2},
				{3,4} 
			 };
	vec<int> k = {4, 3, 2, 1};
	sortall(n);
	writeContainer(" ",k);
	writeContainerPair("\n",n);
}
//=============================================


//____________________________[ MAIN ]________________________________//
int main(){
	FIO;
	TEST solve();
	return 0;
}
//_____________________________END___________________________________//

//======== function Definitions==================
int mpow(int base, int exp) {
  base %= MOD;
  int result = 1;
  while (exp > 0) {
    if (exp & 1) result = ((ll)result * base) % MOD;
    base = ((ll)base * base) % MOD;
    exp >>= 1;
  }
  return result;
}
