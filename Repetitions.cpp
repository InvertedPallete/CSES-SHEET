//  
// 
//  Codeforces Round 950
//      
//  07/06/2024
//
//  Code By Gunjit
//
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i,n) for(int i=0; i<n; i++)

void solve()
{  
   string s;
   cin >>s;

   int max_len = 0;
   int temp_len = 0;
   int n = s.length();
   for(int i = 0; i < n-1; i++)
   {
       if(s[i] == s[i+1])
       {    
            temp_len++;
            while(s[i] == s[i+1])
            {
                temp_len++;
                i++;
            }
            max_len = max(max_len, temp_len);
            temp_len = 0;
       }
   }
   cout << max(max_len, 1)<< endl;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    // int t;
    // cin >> t;

//     while(t--)
//     {
//        solve();
//     }
// }
    solve();
}


/*
    // think of greedy algorithm first, Codeforces A,B are usually some sort of greedy and simple 800 - 900 rating
    // C on Div2 and E on Div 3/4 requirs more thinking but still not too hard
    //for later problems think about data structures like segment tree and ordered set
    // try query problems, not good at them
    // try to improve yourthinking and logic building by not giving up 
    // 
    //
    // Keep Grinding —————————————Jai Shree Ram —————————————
*/