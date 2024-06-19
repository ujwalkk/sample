#include<iostream>
#include<string>
using namespace std;
class person{
	protected:
	string name;
	int age;
	public:
	void set_name(string n){
		name=n;
	}
	void set_age(int a){
		age=a;}
	};
	class student:
	public person{
	protected:
	int roll_no;
	public:
	void set_roll_no(int r){
		roll_no=r;
}

void display_student(){
	cout<<"Name:"<<name<<endl;
	cout<<"Age:"<<age<<endl;
	cout<<"Roll Number:"<<roll no<<endl;
}
}
}

