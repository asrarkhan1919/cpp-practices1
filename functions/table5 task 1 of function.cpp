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
int findMaximumNumber(){
int large;
int arr[6]={3,6,2,9,8,1};
 	large=arr[0];

 for(int r=0; r<6; r++){
 	
 	if(large<arr[r]){
 		large=arr[r];
	 }
 		
 }
return large;

}
 int main(){
 	
cout<<"this is your largest num :"<<findMaximumNumber();

	

 	
}



