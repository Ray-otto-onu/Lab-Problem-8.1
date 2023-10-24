#include<string>
#include <iostream>

using namespace std;


int countCharacter(string str);

int main(void) {
	int length = 0;
	string input;
	getline(cin, input);
	length = countCharacter(input);
	cout << "letter count " << length;
}

int countCharacter(string str) {
	int length = 0;
	int l = str.length();

	for (int i = 0; i < l; i++) {
		if (str[i] == 'a' || str[i] == 'b' || str[i] == 'c' || str[i] == 'd' || str[i] == 'e' || str[i] == 'f' || str[i] == 'g' || str[i] == 'h' || str[i] == 'i' || str[i] == 'j' || str[i] == 'k' || str[i] == 'l' || str[i] == 'm' || str[i] == 'n' || str[i] == 'o' || str[i] == 'p' || str[i] == 'q' || str[i] == 'r' || str[i] == 's' || str[i] == 't' || str[i] == 'u' || str[i] == 'v' || str[i] == 'w' || str[i] == 'x' || str[i] == 'y' || str[i] == 'z'){
			length++;
		}
	}
	return length;
}