#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
	unordered_map<string, string> users;

	bool running = true;
	while (running) {
		int choice;

		cout << "Wybierz opcję:" << endl;
		cout << "1. Zaloguj się" << endl;
		cout << "2. Zarejestruj się" << endl;
		cout << "3. Wyjdź" << endl;

		cin >> choice;

		switch (choice) {
		case 1: {
			string login, password;
			cout << "Podaj login: ";
			cin >> login;
			cout << "Podaj hasło: ";
			cin >> password;

			if (users.count(login) > 0 && users[login] == password) {
				cout << "Zalogowano pomyślnie." << endl;
			}
			else {
				cout << "Nieprawidłowy login lub hasło." << endl;
			}
			break;
		}
		case 2: {
			string login, password;
			cout << "Podaj login: ";
			cin >> login;

			if (users.count(login) > 0) {
				cout << "Użytkownik o takim loginie już istnieje." << endl;
			}
			else {
				cout << "Podaj hasło: ";
				cin >> password;
				users[login] = password;
				cout << "Zarejestrowano pomyślnie." << endl;
			}
			break;
		}
		case 3: {
			running = false;
			break;
		}
		default: {
			cout << "Nieprawidłowa opcja." << endl;
			break;
		}
		}
	}

	return 0;
}