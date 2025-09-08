#include<iostream>
using namespace std;
//void addition();
double multiplication(int num1,int num2);
void printNumber(int number);
string sayHello();
void findstar();
int main(){
	
	double result;
	result=multiplication(10,10);
	printNumber(result);
	string hello;
	hello=sayHello();
	cout<<hello;
	
//	return_type function_name(parameters...){function_body}
//	void function_name(parameters...){function_body}
//	have_return_type function_name(){}
//	no_return_type function_name(no_parameters){};
	
	}


string sayHello(){
	return "Hi there";
}


double multiplication(int num1,int num2){
  double result=num1*num2;
  return result;
  }
  
  void printNumber(int number){
  	cout<<number;
  }

//void findstar(){
//
//
//	
//}

 
//void addition(){
//	
//	for (int k=1; k<=100; k++ )	{
//	  string cls;
//	  int x;
//	  cout<<"enter your number :";
//	  cin>>x;
//	  int b;
//	  cout<<"enter your number :";
//	  cin>>b;
//	  float total;
//	  cout<<" :  select one from this:  [ +   -  x  /  ]  : \t";
//	  string point;
//	  cin>>point;
//	  
//	  if (point=="+"){
//	  	total=+x+b;
//	  	
//	  }else if(point=="-"){
//	  	total=+x-b;
//	  	
//	  } else if (point=="x"){
//	  	total=+x*b;
//	  	
//	  }else if(point=="/"){
//	  	total=+x+b;
//	  } 
//	  
//	 
//	  cout<<endl<<"total :"<<total<<endl<<endl;
//	  
//	  cout<<"do you want calculator again  :";
//	  cin>>cls;
//	  
//	  if (cls=="yes"){
//	  	system("CLS");
//	  	  
//	  	 }else if (cls=="no"){
//	  		break;
//		  }  
//	 
//	 
//	  }
//	 
//	
//}
//



