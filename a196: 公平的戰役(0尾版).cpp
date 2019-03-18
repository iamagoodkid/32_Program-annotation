#include <iostream>
using namespace std;
int main() 
{
    int n;
    int A, B;
while(1)
   {                
    cin >> A >> B;
    /* 比較A與B的大小，並輸出大減小的差值  */
    if(A==0&&B==0) break; 
    if(A>B)
    cout<<"A"<<" "<<A-B<<endl;
    if(A<B)
    cout<<"B"<<" "<<B-A<<endl;
    if(A==B)
    cout<<"0"<<endl;
   }
}
