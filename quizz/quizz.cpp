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
void question(string question , string a , string b , string c , string d , char correct_answer);
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
				question("Jak nazywala sie ukochana corka Jana Kochanowskiego", "Hania", "Urszula", "Dagmara", "Marcin", 'a');
				break;
			case 1:
				question("Ile tremów napisał Kochanowski ", "18", "19", "21", "12", 'b');
				break;
			case 2:
				question("Gdzie mieszkal Jan Kochanowski", "warszawa", "police", "wieden", "czarno las", 'd');
				break;
			case 3:
				question("Z czego zaslynol jan kochanowski ", "Z bycia pisarzem", "Z bycia politykiem", "Z bycia wojskowym", " Z bycia budowniczym", 'b');
				break;
			case 4:
				question("5 lubie", "placki", "placki", "placki", "placki", 'b');
				break;
			case 5:
				question("6 lubie", "placki", "placki", "placki", "placki", 'b');
				break;
			case 6:
				question("7 lubie", "placki", "placki", "placki", "placki", 'b');
				break;
			case 7:
				question("8 lubie", "placki", "placki", "placki", "placki", 'b');
				break;
			case 8:
				question("9 lubie", "placki", "placki", "placki", "placki", 'b');
				break;
			case 9:
				question("10 lubie", "placki", "placki", "placki", "placki", 'b');
				break;
			}
		}
	}
	result();
}

void result()
{
	system("cls");
	cout << "Total question = " << Q_NO - 1 << endl;
	cout << "poprawna odpowiedz = " << poprawne << endl;
	cout << "niepoprawna odpowiedz = " << zle << endl;
	if (poprawne > zle)
		cout << "Result = PASS" << endl;
	else if (zle > poprawne)
		cout << "Result = FAIL" << endl;
	else
		cout << "Result = Tie" << endl;
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