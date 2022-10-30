#include <iostream>
#include <vector>
#include <iterator>
#include <string>
 
using namespace std;

int main()
{
	vector <string> infovector;

	cout << "What's Your name? ";
	string answer;
	cin >> answer;
	infovector.push_back(answer);
	 
	cout << "How old are you? ";
	cin >> answer;
	infovector.push_back(answer);

	cout << "Where do you live? ";
	cin >> answer;
	infovector.push_back(answer); 
	cout << endl;
	
	string userinfo = "Your name is " + infovector[0] + " and you are " + infovector[1] + " years of age " + "as well as you live in " + infovector[2];
	
	cout << userinfo << endl;

	system("pause");

	system("cls");

	cout << "Thank you for your input. Good Bye!" << endl;
}
