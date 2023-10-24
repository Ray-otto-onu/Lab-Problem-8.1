#include<string>
#include <iostream>

using namespace std;


int countVowel(string str);

int main(void) {
	int length = 0;
	string input;

	while (true) {
		cout << "Enter a string or Q to quit: ";
		getline(cin, input);
		if (input == "Q") break;
		length = countVowel(input);
		cout << "letter count " << length<<endl;
	}
	return 0;}

int countVowel(string str) {
	int length = 0;
	int l = str.length();

	for (int i = 0; i < l; i++) {
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'|| str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
			length++;
		 }
	}
	return length;
}