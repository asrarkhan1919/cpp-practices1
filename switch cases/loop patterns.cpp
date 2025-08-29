#include<iostream>
using namespace std;
//			     1
//			    21
//			   321
//			  1234
//			 12345
main(){
	
	
	
	
	for(int i=1;i<=5;i++){
		for(int z=5;z>i;z--){
			cout<<" ";
		}
		for(int x=1;x<=i;x++){
			cout<<x;
		}
		cout<<"\n";
	}
}
