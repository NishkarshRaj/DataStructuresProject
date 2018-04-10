#include<iostream>
using namespace std;
class student
{
	public:
string rollno;
string sapid;
string name;
student()
{
rollno="R171217041";
sapid="500060720";
name="Nishkarsh Raj Khare";	
}	
void insert()
{
	cout<<"Enter the name of the person"<<endl;
	getline(cin,name);
	cout<<"Enter the sapid of the student"<<endl;
	cin>>sapid;
	cout<<"Enter the rollno of the student"<<endl;
	cin>>rollno;
}
void show()
{
	cout<<"Name of the student is :"<<name<<endl;
	cout<<"Roll Number of the student is :"<<rollno<<endl;
	cout<<"Sapid of the student is :"<<sapid<<endl;
}
};
int main()
{
	cout<<"Hello! This is a code of Linked List on Student's Data"<<endl;
	//Creation of first node
	student *node,*ptr,*p,*start;
	node=new student;
	cout<<"Lets insert the first node data"<<endl;
	node->insert();
	cout<<"Lets see the details of first node"<<endl;
	node->show();
	return 0;
}
