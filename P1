#include <iostream>
#include <string>
#include <regex>
using namespace std;

bool validateemail(const string& email)
{
        return regex_match(email, regex(R"([\w._%-]+@[\w.-]+\.[a-zA-Z]{2,})"));
}

bool validateage(int a)
{
        return a>=1 && a<=120;
}

int main()
{
        cout << "email valid:" <<(validateemail("user@example.com")?"YES":"NO")<<"\n"
                <<"Age valid: " <<(validateage(25) ?"YES":"NO")<<"\n"
                << "bad email:" <<(validateemail("example")?"YES":"NO")<<"\n"
                <<"bad age:" << (validateage(-34)?"YES":"NO")<<"\n";
}
