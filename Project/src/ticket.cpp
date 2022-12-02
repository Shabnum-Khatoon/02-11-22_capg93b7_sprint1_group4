#include<ticket.h>
using namespace std;
class ticket: public registration, Details
{
	class ticket::void Bill()
		{
			string destination="";
			ofstream outf("records.txt");
			{
				outf<<"       Spicejet Airlines          "<<endl;
				outf<<"             Ticket               "<<endl;
				
				
				outf<<"Customer ID:"<<Details::cId<<endl;
				outf<<"Customer Name:"<<Details::name<<endl;
				outf<<"Customer Gender:"<<Details::gender<<endl;
				outf<<"\tDestination"<<endl<<endl;
			
			
				if(registration::choice==1)
				{
					destination="USA";
				}
				else if(registration::choice==2)
				{
					destination="Canada";
				}
				else if(registration::choice==3)
				{
					destination="London";
				}
				else if(registration::choice==4)
				{
					destination="Itly";
				}
				else if(registration::choice==5)
				{
					destination="Russia";
				}
				else if(registration::choice==6)
				{
					destination="Europe";
				}
				
				outf<<"Destination\t\t"<<destination<<endl;
				outf<<"flight cost:\t\t"<<registration::charges<<endl;
			}
			outf.close();
		}
     class ticket::void dispBill()
		{
			try
			{
			ifstream ifs("records.txt");
			{
				if(!ifs)
				{
					cout<<"File error!"<<endl;
				}
				while(!ifs.eof())
				{
					ifs.getline(arr,100);
					cout<<arr<<endl;
				}
			}
			ifs.close();
			}
			catch (...) {
						// Display a that exception has occurred
		                cout << "Exception occurred" << endl;
	                }
		
			
		}
};
