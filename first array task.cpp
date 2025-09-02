
#include<iostream>
using namespace std;

main(){





    cout << "Enter size of the array: ";
    int n; 
    cin >> n;

    int array[n];  

    for(int a = 0; a < n; a++) {
        cout << "Enter your number ";cout<<a+1;cout<<":"<<endl;
        cin >> array[a];
    }	
//	0   1  2  3  4
//    11 22 33 44 55 
    for(int a = 0; a < n / 2; a++) {
        int temp = array[a];
        array[a] = array[n - a - 1];   
        array[n - a - 1] = temp;
    }	
cout << "\n";
    
    cout << "Replace array: ";
    for(int a = 0; a < n; a++) {
        cout << array[a] << " ";
    }
    cout << "\n";
    
	}
	
	
