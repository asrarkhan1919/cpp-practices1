#include<iostream>
using namespace std;
main(){






	string name[4];
	float marks[4];
	int max = 0;
	int min = 0;

		for(int a=0; a<4; a++){
			cout<<"enter your name   :";
			cin>>name[a];
			cout<<"enter your marks  :";
			cin>>marks[a];
		}
		// 99 66 100 88 78
		max = marks[0];
		min = marks[0];
		
		for(int a=0; a<4; a++){
			cout<<endl<<a<<":- name is     :"<<name[a]<<endl;
			cout<<"total marks     :"<<marks[a]<<"\n\n";
			
			if(marks[a]>max){
				max=marks[a];
			}	
			if(marks[a]<min){
				min = marks[a];
			}
		} 	
		
		
	cout<<"maximum marks  :\t"<<max<<endl;
	cout<<"minimum marks  :\t"<<min<<endl;
	
	
}
