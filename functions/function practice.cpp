#include<iostream>
using namespace std;

void addition();




 int main(){
 
 
 addition();
  
}

void addition(){
	
	for (int k=1; k<=100; k++ )	{
	  string cls;
	  int x;
	  cout<<"enter your number :";
	  cin>>x;
	  int b;
	  cout<<"enter your number :";
	  cin>>b;
	  float total;
	  cout<<" :  select one from this:  [ +   -  x  /  ]  : \t";
	  string point;
	  cin>>point;
	  
	  if (point=="+"){
	  	total=+x+b;
	  	
	  }else if(point=="-"){
	  	total=+x-b;
	  	
	  } else if (point=="x"){
	  	total=+x*b;
	  	
	  }else if(point=="/"){
	  	total=+x+b;
	  } 
	  
	 
	  cout<<endl<<"total :"<<total<<endl<<endl;
	  
	  cout<<"do you want calculator again  :";
	  cin>>cls;
	  
	  if (cls=="yes"){
	  	system("CLS");
	  	  
	  	 }else if (cls=="no"){
	  		break;
		  }  
	 
	 
	  }
	 
	
}




