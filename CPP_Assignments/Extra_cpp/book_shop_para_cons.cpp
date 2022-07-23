#include<iostream>
using namespace std;
class Book_shop
{
	public:
	string n_author,n_title,n_publisher;
	int price;
	Book_shop(string n_author,string n_title,string n_publisher,int price)
	{
		this->n_author=n_author;
		this->n_title=n_title;
		this->n_publisher=n_publisher;
		this->price=price;
	}
	void display()
	{
		cout<<"====Book Shop===="<<endl;
		cout<<"=====Details of Book===="<<endl;
		cout<<"Name of author : "<<n_author<<endl;
		cout<<"Title of book : "<<n_title<<endl;
		cout<<"Publisher name : "<<n_publisher<<endl;
		cout<<"Price of book : "<<price<<endl;	
	}
};
int main()
{
	Book_shop b("Shiv Khera","YOU CAN WIN","Bloom Burry India",199);
	b.display();
	return 0;	
}