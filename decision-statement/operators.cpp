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
	
	
//	string name3 = "khan";
//	string pro3 = "paktia";
//	int salary3 = 7000;
//	
//	int search;
//	
//	cout<<"Search person by salary: ";
//	cin>>search;
//	
//	if(search >=4999&& search >=5000 && search <=6999){
//		cout<<"______________ all people ______________________"<<endl;
//		cout<<"person 1"<<endl;	
//		cout<<"name: "<<name1<<endl;
//		cout<<"salary: "<<salary1<<endl;
//		cout<<"province: "<<pro1<<endl<<endl;
//}else if (search>=7000 && search <=9999){
//
//		cout<<"person 3"<<endl;	
//		cout<<"name: "<<name3<<endl;
//		cout<<"salary: "<<salary3<<endl;
//		cout<<"province: "<<pro3<<endl<<endl;
//		
//}else if (search>=10000 && search <=11000)	{
//	
//		cout<<"person 2"<<endl;	
//		cout<<"name: "<<name2<<endl;
//		cout<<"salary: "<<salary2<<endl;
//		cout<<"province: "<<pro2<<endl<<endl;
//		
//}else  {
//	
//	    cout<<"sorry your salary is out of our range";
//}
//		
//	
//	
//	

		
//	ticket=base/100 * per
	
	//if age <12 assign percentage = 50
	//if age>= 65 assing percentage = 30
	// if show time  was before 5 pm then assiign percentage=20%
//	prompt user that you have total $percentage discount and you must pay $ticket_price
 
 
	float ticketprice=100;
	int age;
    float dpercent=0.0;
	float showtime ;

	
	cout<<"\n___enter your age here_____\n";
	cin>>age;
    cout <<"\n___enter your time in hu\n___";
	cin>>showtime;
	
	if (age<=12){dpercent=50;
	
}else if (age>=65){dpercent=30;
//17 is equal 5 pm
}else if (showtime<=17 ){dpercent=20;

}else cout<<"the show ticket is 100";

	
 float totaldiscount=ticketprice/100*dpercent;


  
  float  totalprice=ticketprice-totaldiscount;	  
//}else if (showtime<=5){(total_price-20;)}	  
	  cout<<"\n___ total discount"<< totaldiscount;
     cout<<"\n___ ticket price for you"<< totalprice;
     
     
     
}
