
#include<iostream>
using namespace std;

class student
{
	public:
string rollno;
string sapid;
string name;
string specialization; //added to commit 2 to make a better platform
student *next; 
student()
{
rollno="R171217041";
sapid="500060720";
name="Nishkarsh Raj Khare";
specialization="DevOps";
}
void insert()
{
	cout<<"Enter the name of the person"<<endl;
	getline(cin,name);
	cout<<"Enter the sapid of the student"<<endl;
	cin>>sapid;
	cout<<"Enter the rollno of the student"<<endl;
	cin>>rollno;
	cout<<"Enter the Specialization of the student"<<endl;
	cin>>specialization;
}
void show()
{
	cout<<"Name of the student is :"<<name<<endl;
	cout<<"Roll Number of the student is :"<<rollno<<endl;
	cout<<"Sapid of the student is :"<<sapid<<endl;
	cout<<"Specialization of the student is :"<<specialization<<endl;
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
	node->next=NULL;
	cout<<"Lets see the details of first node"<<endl;
	node->show();
	start=node;
	//creation of menu on commit 3
	int quit=0,choice;
	do
	{
	cout<<"\t\t\t\tOption Menu\n\n"<<endl;
	cout<<"1) Insertion at Beginning"<<endl;
	cout<<"2) Insertion at End"<<endl;
	cout<<"3) Insertion at any point"<<endl;
	cout<<"4) Deletion at Beginning"<<endl;
	cout<<"5) Deletion at end"<<endl;
	cout<<"6) Deletion at any point"<<endl;
	cout<<"7) Traversal of nodes"<<endl;
	cout<<"8) Quit"<<endl;
	cout<<"Enter your choice"<<endl;
	cin>>choice;
	switch(choice)
	{
		case 1: cout<<"Insertion at Beginning"<<endl;
                        //Commits done by prajjawal banati//
                        ptr=new student;
                        ptr->insert();
                        ptr->next=start;
                        start=ptr;
		        break;
		case 2: cout<<"Insertion at End"<<endl;
			//Commits done by prajjawal banati//
                        //made a new memory allocation//
                        node=new student;
                        node->insert();
                        //accessing the inserting funtion//
                        node->next=NULL;
                        for(ptr=start;ptr->next!=NULL;ptr=ptr->next)
                        ptr->next=node;
                        break;
		case 3: cout<<"Insertion at any point"<<endl;
			cout<<"Enter the name of the student after which you want to make the insertion"<<endl;
				cin>>n;
				for(ptr=start;ptr!=NULL;ptr=ptr->next)
				{
					if(ptr->name==n)
					break;
				}
				node=new student;
				node->insert();
				node->next=ptr->next;
				ptr->next=node;
			break;
		case 4: cout<<"Deletion at beginning"<<endl;
			break;
		case 5: cout<<"Deletion at End"<<endl;
			break;
		case 6: cout<<"Deletion anywhere"<<endl;
			break;
		case 7: cout<<"Traversal"<<endl;
			break;
		case 8: quit=1;
			break;
		default: cout<<"Wrong Choice! Please Try Again"<<endl;
	}
    }while(quit!=1);
	return 0;
}

