#include <iostream>

using namespace std;

int main()
{
int N;//設定一個變數 
cin>>N;
  if(N%4!=0)//如果達成N%4!=0 這個條件 
cout<<"NO";//則輸出NO 
if(N%4==0&&N%100!=0)//如果達成N%4==0&&N%100!=0 
cout<<"YES";//則輸出YES 
if(N%100==0&&N%400!=0)
cout<<"NO";
if(N%400==0)
cout<<"YES";
}
