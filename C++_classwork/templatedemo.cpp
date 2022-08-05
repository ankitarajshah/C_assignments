#include<iostream>
using namespace std;

template <typename T>
T add(T a, T b)
{
	return a+b;
}

int main()
{
	cout<<add<int>(10,20);
	cout<<endl<<add<float>(1.4f,2.3f);
	return 0;
}