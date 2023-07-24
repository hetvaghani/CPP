#include<iostream>
using namespace std;

class coustomer 
{
    private:
    	int id ;
    	string name;
    	int age;
    	int  mobile_no;
    	string city;
    	int  sim_card_validity;
    	string brand_name;
    	
    public :
	
	void setdata(int id ,string name,int age,int mobile_no,string city,string sim_card_validity,string brand_name )
	{
		this->id =id;
		this->name=name;
		this->age=age;
		this->mobile_no=mobile_no;
		this->city=city;
		this->sim_card_validity=sim_card_validity;
		this->brand_name =brand_name ;
		
			}
			void getdata()
			{
				cout<<"id\t" <<id<<endl
				    <<"name\t" <<name<<endl
				    <<"age\t" <<age<<endl
				    <<"mobile no\t" <<mobile no<<endl
				    <<"city\t" <<city<<endl
				    <<"sim card validity\t" <<sim card validity<<endl
				    <<"brand name \t" <<brand name <<endl;
			}
};


int main()
{
	student s1,s2,s3,s4,s5;
	
	s1.setdata(int id ,string name,int age,int  mobile no,string city,string sim card validity,string brand name)
	s2.setdata(int id ,string name,int age, int mobile no,string city,string sim card validity,string brand name)
	s3.setdata(int id ,string name,int age,int  mobile no,string city,string sim card validity,string brand name)
	s4.setdata(int id ,string name,int age, int mobile no,string city,string sim card validity,string brand name)
	s5.setdata(int id ,string name,int age, int mobile no,string city,string sim card validity,string brand name)
	
	s1.getdata();
	s2.getdata();
	s3.getdata();
	s4.getdata();
	s5.getdata();
}
    	

    	
    	
