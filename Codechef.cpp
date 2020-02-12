#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
     int i , t;
     cin>>t;
     while(t--)
     {
          int n, p;
          cin>>n>>p;
          vector< int > d(n) , c(n,0);
          for(i=0 ; i<n ;i++){
               cin>>d[i];
          }
          for(i=0 ; i<n ;i++)
          {
               if(p%d[i]!=0){
                    c[i]=p/d[i] + 1;
                    break;
               }
          }
          if(i==n)
          {
               //if all are factor of P
               int s = 0;
               for(i=n-1 ; i>=0 && s <= p ; i--)
               {
                    
                    if((p-s)%d[i]!=0){
                         c[i] = (p - s)/d[i] + 1;
                    }
                    else{
                         c[i] = (p - s)/d[i] - 1;
                    }
                    s+=c[i]*d[i];
               }
               if(i==-1)
               {
                    cout<<"NO\n";
                    for(i=0 ; i<n ; i++){
                         cout<<c[i]<<" ";
                    }
               }
               else{
                    cout<<"YES";
                    for(i=0 ; i<n ; i++)
                    {
                         cout<<" "<<c[i]; 
                    }
                    cout<<endl;
               }
          }
          else{
               cout<<"YES";
               for(i=0 ; i<n ; i++)
               {
                    cout<<" "<<c[i];
               }
               cout<<endl;
          }
     }
}
