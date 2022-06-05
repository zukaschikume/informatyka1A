#include <iostream>
#include <random>
#include <ctime>

using namespace std;
int Q_NO = 1;
int poprawne = 0;
int zle = 0;
bool ask[10] = { true , true , true , true , true , true ,true ,true ,true ,true };

void display_random_question();
void display();
void question(string question, string a , string b , string c , string d , char correct_answer);
void result();

int main()
{
	display();
	return 0;
}

void display()
{
	system("cls");
	cout << "question NO:" << Q_NO << "\t\tpoprawne odpowiedzi:" << poprawne << "\t\tzle odpowiedzi:" << zle
	<< endl << endl;
	display_random_question();
}

void display_random_question()
{
	srand(time(0));
	bool is_question_remaining = true;
	for (int i = 0; i < 10; i++)
	{
		if (ask[i])
		{
			is_question_remaining = true;
			break;
		}
	}
	while (is_question_remaining)
	{
		int no = rand() % 10;
		if (ask[no])
		{
			ask[no] = false;
			switch (no)
			{
			case 0 :
				question("Jak nazywala sie ukochana corka Jana Kochanowskiego", "Urszula", "Hania", "Dagmara", "Jula", 'a');
				break;
			case 1:
				question("Ile tremów napisał Kochanowski ", "18", "19", "21", "12", 'b');
				break;
			case 2:
				question("Gdzie mieszkal Jan Kochanowski", "warszawa", "police", "wieden", "czarno las", 'd');
				break;
			case 3:
				question("Z czego zaslynol jan kochanowski ", "Z bycia pisarzem", "Z bycia politykiem", "Z bycia wojskowym", "Z bycia budowniczym", 'a');
				break;
			case 4:
				question("", "", "", "", "", 'b');
				break;
			case 5:
				question("Jaki herb miala rodzina Jana Kochanowskiego ", "herb Ogonczykowy", "herb Zukowy", "herb Gozdawy", "herb Korwinu", 'd');
				break;
			case 6:
				question("W jakim miescie zmarl Jan Kochanowski", "Lublin", "warszawa", "paryz", "krakow", 'a');
				break;
			case 7:
				question("Jak nazywala sie ksiazka Jana kochanowskiego ktora opowiadala o mitologi greckiej", "Odyseja", "Iliada", "Odprawa poslow greckich", "Homer", 'c');
				break;
			case 8:
				question("kiedy urodzil sie Jan Kochanowski ", "1531", "1540", "1530", "940", 'c');
				break;
			case 9:
				question("ile dzieci mial Jan Kochanowski", "2", "7", "5", "0", 'b');
				break;
			}
		}
	}
	result();
}

void result()
{
	system("cls");
	cout << "Razem pytania = " << Q_NO - 1 << endl;
	cout << "poprawna odpowiedz = " << poprawne << endl;
	cout << "niepoprawna odpowiedz = " << zle << endl;
	if (poprawne > zle)
		cout << "Result = udalo sie" << endl;
	else if (zle > poprawne)
		cout << "Result = nie udalo sie " << endl;
	else
		cout << "Result = remis" << endl;
}

void question(string question, string a, string b, string c, string d, char correct_answer)
{
	cout << question << endl;
	cout << "A.\t" << a << endl;
	cout << "B.\t" << b << endl;
	cout << "C.\t" << c << endl;
	cout << "D.\t" << d << endl;
	char answer;
	cin >> answer;
	if (answer == correct_answer)
		poprawne++;
	else
		zle++;
	Q_NO++;
	display();
}