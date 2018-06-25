  #include <bits/stdc++.h>
  #include <cstdio>
  #include <cstring>
  #include <cmath>
  #include <string>
  #include <chrono>
  #include <complex>
  #define endl "\n"
  #define ll long long int
  #define vi vector<int>
  #define vll vector<ll>
  #define vvi vector < vi >
  #define pii pair<int,int>
  #define pll pair<long long, long long>
  #define mod 1000000007
  #define inf 1000000000000000001;
  #define all(c) c.begin(),c.end()
  #define mp(x,y) make_pair(x,y)
  #define mem(a,val) memset(a,val,sizeof(a))
  #define eb emplace_back
  #define f first
  #define s second
  
  using namespace std;
 
  int main()
  {
    vector<int>arr={5, 7, 4, 8};
    int n=arr.size();
    int first =INT_MAX, second= INT_MAX , third=INT_MAX ;
    int i,si;
    for( i=0; i<arr.size(); i++ )
    {
      if(arr[i]<=first)
      {
        first = arr[i];
      }
      else
        if(arr[i]<=second){
          si=i;
          second=arr[i];
        }
        else
          break;
    } 
    if(i==n){
      cout<<"Not Possible !";
      return 0;
    }
    third =arr[i];

    for(int k=0; k<si; k++)
      if(arr[k]<second)
        first=arr[k];

      cout<<first<<"  "<<second<<"  "<<third;
     return 0;
  }
