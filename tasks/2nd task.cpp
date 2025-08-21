#include<iostream>
using namespace std;

int main(){
	
	
	string bus;
	string weather;
	string museumdoor;
	
	
	
 	cout<<"enter are buses available: yes/no:\t";
	cin>>bus;
	cout<<"enter how is the weather today: sunny/stormy\t" ;
	cin>>weather;
	cout<<"enter museumdoor: open/locked :\t";
	cin>>museumdoor;
	
	
if(bus=="yes"){cout<<"lets go on trip\n"; 
	
}else if (bus=="no"){cout<<"sorry we cant go on trip now there is no bus avalibale\n";

} else if (museumdoor=="open"){cout<<"lets go on trip\n";

}else if (museumdoor=="locked"){cout<<"sorry we cant go museum door in closed trip\n";

}else if (weather=="sunny"){cout<<"lets go on trip\n"; 

} else {cout<<"sorry we cant go weathe is not good for trip\n";

}


	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
