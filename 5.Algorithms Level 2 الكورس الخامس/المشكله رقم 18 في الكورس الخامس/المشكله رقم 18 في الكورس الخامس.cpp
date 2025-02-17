#include <iostream>
#include <string>
using namespace std;
string readtext()
{
	string text;
	cout << "please enter text?\n";
	getline(cin, text);
	return text;
}
string encrypttext(string text, short encryptionkey)
{
	for (int i = 0; i <= text.length(); i++)
	{
		text[i] = char((int)text[i] + encryptionkey);
	}
	return text;
}
string decrypttext(string text, short encryptionkey)
{
	for (int i = 0; i <= text.length(); i++)
	{
		text[i] = char((int)text[i] - encryptionkey);
	}
	return text;
}
int main()
{
	const short encryptionkey = 2; //this is the key.
	string textafterencryption, textafterdecryption;
	string text = readtext();
	textafterencryption = encrypttext(text, encryptionkey);
	textafterdecryption = decrypttext(textafterencryption, encryptionkey);
	cout << "\nText Before Encryption : ";
	cout << text << endl;
	cout << "Text After Encryption : ";
	cout << textafterencryption << endl;
	cout << "Text After Decryption : ";
	cout << textafterdecryption << endl;
	return 0;
}