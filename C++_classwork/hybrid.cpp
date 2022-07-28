#include<iostream>
using namespace std;
class roll_id
{
	protected:
		int roll_no;
	public:
		void getid(int id)
			{
				roll_no = id;
			}
		void showid()
			{
				cout<<"Roll No. :"<<roll_no;
			}
};

class marks: public roll_id
{
	protected:
		int sub1,sub2;
	public:
		void getmarks(int s1,int s2)
		{
			sub1 =s1;
			sub2 =s2;
		}
		void showmarks()
		{
			cout<<"Subject 1 marks :"<<sub1;
			cout<<"Subject 2 marks :"<<sub2;			
		}
		
};
class extramarks
{
	protected:
		int sp;
		public:
			void getsp(int s)
			{
				sp=s;
			}
			void showsp()
			{
				cout<<"Sports marks :"<<sp;
			}
		
};

class result: public marks, public extramarks
{
	protected:
		int total;
		public:
			void display()
			{
				total = sub1+sub2+sp;
				showid();
				showmarks();
				showsp();
				cout<<"Total marks :"<<total;
			}
};
int main()
{
	result r;
	r.getid(10);
	r.getmarks(80,90);
	r.getsp(80);
	r.display();
	
	
	return 0;
}