#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;
string findWord(vector<string> Dict)
{
	string sample;
	cout << " input your word here : ";
	cin >> sample;
	cout << endl;
	for(int i = 0;i<Dict.size();i++)
	{
		string buffer ;
		if (Dict[i].size()>=sample.size())
		{
		for (int j = 0;j<sample.size();j++)
		{
			buffer+=Dict[i][j];
		}
		if (sample == buffer && Dict[i][buffer.size()] ==  ' ' )
			return(Dict[i]);
		else
			continue;
		}
	}
	string noword = "no translation found";
	return(noword);
}
vector<string> Copy()
{
	ifstream File;
	File.open("en-ru.txt");
	vector<string> EnRuDict;
	if (File)
	while(!File.eof())
	{
		string buffer = "";
		char lil_buffer = 'a';
		while (lil_buffer!='\n')
		{
			if (File.eof())
				break;
			File.get(lil_buffer);
			buffer = buffer + lil_buffer;
		}
		EnRuDict.push_back(buffer);
	}
	else
	cout << " no file found ";
	File.close();
	return EnRuDict;
}

int main()
{
	vector<string> TheDictionary = Copy();
	//for (int i = 0 ;i<TheDictionary.size();i++)
	//	cout <<"["<<i<<"] "<< TheDictionary[i]<<endl;
	while(true)
	{
	string translation = findWord(TheDictionary);
	cout << translation << endl;
	system("pause");
	}
	return 0;
}