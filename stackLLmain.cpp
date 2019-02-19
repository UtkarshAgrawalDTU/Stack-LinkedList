#include <iostream>
#include"stacklinkedlist.h"
using namespace std;

int main()
{
	Stack <int> s;
	int elem, choice;
	
	do
	{
		
	system("cls");
	cout<<"1. Push"<<endl;
	cout<<"2. Size"<<endl;
	cout<<"3. Top"<<endl;
	cout<<"4. Pop"<<endl;
	cout<<"5. Check Empty"<<endl;
	
	cin>>choice;
	
	switch(choice)
	{
		case 1:  	cin>>elem;
					s.push(elem);
				 	break;
		
		case 2: 	cout<<s.Size();
					break;
					
		case 3: 	cout<<s.top();
					break;
					
		case 4:		s.pop();
					break;
		
		case 5:		bool ans= s.isEmpty();
					cout<< (ans == true ? "true" : "false");
					break;

	}
	
	cout<<"Again?";
	cin>>choice;
	
	}while(choice!=0);
	
}
