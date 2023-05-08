#include<iostream>
#include<string>
#include<math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	string s;
	cin >> s;
	int k=0;
	double summa=0;
	int j = s.length()-1;
	for (int i = 0; i < s.length(); i++)
	{
		if (((s[i] >= 65) && (s[i] <= 70)) || ((s[i] >= 48) && (s[i] <= 57)))
		{
			if ((int)s[i] > 64)
			{
				summa += (s[i] - 55) * pow(16, j);
			}
			else
			{
				summa += (s[i] - 48) * pow(16, j);
			}
			j--;
		}
		else
		{
			k++;
		}
	}
	if (k > 0)
	{
		cout << "число записано неправильно!!!";
	}
	else
	{
		cout.setf(ios_base::fixed);
		cout.precision(1);
		cout << endl << summa;
	}
}