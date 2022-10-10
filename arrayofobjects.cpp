#include<iostream>

using namespace std;
class employee
{
	char name[30];
	float age;
	public:
	void getdata(void);
	void putdata(void);
};
void employee :: getdata(void)
{
    cout<<"enter name: ";
	cin>> name;
	cout<<"enter age: ";
	cin>>age;
}
void employee::putdata(void)
{
	cout<<"Name:"<<name<<"\n";
	cout<<"Age:"<<age<<"\n";
}
const int size=3;
int main()
{
	employee manager[size];
	for(int i=0;i<size;i++)
	{
		cout<<"\nDetails of manager"<<i+1<<"\n";
		manager[i].getdata();
	}
	cout<<"\n";
	for(int i=0;i<size;i++)
	{
		cout<<"\nManager"<<i+1<<"\n";
		manager[i].putdata(); 
	}
	return 0;
}
/*Output:
Details of manager1
enter name: Hari
enter age: 18

Details of manager2
enter name: preetam
enter age: 20

Details of manager3
enter name: hari
enter age: 18


Manager1
Name:Hari
Age:18

Manager2
Name:preetam
Age:20

Manager3
Name:Hari
Age:18*/
