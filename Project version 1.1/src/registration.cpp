#include<registration.h>
using namespace std;

std::mutex m1;
std::mutex m2;
std::mutex m3;
std::mutex m4;
std::mutex m5;
std::mutex m6;
std::mutex m7;

class registration::void flights()
		{
			string flightN[]={"USA","Canada","london","Itly","Russia","Europe"};
			m1.lock();
		    for(int a=0;a<6;a++)
			{
				cout<<(a+1)<<".flight to"<<flightN[a]<<endl;
				
			}
			m1.unlock();
			cout<<"\nWelcome to the Airlines!"<<endl;
			cout<<"press their number of the country of which you want to book the flight:";
			cin>>choice;
			switch(choice)
			{ 
			    m2.lock();
				case 1:
				{
					cout<<"            Welcome to USA Airline         \n"<<endl;
					cout<<"Following are the flights \n"<<endl;
					cout<<"1.USA - 379"<<endl;
					cout<<"\t5-11-2022 8:00AM  10hrs Rs.30000  "<<endl;
					cout<<"1.USA - 396"<<endl;
					cout<<"\t6-11-2022 2:30AM 12hrs Rs.25000  "<<endl;
					cout<<"1.USA - 450"<<endl;
					cout<<"\t6-11-2022 7:00PM 14hrs Rs.20000  "<<endl;
					
					cout<<"\nSelect the flight:";
					cin>>choice1;
					
					
					if(choice1==1)
					{
						charges=30000;
					    cout<<"\n Booked the flight USA - 379"<<endl;
					}
					
					else if(choice1==2)
					{
						charges=25000;
						cout<<"\n Booked the flight USA - 396"<<endl;
				    }
				    else if(choice1==3)
				    {
						charges=20000;
						cout<<"\n Booked the flight USA - 450"<<endl;
				    }
				    else
				    {
				    	cout<<"Invalid input"<<endl;
				    	flights();
					}
					cout<<"Press any key to go back to the Main Menu"<<endl;
					cin>>back;
					m2.unlock();
					
					
					try
					{
					if(back==1)
					{
						mainMenu();
					}
					else
					{
						mainMenu();
					}
					}
					catch (...) {
						// Display a that exception has occurred
		                cout << "Exception occurred" << endl;
	                }
				}
						
					
		    m3.lock();
			case 2:
				{
				    cout<<"            Welcome to Canada Airline         \n"<<endl;
					cout<<"Following are the flights \n"<<endl;
					cout<<"1.Canada - 349"<<endl;
					cout<<"\t|5-11-2022||8:00PM ||11hrs ||Rs.14000 ||230 |"<<endl;
					cout<<"1.Canada - 596"<<endl;
					cout<<"\t|6-11-2022||2:30AM ||13hrs ||Rs.12500 ||200 |"<<endl;
					cout<<"1.Canada - 480"<<endl;
					cout<<"\t|6-11-2022||7:00AM ||15hrs ||Rs.8500 ||230 |"<<endl;
					
					cout<<"\nSelect the flight:";
					cin>>choice1;
					
					if(choice1==1)
					{
						charges=14000;
						cout<<"\n Booked the flight Canada - 349"<<endl;
						
					}
					else if(choice1==2)
					{
						charges=12500;
						cout<<"\n Booked the flight Canada - 596"<<endl;
				    }
				    else if(choice1==3)
				    {
						charges=8500;
						cout<<"\n Booked the flight Canada - 480"<<endl;
				    }
				    else
				    {
				    	cout<<"Invalid input"<<endl;
				    	flights();
					}
					cout<<"Press any key to go back to the Main Menu"<<endl;
					cin>>back;
					
					if(back==1)
					{
						mainMenu();
					}
					else
					{
						mainMenu();
					}
					m3.unlock();
	    	    }
			m4.lock();
			case 3:
				{
				
				    cout<<"            Welcome to London Airline         \n"<<endl;
					cout<<"Following are the flights \n"<<endl;
					cout<<"1.London - 679"<<endl;
					cout<<"\t|5-11-2022||7:00AM ||10hrs ||Rs.40000 ||230 |"<<endl;
					cout<<"1.London - 395"<<endl;
					cout<<"\t|6-11-2022||12:30AM ||12hrs ||Rs.32000 ||200 |"<<endl;
					cout<<"1.London - 490"<<endl;
					cout<<"\t|6-11-2022||7:00PM ||14hrs ||Rs.29000 ||230 |"<<endl;
					
					cout<<"\nSelect the flight:";
					cin>>choice1;
					if(choice1==1)
					{
						charges=40000;
						cout<<"\n Booked the flight London - 679"<<endl;
						
					}
					else if(choice1==2)
					{
						charges=32000;
						cout<<"\n Booked the flight London - 395"<<endl;
				    }
				    else if(choice1==3)
				    {
						charges=29000;
						cout<<"\n Booked the flight London - 490"<<endl;
				    }
				    else
				    {
				    	cout<<"Invalid input"<<endl;
				    	flights();
					}
					cout<<"Press any key to go back to the Main Menu"<<endl;
					cin>>back;
					
					if(back==1)
					{
						mainMenu();
					}
					else
					{
						mainMenu();
					}
					m4.unlock();
					
						
			    }
				m5.lock();
			case 4:
				{
				    cout<<"            Welcome to Itly Airline         \n"<<endl;
					cout<<"Following are the flights \n"<<endl;
					cout<<"1.Itly - 373"<<endl;
					cout<<"\t|5-11-2022||8:00PM ||10hrs ||Rs.13000 ||230 |"<<endl;
					cout<<"1.Itly - 796"<<endl;
					cout<<"\t|6-11-2022||12:30AM ||12hrs ||Rs.11000 ||200 |"<<endl;
					cout<<"1.Itly - 456"<<endl;
					cout<<"\t|6-11-2022||7:00PM ||14hrs ||Rs.8000 ||230 |"<<endl;
					
					cout<<"\nSelect the flight:";
					cin>>choice1;
					if(choice1==1)
					{
						charges=13000;
						cout<<"\n Booked the flight Itly - 373"<<endl;
						
					}
					else if(choice1==2)
					{
						charges=11000;
						cout<<"\n Booked the flight Itly - 796"<<endl;
				    }
				    else if(choice1==3)
				    {
						charges=9000;
						cout<<"\n Booked the flight Itly - 456"<<endl;
				    }
				    else
				    {
				    	cout<<"Invalid input"<<endl;
				    	flights();
					}
					cout<<"Press any key to go back to the Main Menu"<<endl;
					cin>>back;
					
					if(back==1)
					{
						mainMenu();
					}
					else
					{
						mainMenu();
					}
					m5.unlock();
					
					
				}
				m6.lock();
			case 5:
				{
				    cout<<"            Welcome to Russia Airline         \n"<<endl;
					cout<<"Following are the flights \n"<<endl;
					cout<<"1.Russia - 309"<<endl;
					cout<<"\t|5-11-2022||6:00AM ||10hrs ||Rs.22000 ||230 |"<<endl;
					cout<<"1.Russia - 390"<<endl;
					cout<<"\t|6-11-2022||2:50PM ||12hrs ||Rs.20000 ||200 |"<<endl;
					cout<<"1.Russia - 459"<<endl;
					cout<<"\t|6-11-2022||7:00AM ||14hrs ||Rs.18000 ||230 |"<<endl;
					
					cout<<"\nSelect the flight:";
					cin>>choice1;
					if(choice1==1)
					{
						charges=22000;
						cout<<"\n Booked the flight Russia - 309"<<endl;
						
					}
					else if(choice1==2)
					{
						charges=20000;
						cout<<"\n Booked the flight Russia - 390"<<endl;
				    }
				    else if(choice1==3)
				    {
						charges=18000;
						cout<<"\n Booked the flight Russia - 459"<<endl;
				    }
				    else
				    {
				    	cout<<"Invalid input"<<endl;
				    	flights();
					}
					cout<<"Press any key to go back to the Main Menu"<<endl;
					cin>>back;
					
					if(back==1)
					{
						mainMenu();
					}
					else
					{
						mainMenu();
					}
					m6.unlock();
					
				}
				m7.lock();
			case 6:
				{
				    cout<<"            Welcome to Europe Airline         \n"<<endl;
					cout<<"Following are the flights \n"<<endl;
					cout<<"1.Europe - 409"<<endl;
					cout<<"\t|5-11-2022||6:00AM ||10hrs ||Rs.32000 ||230 |"<<endl;
					cout<<"1.Europe - 310"<<endl;
					cout<<"\t|6-11-2022||2:50PM ||12hrs ||Rs.29000 ||200 |"<<endl;
					cout<<"1.Europe - 159"<<endl;
					cout<<"\t|6-11-2022||7:00AM ||14hrs ||Rs.23000 ||230 |"<<endl;
					
					cout<<"\nSelect the flight:";
					cin>>choice1;
					if(choice1==1)
					{
						charges=32000;
						cout<<"\n Booked the flight Europe - 409"<<endl;
						
					}
					else if(choice1==2)
					{
						charges=29000;
						cout<<"\n Booked the flight Europe - 310"<<endl;
				    }
				    else if(choice1==3)
				    {
						charges=23000;
						cout<<"\n Booked the flight Europe - 159"<<endl;
				    }
				    else
				    {
				    	cout<<"Invalid input"<<endl;
				    	flights();
					}
					cout<<"Press any key to go back to the Main Menu"<<endl;
					cin>>back;
					
					if(back==1)
					{
						mainMenu();
					}
					else
					{
						mainMenu();
					}
					m7.unlock();
					
				}
			    	
			    default:
				    {
					    cout<<"Invalid input,shifting to main menu "<<endl;
					    mainMenu();
					    break;
				    }
				
		    }
        }
};
