/*

https://practice.geeksforgeeks.org/problems/is-binary-number-multiple-of-3/0/?ref=self

*/

#include<bits/stdc++.h>
using namespace std;
int n;
string s;

int main()
{
    int t,i;
    cin>>t;
    while(--t>=0)
    {
        cin>>s;
        int cnt_at_oddPosition = 0, cnt_at_evenPosition=0;
        for(int j= 0 ; j<s.length(); j++)
        {
            if(s[j]=='1'  && j&1 ) cnt_at_oddPosition++;
            else if(s[j]=='1' && j%2==0)
            cnt_at_evenPosition++;
        }
        if(abs(cnt_at_evenPosition - cnt_at_oddPosition)%3==0){
            cout<<1<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
}

/*
every pow(2,x) can be written as 3*k+1(if even place) or 3*k-1(if odd place).
Write down a few numbers and you'll see the pattern.
so now for this binary number to be divisible by 3 you just have to count the set bits and even place and set bits at odd place since every number is 3k+1 or 3k-1 so only these -1 and +1 will decide whether the number will be divisible by 3 or not.
*/
