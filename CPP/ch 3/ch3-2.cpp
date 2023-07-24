#include<iostream>
using namespace std;

class hotel

{
	
	private:
		int id;
		string name;
		string hoteltype;
	    int rating;
	    static string city;
	    int establishyear;
	    int staffquantity;
	    int roomquantity;
	    
	    public:
	    	void setData()
	    	{
			
	    	cout<<" id: ";
	    	cin >>id;
	    	
	    	cout<<" name:  ";
	    	cin >>name;
	    	
	    	cout<<" hotel type: ";
	    	cin >>hoteltype;
	    	
	    	cout<<" rating: ";
	    	cin >>rating;
	    	
	    	cout<<" city: ";
	    	cin >>city;
	    	
	    	cout<<" establishyear:";
	    	cin >>establishyear;
	    	
	    	cout<<"staffquantity:";
	    	cin >>staffquantity;
	    	
	    	cout<<" roomquantity: ";
	    	cin >>roomquantity;
	   }    
	   void getData()
	   {
	   	cout<<"id:\t\t"<<id<<endl
	   		<<"name:\t\t"<<name<<endl
		   	<<"hoteltype:\t\t"<<hoteltype<<endl
		   	<<"rating:\t\t "<<rating <<endl
		   	<<"city:\t\t "<<city <<endl
		   	<<"establishyear:\t\t"<<establishyear<<endl
		   	<<"staffquantity:\t\t"<<staffquantity<<endl
		   	<<"roomquantity:\t\t"<<roomquantity<<endl;
	   }
	   void detdatintabel()
	   {
	   	cout <<id <<"\t"<<name <<"\t"<< hoteltype <<"\t" <<rating<<"\t" << city << "\t" <<establishyear<<"\t"<<staffquantity<<"\t"<<roomquantity<<endl;
	   }
};
string hotel ::city="surat";

int main()
{
	hotel s[5];
	int n;
	cout<<"enter of hotel :";
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		s[i].setData();
	}
	for(int i=0;i<n;i++)
	{
		s[i].detdatintabel();
	}
}
