

#include <iostream>
using namespace std;

int main()
{
   cout << "Task 1\n";
   char arr1[255];
   cout << "Enter text:";
	cin.getline(arr1, 255);
	int a = 0;
	int o = 0;
	for (int i = 0; arr1[i]!='\0'; i++)
	{
		if (arr1[i]=='a' or arr1[i]=='A')
			a++;
		else if (arr1[i]=='o' or arr1[i]=='O')
			o++;
	}
	cout <<"A="<<a<<", O="<<o<<endl;
	if (a > o)
		cout << "A>O\n";
	else if (a<o)
		cout << "A<O\n";
	else
		cout << "A=O\n";

	cin.ignore(0);

	cout << "Task 2\n";
	char arr2[255];
	cout << "Enter text:";
	cin.getline(arr2, 255);
	int space = 0;
	int letter = 0;
	int figure = 0;

	for (int i = 0;  arr2[i] != '\0'; i++)
	{
		if (isalpha(arr2[i]))
			letter++;
		if (isdigit(arr2[i]))
			figure++;
		else if (isspace(arr2[i]))
			space++;
	}
	cout <<"Spaces in text: " << space << endl;
	cout <<"Figures in text: " << figure << endl;
	cout<<"Letters in text: "<<letter<<endl;

	cin.ignore(0);

	cout << "Task 3\n";
	char arr3[255];
	cout << "Enter text:";
	cin.getline(arr3, 255);
	for (int i = 0; arr3[i]!='\0'; i++)
	{
		if (isupper(arr3[i]))
			arr3[i]=tolower(arr3[i]);
		else if (islower(arr3[i]))
			arr3[i]=toupper(arr3[i]);
	}
	cout <<"Change arr: "<< arr3<<endl;

	cin.ignore(0);

	cout << "Task 4\n";
	char arr4[255];
	cout << "Enter text:";
	cin.getline(arr4, 255);
	int size = 0;
	int i = 0;
	while (arr4[i]!='\0')
	{
		i++;
		size++;
	}
	cout <<"Line lenght = "<< size;

	cin.ignore(0);

	cout << "\nTask 5\n";
	char vowel[12] = { 'a', 'e', 'i', '0', 'u', 'y', 'A', 'E', 'I', 'O', 'U', 'Y' };
	char consonant[40] = { 'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'z', 'B', 'C', 'D', 'F', 'G', 'H', 'J', 'K', 'L', 'M', 'N', 'P', 'Q', 'R', 'S', 'T', 'V', 'W', 'X', 'Z'};
	char punctuation[9] = { '!', ';', ':', '?', '.', ',', '(', ')', '-' };
	char arr5[255];
	cout << "Enter text:";
	cin.getline(arr5, 255);
	int space5 = 0;
	int vowel5 = 0;
	int consonant5 = 0;
	int punctuation5 = 0;

	for (int i = 0; arr5[i]!='\0'; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			if (arr5[i]==vowel[j])
			{
				vowel5++;
				break;
			}
		}

		for (int k = 0; k < 40; k++)
		{
			if (arr5[i] == consonant[k])
			{
				consonant5++;
				break;
			}
		}

		for (int l = 0; l < 12; l++)
		{
			if (arr5[i] == punctuation[l])
			{
				punctuation5++;
				break;
			}
		}

		if (arr5[i]==' ')
			space5++;
	}
	cout <<"Whitespaces = "<<space5<<endl;
	cout <<"ConsonantS = "<<consonant5 << endl;
	cout <<"Vowes = "<<vowel5 << endl;
	cout <<"Punktiations = " << punctuation5 << endl;

}

