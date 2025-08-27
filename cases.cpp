#include<iostream>
using namespace std;

 int main(){
	

 	
 	int f;         
         
    cout<<"enter your number \n";
	 
	 
	 for (int a=1; a<=10; a++){
	   cin>>f;
	   
	   switch (f){
	   	
	   	case 10 :
	   		cout<<"you can,t buy anything here\n\n";
	   		break;
	   		
	   		case 20 :
	   			cout<<"again you can,t buy anything here\n\n";
	   		    break;
	   		    
	   		    case 30 :
	   		    	cout<<"sorry your money is les then 100 \n\n";
	   		    	break;
	   		    	
	   		    	case 40 :
	   		    		cout<<"you need 60 ropies more to buy somethimg here\n\n";
	   		    		break;
	   		    		
	   		    		case 50 :
	   		    		    cout<<"you need 50 ropies more to buy somethimg here\n\n";
	   		    		    break;
	   		    		    
	   		    		    case 60 :
	   		    		        cout<<"you need 40 ropies more to buy somethimg here\n\n";
	   		    		        break;
	   		    		
	   		    		        case 70 :
	   		    		            cout<<"you need 30 ropies more to buy somethimg here\n\n";
	   		    		            break;
	   		    		            
	   		    		            case 80 :
	   		    		                cout<<"you need 20 ropies more to buy somethimg here\n\n";
	   		    		                break;
	   		    		
	   		    	                    	case 90 :
	   		    		                        cout<<"you need 10 ropies more to buy somethimg here\n\n";
	   		    		                        break;
	   		    		                        
	   		    		                        case 100 :
	   		    	                           	    cout<<"welcom you can buy anything here MR/MRS\n\n";
	   		    	                           	    break;
	   		    		     default:
	   		    		     	cout<<"tray 10+10 for massage \n\n";
	   		    		     	
	   		    		
	   		    		    
	   		    		
	   }
	     
         
        
        if (f==100){break;
		}else if (a<=9) {cout<<"enter your number again\n \n";
		}else {
		cout<<"opps sorry more you dont have chance dont destrube\n\n";}
		}
     }
     
