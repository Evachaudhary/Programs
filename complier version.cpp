
// Write your code here
#include <bits/stdc++.h>
using namespace std;
int main()
{ char s[68];
while(gets(s)!=NULL)
{
int f=strlen(s);
for(int i=0;i<f;i++)
{
if(i==0)
{
if(s[i]=='/'&&s[i+1]=='/')
break;
}
else
{
if(s[i]=='/'&&s[i-1]=='/')
break;
if(s[i]=='>'&&s[i-1]=='-')
{
s[i-1]='.';
for(int j=i;j<f;j++)
s[j]=s[j+1];
}
}
}
puts(s);
}
return 0;
}
