#include<iostream>
using namespace std;
class Book_shop
{
	public:
	string n_author,n_title,n_publisher;
	int price;
	void assign()
	{
		cout<<"Book Shop."<<endl;
		cout<<"Enter the name of author : ";
		cin>>n_author;
		cout<<"Enter the title of book : ";
		cin>>n_title;
		cout<<"Enter the publisher name : ";
		cin>>n_publisher;
		cout<<"Enter the price of book : ";
		cin>>price;
	}
	void display()
	{
		cout<<"====Book Shop===="<<endl;
		cout<<"Name of author : "<<n_author<<endl;
		cout<<"Title of book : "<<n_title<<endl;
		cout<<"Publisher name : "<<n_publisher<<endl;
		cout<<"Price of book : "<<price<<endl;	
	}	
};
int main()
{
	Book_shop b;
	b.assign();
	b.display(); 
	return 0;	
}