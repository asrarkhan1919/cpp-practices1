#include<iostream>
using namespace std;

 int main(){



	for(int a=1; a<=5; a++){
		 
		 for(int b=a; b<=5; b++){
		 	cout <<" ";	
		 }
	     for (int c=1; c<=a; c++){
	     	cout <<"* ";
		 }      
		 cout<<endl;
	}
	 
	for(int d=5; d>=1; d--){
		 for(int e=d; e<=5; e++){
		 	
		 	cout <<" ";
		 	
		 }
	     for (int f=1; f<=d; f++){
	     	cout <<"* ";
		 }
		 cout<<"\n";
	}
	 
	 
}





