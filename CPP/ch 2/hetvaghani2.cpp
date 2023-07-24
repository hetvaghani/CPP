#include<iostream>
using namespace std;

class employ
{
	private:
		int id;
		string name;
			string email;
				int salary;
					string role;
						int age ;
							string city;
								string work;

public:
	void input()
	{
		cout <<  "id\t";
		cin >> id;
		cout <<  "name\t";
		cin >> name;
		cout <<  "email\t";
		cin >> email;
		cout <<  "salary\t";
		cin >> salary;
		cout <<  "role\t";
		cin >> role;
		cout <<  "age\t";
		cin >> age;
		cout <<  "city\t";
		cin >> city;
		cout <<  "work\t";
		cin >> work;
		
		
	}
				void output()
				
				{
					cout << "id"<<id<<endl;
					cout << "name"<<name<<endl; 
					cout << "email" <<email<<endl;
					cout << "salary"<<salary<<endl;
					cout << "role"<<role<<endl ;
					cout << "age"<<age<<endl;
					cout << "city"<<city<<endl ;
					cout << "work"<<work<<endl ;
			   }
};
					
int main()
{
	employ A ;
	A.input();
	A.output();
}
	


					
					
					
					
					
					
					
					
					
					
					
					
					
													
