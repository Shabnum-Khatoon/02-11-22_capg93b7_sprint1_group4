#include<iostream>
#include<fstream>
#include<iomanip>
#include <stdexcept> 
using namespace std;
void mainMenu()

{
	int lchoice;
	int schoice;
	int back;
	cout<<"\t      Spicejet Airlines\n"<<endl;
	cout<<"\t      Main Menu            "<<endl;
	cout<<"                                   "<<endl;
	cout<<"\t|\t\t\t\t\t|"<< endl;
	
	cout<<"\t\t Press 1 to add the Customer Details \t"<<endl;
	cout<<"\t\t Press 2 for Flight Registration  \t"<<endl;
	cout<<"\t\t Press 3 for TicketBooking and Charges \t"<<endl;
	cout<<"\t\t press 4 to exit                \t"<<endl;
	cout<<"\t\t\t\t\t\t\t|"<<endl;
	cout<<"                                     "<<endl;
	
	cout<< "enter your choice : ";
	cin>>lchoice;
	
	
	Details d;
	registration r;
	ticket t;
	
	switch(lchoice)
	{
		case 1:
			{
				cout<<"    customers       \n"<<endl;
				d.information();
				cout<<"press any key to go back to Main Menu";
				cin>> back;
				
				if(back==1)
				{
					mainMenu();
				    }   
				    else
				    {
				 	mainMenu();
				    }
				    break;
			    }
		case 2:
			{
			    cout<<"    Book a flight using this system   \n"<<endl;
			    r.flights();
			    break;
			    		
			}
		case 3:
			{
		    	cout<<"   GET YOUR TICKET   \n"<<endl;
				t.Bill();
				
				
				cout<<"Your ticket is printed, you can collect it \n"<<endl;
		    	cout<<"press 1 to display your ticket";
		    	cin>>back;
		    	if(back==1)
		    	{
				    t.dispBill();
				    cout<<"press any key to go back to main menu";
					cin>>back;
				    if(back==1)
				    	{
				    		mainMenu();
				    	}
				    else
				    	{
				    	   	mainMenu();
						}
							
						}
				else
				{
					mainMenu();
					break;
				}
		    }
		case 4:
			{
				cout<<"\n\n\t    thank-you    "<<endl;
				break;
			}
		default:
			{
				cout<<"Invalid input,try again\n"<<endl;	
			    mainMenu();
			    break;
			}
					
	
			
	}
	
}

