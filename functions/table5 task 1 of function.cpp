#include<iostream>
using namespace std;

//table5(){
//int tab	=5;
//	
//	for (int t=1; t<=10; t++){
//		tab*=t;
//		cout<<t<<"x"<<"5"<<"="<<tab<<endl;
//		 tab=+5;
//		
//	}
//}

//int natural(){
// 
//int sum;
//for(int n=1;  n<=100; n++){
//	
//	sum+=n;
//	
//	 }
//	 return sum;
//	}
//int findMaximumNumber(){
//int large;
//int arr[6]={3,6,2,9,8,1};
// 	large=arr[0];
//
// for(int r=0; r<6; r++){
// 	
// 	if(large<arr[r]){
// 		large=arr[r];
//	 }
// 		
// }
//return large;
//
//}

//string enteryourname(){
//string user="khan";
//string name;
//string login;
//cout<<"enter your user name ";
//cin>>name;
//
//if (name==user){
//	login="succefully loged in";
//	
//}else {login="login not succefully plese tray again";
//
//}	return login;
// 	
//		
//}


//string login(string userName,int password ){
//   
//	string returnMsg;
//	int chpassword=1234;
//	if (userName=="khan"){		
//		if(password==1234){
//			returnMsg="your login is succefully :";
//		}else
//		{returnMsg="your password is in corect :";
//				
//		}
//	}else{
//		returnMsg="your username is in corect :";
//	}
//	return returnMsg;
//}

//void mul(int a ){
//	
//int total;	
// for(int i=1; i<=10; i++ ){
//    total=i*a;
//    cout<<i<<" x"<<a<<" ="<<total<<endl;
//    
//   
//    
// }
//cout<<endl;	
//
//	
//}

//int lar(int a, int b){
//   int large;
//    
//	if (a>b){large=a;
//	 cout<<"a have large num :"<<large;
//	}else {
//		large=b;
//		cout<<"b have large num :"<<large;
//	}	
//	return large;
//}

void clock(int min){
	int hour;
	int  mi;
    hour=min/60;
    mi=min%60;
	cout<<"hour "<<hour<<":"<<mi;	
    
	
}


int main(){
  
clock(200);
}



