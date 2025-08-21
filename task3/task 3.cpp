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
	

   float totalm= english+science+history;
    
   

    cout <<"\n\n\n your name is     \t    "<<name<< endl; 
	cout <<"\n your father name is  \t    "<<fname<< endl; 
	cout <<"\n your total marks :   \t    "<<totalm<<endl;
	if (totalm>=95&&totalm<=100){cout<<"\n congratulation  you  got *:+A:* position \n";
	
	}else if (totalm>=90&&totalm<=94){cout<<" \n you  got *:A:* position \n";
      
    }else if (totalm>=80&&totalm<=89){cout<<" \n you  got *:B:* position \n";
	
	}else if (totalm>=65&&totalm<=79){cout<<" \n you  got *:c:* position \n";
	
	}else if (totalm>=55&&totalm<=64){cout<<" \n you  got *:d:* position \n";
	
	}else if (totalm>55){cout<<" fail";
	
	}if else cout<<
     
     
    
	
	

}


