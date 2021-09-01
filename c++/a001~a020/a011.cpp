#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main()
{
    string str;
    regex r("[A-Za-z]+");
    smatch match;
    while (getline(cin, str)){
        int count = 0;
        while (regex_search(str, match, r)){
            count++;
            str = match.suffix();
        }
        cout << count << endl;
    }
}