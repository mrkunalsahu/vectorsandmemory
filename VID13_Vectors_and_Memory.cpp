#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector<double> numbers;
//cout<<"Size : "<<numbers.size();
int capacity=numbers.capacity();
//cout<<"\nCapacity : "<<capacity<<endl;
for(int i=0;i<100;++i)
{
	if(numbers.capacity()!=capacity)
	{
		cout<<"Capacity Before : "<<capacity<<" ";
		capacity=numbers.capacity();
		cout<<"Capacity After : "<<capacity<<endl;
	}
	numbers.push_back(i);
    cout<<"i = "<<i<<endl;
}


 numbers.reserve(1000000);
//cout<<numbers.size();
cout<<numbers.capacity();
 return 0;
}