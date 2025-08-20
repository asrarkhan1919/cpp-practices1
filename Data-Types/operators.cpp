#include<iostream>
using namespace std;

// arithmatic operators  e.i: +,-,*, /, %  completed
// logical operatos e.i: &&, ||, !
// increament or decreament  or unary operator i.e: --,++
// comparison operator e.i: >, <, ==, <=, >=, !=


main(){
//	string name = "asrar";
//	string pos = "askar";
//	string fname = "khan";
//	int salary = 1000;
//	int tax = 100;
//	
	// logical operator
	
//				false							false
//	if((name=="asrar" && salary==1000 || tax>10) && fname=="khan"){
//		cout<<"You are a soldir";
//	}


	
	// comparison operators
	string name1 = "irfan";
	string pro1 = "kabul";
	int salary1 = 5000;
	
	string name2 = "asrar";
	string pro2 = "logar";
	int salary2 = 10000;
	
	
	string name3 = "khan";
	string pro3 = "paktia";
	int salary3 = 7000;
	
	int search;
	
	cout<<"Search person by salary: ";
	cin>>search;
	
	if(search >=4999&& search >=5000 && search <=6999){
		cout<<"______________ all people ______________________"<<endl;
		cout<<"person 1"<<endl;	
		cout<<"name: "<<name1<<endl;
		cout<<"salary: "<<salary1<<endl;
		cout<<"province: "<<pro1<<endl<<endl;
}else if (search>=7000 && search <=9999){

		cout<<"person 3"<<endl;	
		cout<<"name: "<<name3<<endl;
		cout<<"salary: "<<salary3<<endl;
		cout<<"province: "<<pro3<<endl<<endl;
		
}else if (search>=10000 && search <=11000)	{
	
		cout<<"person 2"<<endl;	
		cout<<"name: "<<name2<<endl;
		cout<<"salary: "<<salary2<<endl;
		cout<<"province: "<<pro2<<endl<<endl;
		
}else  {
	
	    cout<<"sorry your salary is out of our range";
}
		
	
	
	
	
	
	
	
	
}
