// Files

// Lesson #52 - Write Mode: Write Data To File : EXAMPLE
#include <iostream>
#include <fstream>
using namespace std;
int main() {
	fstream MyFile;
	MyFile.open("MyFile.txt", ios::out);//Write Mode
	if (MyFile.is_open())
	{
		MyFile << "Hi, this is the first line\n";
		MyFile << "Hi, this is the second line\n";
		MyFile << "Hi, this is the third line\n";
		MyFile.close();
	}
	return 0;
}

// Lesson #53 - Append Mode: Append Data to File : EXAMPLE
#include <iostream>
#include <fstream>
using namespace std;
int main() {
	fstream MyFile;
	MyFile.open("MyFile.txt", ios::out | ios::app);//append Mode
	if (MyFile.is_open())
	{
		MyFile << "Hi, this is a new line\n";
		MyFile << "Hi, this is another new line\n";
		MyFile.close();
	}
	return 0;
}

// Lesson #54 - Read Mode: Print File Content : EXAMPLE
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void PrintFileContenet(string FileName)
{
	fstream MyFile;
	MyFile.open(FileName, ios::in);//read Mode
	if (MyFile.is_open())
	{
		string Line;
		while (getline(MyFile, Line))
		{
			cout << Line << endl;
		}
		MyFile.close();
	}
}
int main() {
	PrintFileContenet("MyFile.txt");
	return 0;
}

// Lesson #55 - Load Data From File to Vector : EXAMPLE
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
void LoadDataFromFileToVector(string FileName, vector <string>&
	vFileContent)
{
	fstream MyFile;
	MyFile.open(FileName, ios::in);//read Mode
	if (MyFile.is_open())
	{
		string Line;
		while (getline(MyFile, Line))
		{
			vFileContent.push_back(Line);
		}
		MyFile.close();
	}
}
int main() {
	vector <string> vFileContenet;
	LoadDataFromFileToVector("MyFile.txt", vFileContenet);
	for (string& Line : vFileContenet)
	{
		cout << Line << endl;
	}
	return 0;
}

// Lesson #56 - Save Vector to File : EXAMPLE
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
void SaveVectorToFile(string FileName, vector <string>
	vFileContent)
{
	fstream MyFile;
	MyFile.open("MyFile.txt", ios::out);
	if (MyFile.is_open())
	{
		for (string& Line : vFileContent)
		{
			if (Line != "")
			{
				MyFile << Line << endl;
			}
		}
		MyFile.close();
	}
}
int main()
{
	vector <string> vFileContenet{
	"Ali","Shadi","Maher","Fadi","Lama" };
	SaveVectorToFile("MyFile.txt", vFileContenet);
	return 0;
}

// Lesson #57 - Delete Record From File : EXAMPLE
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
void LoadDataFromFileToVector(string FileName, vector <string>&
	vFileContent)
{
	fstream MyFile;
	MyFile.open("MyFile.txt", ios::in);//read Mode
	if (MyFile.is_open())
	{
		string Line;
		while (getline(MyFile, Line))
		{
			vFileContent.push_back(Line);
		}
		MyFile.close();
	}
}
void SaveVectorToFile(string FileName, vector <string>
	vFileContent)
{
	fstream MyFile;
	MyFile.open("MyFile.txt", ios::out);
	if (MyFile.is_open())
	{
		for (string Line : vFileContent)
		{
			if (Line != "")
			{
				MyFile << Line << endl;
			}
		}
		MyFile.close();
	}
}
void DeleteRecordFromFile(string FileName, string Record)
{
	vector <string> vFileContent;
	LoadDataFromFileToVector(FileName, vFileContent);
	for (string& Line : vFileContent)
	{
		if (Line == Record)
		{
			Line = "";
		}
	}
	SaveVectorToFile(FileName, vFileContent);
}
void PrintFileContent(string FileName)
{
	fstream MyFile;
	MyFile.open(FileName, ios::in);//read Mode
	if (MyFile.is_open())
	{
		string Line;
		while (getline(MyFile, Line))
		{
			cout << Line << endl;
		}
		MyFile.close();
	}
}
int main() {
	cout << "File Content Before Delete.\n";
	PrintFileContent("MyFile.txt");
	DeleteRecordFromFile("MyFile.txt", "Ali");
	cout << "\n\nFile Content After Delete.\n";
	PrintFileContent("MyFile.txt");
	return 0;
}

// Lesson #58 - Update Record In File : EXAMPLE
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
void LoadDataFromFileToVector(string FileName, vector <string>&
	vFileContent)
{
	fstream MyFile;
	MyFile.open("MyFile.txt", ios::in);//read Mode
	if (MyFile.is_open())
	{
		string Line;
		while (getline(MyFile, Line))
		{
			vFileContent.push_back(Line);
		}
		MyFile.close();
	}
}
void SaveVectorToFile(string FileName, vector <string>
	vFileContent)
{
	fstream MyFile;
	MyFile.open("MyFile.txt", ios::out);
	if (MyFile.is_open())
	{
		for (string Line : vFileContent)
		{
			if (Line != "")
			{
				MyFile << Line << endl;
			}
		}
		MyFile.close();
	}
}
void UpdateRecordInFile(string FileName, string Record, string
	UpdateTo)
{
	vector <string> vFileContent;
	LoadDataFromFileToVector(FileName, vFileContent);
	for (string& Line : vFileContent)
	{
		if (Line == Record)
		{
			Line = UpdateTo;
		}
	}
	SaveVectorToFile(FileName, vFileContent);
}
void PrintFileContent(string FileName)
{
	fstream MyFile;
	MyFile.open(FileName, ios::in);//read Mode
	if (MyFile.is_open())
	{
		string Line;
		while (getline(MyFile, Line))
		{
			cout << Line << endl;
		}
		MyFile.close();
	}
}
int main() {
	cout << "File Content Before Delete.\n";
	PrintFileContent("MyFile.txt");
	UpdateRecordInFile("MyFile.txt", "Ali", "Omar");
	cout << "\n\nFile Content After Delete.\n";
	PrintFileContent("MyFile.txt");
	return 0;
}

