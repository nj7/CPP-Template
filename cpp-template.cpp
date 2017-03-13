/*This Template is created by Nirmit Jain (github@nj7)*/

//Best header file for competitive programming
#include<bits/stdc++.h>

//Macro for Data Type
#define lli long long int
#define llu unsigned long long int
#define ld long double

//Macro for scanning basic input
#define si(n) scanf("%d",&n)
#define slli(n) scanf("%lld",&n);
#define ss(n) scanf("%s",n);
using namespace std;

//Print loop for array element in new line
void print(int a[],int s,int e){for(int i=s;i<=e;i++)cout<<a[i]<<"\n";}
void print(vector<int> &v,int s,int e){for(int i=s;i<=e;i++)cout<<v[i]<<"\n";}
//this for loop only works with c++11 and higher
void print(vector<int> &v){for(int x:v)cout<<x<<"\n";}



int main()
{
    //for taking input from "input.txt" and storing the output to "output.txt".
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
return 0;
}
