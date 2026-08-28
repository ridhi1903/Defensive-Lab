#include <iostream>
#include <string>
#include <regex>
using namespace std;

bool validateemail(const string& email)
{
        return regex_match(email, regex(R"([\w%+-]+(\.[\w%+-]+)*@([a-zA-Z0-9]([a-zA-Z0-9-]*[a-zA-Z0-9])?\.)+[a-zA-Z]{2,})"));
}

bool validateage(int age)
{
       if (age == 0) cout << " (Newborn)";
    return age >= 0 && age <= 120;
}

int main()
{
        string email;
        int age;

        cout<< "Enter email:";
        cin >> email;

        cout << "enter age:";
        cin >> age;

        cout << "email valid:" <<(validateemail(email)?"YES":"NO")<<"\n";
             cout << "Age valid:   " << (validateage(age) ? (age == 0 ? "YES (Newborn)" : "YES") : "NO") << "\n";
        return 0;
}
