//{ Driver Code Starts
// A C++ program to find if there is a zero sum
// subarray
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define rev reverse
#define endl '\n'
#define flp(x,y) for(int i = x ; i < y ; ++i)
#define fln(x,y) for(int i = y ; i > x ; --i)
#define c(v,x) count(v.begin(),v.end(),x)
#define a(v,x) accumulate(v.begin(),v.end(),x)
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define vec(x) vector<x>
#define pb push_back
#define rs(v,x) sort(v.begin(),v.end(),greater<x>())
#define MT make_tuple
#define MP make_pair
#define gv(i,n) get<n>(v[i])
#define fv(i) v[i].first
#define sv(i) v[i].second
#define p(x) cout << x << endl
#define lp(x) cout << x << " " 
 
typedef long long ll;
typedef long double ld;
const int N = 1e5 + 1;
const int mod = 1e9 + 7;
class Solution{
    public:
    bool subArrayExists(int arr[], int n)
    {
        vector<ll> prefixsumm(n);
        flp(0,n){
            if(i==0){
                prefixsumm[i] = arr[i];
            }
            else{
                prefixsumm[i] = arr[i] + prefixsumm[i - 1];
            }
            if(prefixsumm[i]==0){
                return true;
            }
        }
        map<ll,ll> mp;
        flp(0,n){
            mp[prefixsumm[i]]++;
            if(mp[prefixsumm[i]]>1){
                return true;
            }
        }
        return false;
    }
};

//{ Driver Code Starts.
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    Solution obj;
	    	if (obj.subArrayExists(arr, n))
		cout << "Yes\n";
	else
		cout << "No\n";
	}
	return 0;
}
// } Driver Code Ends