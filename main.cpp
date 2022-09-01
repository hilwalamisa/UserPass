#include <iostream>

using namespace std;

int main() {
	//declaration
	string name, username, temp;	//string variable for user name and password
	int lengthUser, lengthPass;		//length variable for the number of user and password characters

	cout << "Login akun" << endl;
	cout << "*Tidak Boleh Spasi*" << endl << endl;

	cout << "Username : ";
	cin >> name;

	cout << "Password : ";
	cin >> temp;

	lengthUser = name.length();		//length function to counts the number of characters in a string variable.
	lengthPass = temp.length();			
	username = name + temp;			//make a package name and password

	system("cls");

	cout << lengthUser << name << lengthPass << temp << endl << endl; //display the result of the number of letters in the username and password

	cout << "Username anda : ";										
	for (int i = 0; i < (lengthUser); i++) {						//loop to print username
		cout << username[i];										
		//in order for the for loop to stop, the number of characters for this password must be less than the number of characters 
		//from the usernameand password because the string starts at 0
		if (i == lengthUser - 1) {									//loop to print pass 
			cout << "\nPassword anda : ";							
			for (int j = i; j < (lengthUser + lengthPass); j++) {	//display the result of loop pass
				cout << username[j + 1];							//+1 because it will print the pass, so it is adjusted to the number of characters available
			}
		}
	}
		
	//
	//username = temp = "";
	//lengthUser = lengthPass = 0;

	cout << endl << endl;

	system("Pause");
	return 0;
}