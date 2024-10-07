

#include <iostream>
using namespace std;
int main()
{
  int test;
  cin>>test;
  while(test--){
      
      int n,k;
      cin>>n>>k;
      int poor =0;
      int tgold =0;
      
      for(int i =0 ;i<n;i++){
          
          int x;
          cin>>x;
          if (x==0 && tgold !=0){
              tgold--;
              poor++;
          }
          else if(x>=k){
              tgold = tgold + x;
          }
          
          
      }
      cout<<poor<<endl;
  }
    return 0;
}
