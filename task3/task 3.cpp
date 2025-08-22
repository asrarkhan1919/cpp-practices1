#include<iostream>
using namespace std;
 int main(){
	
	string name;
	string fname;
	float  english;
	float  science;
	float  history;


    cout<<"                  enter your name          :";
    cin>> name;
    cout<<"           enter your father name          :";
	cin>> fname;
	cout<<"  enter your english subjet marks           :";
	cin>>english;
	cout<<"      enter science subject marks          :";
	cin>> science;
	cout<<"enter youer history subject marks          :";
	cin >>history;
	

   int totalm= english+science+history;
   float avg = totalm / 3;
    
   

    cout <<"\n\n\n your name is     \t    "<<name<< endl; 
	cout <<"\n your father name is  \t    "<<fname<< endl; 
	cout <<"\n your total marks :   \t    "<<totalm<<endl; 
	cout <<"\n your average marks :   \t    "<<avg<<endl;
	
	if (totalm>=95&&totalm<=100){cout<<"\n congratulation  you  got *:+A:* position \n";
	
	}else if (avg>=90&&avg<=94){cout<<" \n you  got *:A:* position \n";
      
    }else if (avg>=80&&avg<=89){cout<<" \n you  got *:B:* position \n";
	
	}else if (avg>=65&&avg<=79){cout<<" \n you  got *:c:* position \n";
	
	}else if (avg>=55&&avg<=64){cout<<" \n you  got *:d:* position \n";
	
	}else if (avg<55){
	cout<<" failed";
	
	}
     
     
    
	
	

}


