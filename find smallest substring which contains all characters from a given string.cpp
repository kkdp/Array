#include <iostream>
#include <cstdio>
#include <vector>
#include <set>
#include <climits>
#include <map>
#include <algorithm>
#include <cmath>
#include <utility>
#include <string>
#include <cstring>
#include <deque>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define ull unsigned long long int
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
string minWindow(string s, string t)
{
  string ans ;
  int start=0,end=0;  // begining and end of window
  map<char,int>m;    // stores frequencies
  for(int i=0; i<t.length(); i++) ++m[t[i]] ;
  int ctr=m.size(); // it keeps track of all the chars are present in window
  int minsize=INT_MAX;
  if(s==t) return s;
  if(s.length() < t.length())
  return "" ;
  while(end<s.length())
  {
    //--------- When some neccessary characters are not in window -----------
    if(ctr>0)
    {
      if(m.find(s[end]) != m.end())
      {
        m[s[end]]-- ;
        if(m[s[end]]==0)
        ctr-- ;

      }
      end++;
    }

    //------------ try shorten the size of window --------------
    while(ctr==0)
    {
          if(ctr==0)
          if((end-start)<minsize)
            minsize=end-start , ans=s.substr(start, minsize);
          if(m.find(s[start])==m.end() )
          {
            start++;

          }
          else
          {
            ++m[s[start]] ;

            if(m[s[start]]>0 )
              ctr++;

            start++;
          }
    }

  }

  return ans;
}
int main() {

  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  //Minimum number of swaps required to sort an array
  string s,t;
  cin>>s>>t;
  cout<<minWindow(s,t);
  return 0 ;
  }
