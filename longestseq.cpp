//{ Driver Code Starts
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
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      sort(arr , arr + N);
      int cnt = 1;
      int maxi = 1;
      flp(0,N-1){
          if(arr[i+1]== arr[i] + 1){
              cnt++;
              maxi = max(cnt,maxi);
          }
          else if(arr[i+1]==arr[i]){
              continue;
          }
          else{
              cnt = 1;
          }
      }
      return maxi;
    }
};

//{ Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}
// } Driver Code Ends