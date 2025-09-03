#include<iostream>
using namespace std;

 int main(){



  int nu;
cout <<"enter your number for array  :";
cin>>nu;
int even=0;
int odd=0;
int arr[nu];

  for (int a=0; a<nu; a++){
  	cout <<"enter your number :";
  	cin>>arr[a];
  	}
  	
  	for (int a=0; a<nu; a++){
  		
  		if(a%2==0){
		  	even=even+arr[a];
  			cout<<"This is your even number :"<<arr[a]<<endl;
		  }else {
		  	odd+=arr[a];
		  	cout<<"This is your odd number :"<<arr[a]<<endl;
		  	
		  
		  }
  	
  }
  cout<<"sum of even: "<<even<<endl;
  cout<<"sum of odd: "<<odd;
  		
  		
  		
  	}
  	
