#include <iostream>
using namespace std;
int main()
{
//program to check eligibility of a person for voting.
int age;
cout<<"Enter your age:   "<<endl;
cin>>age;
if (age>18)
{
cout<<"You are eligible for voting.\n ";
}
else if (age==18)
{
cout<<"Congratulations you are eligible for voting this year ";
}
else
{
cout<<"You are not eligible for voting";
}
	return 0;
}
