#include <iostream>
using namespace std;

int main() {
	
	
	
	int n;
	cin>>n;
	while(n--)
	{
	    
	    int x,y;
	    cin>>x>>y;
	    int array[x];
	    int eliminate=0;
	    
	    for(int i=0;i<x;i++)
	    {
	       cin>>array[i];
	       if(array[i]>y)
	       {
	          eliminate++; 
	       }
	    }
	    cout<<eliminate<<endl;
	}
	return 0;
}
