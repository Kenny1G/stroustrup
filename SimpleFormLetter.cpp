#include "std_lib_facilities.h"

int main()
{
	cout << "Enter the name of the person you want to write to.......";
	string first_name;
	cin >> first_name;
	cout << "Dear " << first_name << ",\n" << "\tHow are you? she who must not be named sure is pretty ain't she? She sure is. This is weird don't write this any more.\n";
	cout << "Enter the name of another friend\n";
	string friend_name;
	cin >> friend_name;
	cout << "Have you seen " << friend_name << " lately?\n";
	char friend_sex = 0;
	cout << "Enter m if your friend is male and f if female? ";
	cin >> friend_sex;
	string friend_identifier;
	if (friend_sex == 'm')
	{
		friend_identifier = "him";
	}
	if (friend_sex == 'f')
	{
		friend_identifier = "her";
	}
	cout << "If you see " << friend_name << " please ask "<< friend_identifier << " to call me.\n";
	cout << "Enter the recipeints age: ";
	int age;
	cin >> age;
	if (age <= 0 || age >= 110)
	{
		simple_error("you're kidding!");
	}
	cout << "I hear you just had a birthday and you are " << age << " years old. ";
	if (age < 12)
	{
		cout << "Next year you will be " << age + 1;
	}
	if (age == 17)
	{
		cout << "Next year you will be able to vote";
	}
	if (age > 70)
	{
		cout << "I hope you are enjoying retirement";
	}
	cout << "Yours sincerely__Kenny";

}