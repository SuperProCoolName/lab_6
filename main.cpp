#include <iostream>
using namespace std;

void CheckLetter(string str, char consonants[], char vowels[])
{
	int cons = 0, vow = 0, p, size = str.length();
	for (int i = 0; i < size; i++) {
		p = str.find(consonants[i]);
		if (p != string::npos)
			cons++;
	}
	vow = size - cons;
	cout << "There is " << cons << " consonant letters" << endl;
	cout << "There is " << vow << " vowel letters" << endl;
}

void main() {
	char consonants[] = "bcdfghjklmnpqrstvxzwy";
	char vowels[] = "aeiou";
	string str;
	cout << "Enter random letters: ";
	cin >> str;
	CheckLetter(str, consonants, vowels);
}
