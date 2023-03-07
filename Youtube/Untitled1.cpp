#include<iostream>
using namespace std;
int main()
{
 int rem,blk,ben,lft;
 float a,b,c;
  cin>>a>>b>>c;
  
  ben=b*(a/100);
  cout<<ben;
  rem=a-ben;
  blk=c*(rem/100);
  lft=rem-blk;
  cout<<ben<<endl<<blk<<endl<<lft;
}
