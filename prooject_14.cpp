#include <iostream>
using namespace std;

class user {
public:
	virtual void show_profile();
	virtual void edit_profile();
private:
	string name;
	int age;
	
};

void user::show_profile() {
	
	cout << "Your name is:" << endl;
	
	cout << "Your age is:" << endl;
	cout << "________" << endl;
}

void user::edit_profile() {
	cout << "Your name is Sergey" << endl;
	cout << "edit:"; cin >> name;
	cout << "Your name is:" << endl;
	cout << "Your age is 16" << endl;
	cout << "edit:"; cin >> age;
	cout << "Your age is:" << endl;
	cout << "__________" << endl;
}

class  student:public user {
public:
	void show_profile();
	void edit_profile();
private:
	string name;
	int age;
	string course;
};

void student::show_profile() {

	cout << "Your name is:" << endl;

	cout << "Your age is:" << endl;
	cout << "Your course" << endl;
	cout << "__________" << endl;
}

void student::edit_profile() {
	cout << "Your name is Sergey" << endl;
	cout << "edit:"; cin >> name;
	cout << "Your name is:" << endl;
	cout << "Your age is 16" << endl;
	cout << "edit:"; cin >> age;
	cout << "Your age is:" << endl;
	cout << "Your course" << endl;
	cout << "__________" << endl;
}

int main()
{
	user profile;
	profile.show_profile();
	profile.edit_profile();

	student profile_1;
	profile_1.show_profile();
	profile_1.edit_profile();
}
