#include<iostream>
#include<string.h>
using namespace std;

struct encryption
{

	char enc[200];
	char plaintext[200];
	char ciphertext[200];
	int key;

};
int main() {

	struct encryption e;






	char username[20], password[20], choice;
	char uname[20] = "p1", pass[20] = "p2";
	int op;

	cout << "\n Security Of Your Information Matters \n";
	cout << "-----------------------------------------\n";
	cout << "Enter your Username:";
	cin >> username;
	cout << "Enter Your Password:";
	cin >> password;

	if (strcmp(username, uname) == 0 && strcmp(password, pass) == 0) {

		cout << "\n Welcome To Encryption World \n";

		do {


			cout << "\n 1.Encryption \t 2.decryption \t3.Exit\n";
			cout << "enter your option:";
			cin >> op;

			switch (op) {

			case 1:
				cout << "Enter Encryption key:";
				cin >> e.key;
				fflush(stdin);
				cout << "Enter the plain text:";
				cin.get(e.plaintext, 200);
				cout << "the cipher text is :\n";
				for (int i = 0; i < strlen(e.plaintext); i++) {

					e.enc[i] = (int)e.plaintext[i] + e.key;
					cout << e.enc[i];
				}
				break;

			case 2:
				cout << "Enter Decryption key:";
				cin >> e.key;
				fflush(stdin);
				cout << "Enter the cipher text:";
				cin.get(e.ciphertext, 200);
				cout << "the plain text is :\n";
				for (int i = 0; i < strlen(e.ciphertext); i++) {

					e.plaintext[i] = (int)e.ciphertext[i] - e.key;
					cout << e.plaintext[i];
				}



				break;

			case 3:
				exit(0);
				break;

			default:
				cout << "enter a correct input/wrong input";
			}

			cout << "would you like to continue enter y/Y for yes any for close:";
			cin >> choice;

		} while (choice == 'y' || choice == 'Y');


	}


	else {


		cout << "Try Again Later,username or password is incorrect!";

	}

	cin.ignore();
	cin.get();



	return 0;


}