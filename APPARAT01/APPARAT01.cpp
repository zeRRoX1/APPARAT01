#include <iostream>

using namespace std;

//Товары
string tovar1 = "Кефир";
string tovar2 = "Молоко";
string tovar3 = "Сливки";
string tovar4 = "Энергетик";
string tovar5 = "ЧУПА ЧУПС";
string tovar6 = "ХУБА БУБА";

//количество
int tov1 = 10, tov2 = 10, tov3 = 10, tov4 = 10, tov5 = 10, tov6 = 10;

//Цена
int cena1 = 69, cena2 = 59, cena3 = 89, cena4 = 49, cena5 = 19, cena6 = 39;

//Корзина
int korzina = 0;
int obshaya_korzina = 0;

//счетчик товаров
int pokypki1 = 0, pokypki2 = 0, pokypki3 = 0, pokypki4 = 0, pokypki5 = 0, pokypki6 = 0;

int pobeg;

int new_gamer = 1, vibor = 1;

//товар на в автомате
void apparat() {
	cout << "\t\tКассовый аппарат" << endl;
	cout << "     Товар: " << tovar1 << "\t" << tovar2 << "\t" << tovar3 << "\t" << tovar4 << "   " << tovar5 << "   " << tovar6 << endl;
	cout << "Количество: " << tov1 << "\t\t" << tov2 << "      " << tov3 << "      " << tov4 << "          " << tov5 << "          " << tov6 << endl;
	cout << " Стоимость: " << cena1 << "\t\t" << cena2 << "      " << cena3 << "      " << cena4 << "          " << cena5 << "          " << cena6 << endl;
	cout << "В корзине товаров на " << korzina << endl;
	cout << endl;
	cout << "Привет что хочешь купить? (1,2,3,4,5,6 | 0 - выход)" << endl;
}

//новый пользователь
void polz() {
	cout << endl;
	cout << "Новый человек?(1/0)" << endl;
	cin >> new_gamer;
	if (new_gamer == 1) {
		vibor = 1;
		korzina = 0;
		tov1 = 10, tov2 = 10, tov3 = 10, tov4 = 10, tov5 = 10, tov6 = 10;
		cena1 = 69, cena2 = 59, cena3 = 89, cena4 = 49, cena5 = 19, cena6 = 39;
		pokypki1 = 0, pokypki2 = 0, pokypki3 = 0, pokypki4 = 0, pokypki5 = 0, pokypki6 = 0;
		tovar1 = "Кефир";
		tovar2 = "Молоко";
		tovar3 = "Сливки";
		tovar4 = "Энергетик";
		tovar5 = "ЧУПА ЧУПС";
		tovar6 = "ХУБА БУБА";
		apparat();
	}
	else {
		cout << "Отличная работа." << endl;
		cout << "Общаяя выручка за сегодняшний день: " << obshaya_korzina << endl;
		cout << "До свидания." << endl;
	}
	cout << "\x1B[2J\x1B[H";

}

int main()
{
	setlocale(LC_ALL, "");
	apparat();
	while (new_gamer != 0) {
		while (vibor != 0) {
			cin >> vibor;
			switch (vibor)
			{
			case(0):
				if (korzina == 0) {
					cout << "Вы плохой человек" << endl;
					break;
				}
				else {
					cout << "\t Чек \t" << endl;
					if (pokypki1 > 0) {
						cout << "Молоко: " << pokypki1 << " шт." << " на стоимость: " << pokypki1 * 69 << endl;
					}
					if (pokypki2 > 0) {
						cout << "Кефир: " << pokypki2 << " шт." << " на стоимость: " << pokypki2 * 59 << endl;
					}
					if (pokypki3 > 0) {
						cout << "Сливки: " << pokypki3 << " шт." << " на стоимость: " << pokypki3 * 89 << endl;
					}
					if (pokypki4 > 0) {
						cout << "Энергетик: " << pokypki4 << " шт." << " на стоимость: " << pokypki4 * 49 << endl;
					}
					if (pokypki5 > 0) {
						cout << "ЧУПА ЧУПС: " << pokypki5 << " шт." << " на стоимость: " << pokypki5 * 19 << endl;
					}
					if (pokypki6 > 0) {
						cout << "ХУБА БУБА: " << pokypki6 << " шт." << " на стоимость: " << pokypki6 * 39 << endl;
					}

					cout << endl << "Общая стоимость: " << korzina << endl;
					obshaya_korzina += korzina;

					cout << "Общая корзина: " << obshaya_korzina << endl;
					cout << "Убежать с товаром?" << endl;
					cin >> pobeg;
					if (pobeg == 1) {
						cout << "Поздравляю вы убежали! " << endl;
						break;
					}
					else {
						cout << "Вы трус!" << endl;
						break;
					}
				}
			case(1):
				//очистка экрана
				cout << "\x1B[2J\x1B[H";
				if (tov1 > 0) {
					tov1 -= 1;
					pokypki1++;
					if (tov1 == 0) {
						tovar1 = "      ";
						cena1 = '\0\0';
						tov1 = '\0';
					}

					if (pokypki1 >= 3) {
						cena1 *= 0.95;
					}

					korzina += cena1;
					apparat();
				}
				else {
					cout << "Нельзя приобрести данный товар" << endl;
					apparat();
				}
				break;
			case(2):
				//очистка экрана
				cout << "\x1B[2J\x1B[H";
				if (tov2 > 0) {

					tov2 -= 1;
					pokypki2++;
					if (tov2 == 0) {
						tovar2 = "     ";
						cena2 = '\0\0';
						tov2 = '\0';

					}
					if (pokypki2 >= 3) {
						cena2 *= 0.95;
					}

					korzina += cena2;
					apparat();
				}
				else {
					cout << "Нельзя приобрести данный товар" << endl;
					apparat();
				}
				break;

			case(3):
				//очистка экрана
				cout << "\x1B[2J\x1B[H";
				if (tov3 > 0) {

					tov3 -= 1;
					pokypki3++;
					if (tov3 == 0) {
						tovar3 = "      ";
						cena3 = '\0\0';
						tov3 = '\0';

					}
					if (pokypki3 >= 3) {
						cena3 *= 0.95;
					}

					korzina += cena3;
					apparat();
				}
				else {
					cout << "Нельзя приобрести данный товар" << endl;
					apparat();
				}
				break;

			case(4):
				//очистка экрана
				cout << "\x1B[2J\x1B[H";
				if (tov4 > 0) {

					tov4 -= 1;
					pokypki4++;
					if (tov4 == 0) {
						tovar4 = "         ";
						cena4 = '\0\0';
						tov4 = '\0';

					}
					if (pokypki4 >= 3) {
						cena4 *= 0.95;
					}

					korzina += cena4;
					apparat();
				}
				else {
					cout << "Нельзя приобрести данный товар" << endl;
					apparat();
				}
				break;

			case(5):
				//очистка экрана
				cout << "\x1B[2J\x1B[H";
				if (tov5 > 0) {

					tov5 -= 1;
					pokypki5++;
					if (tov5 == 0) {
						tovar5 = "         ";
						cena5 = '\0\0';
						tov5 = '\0';

					}
					if (pokypki5 >= 3) {
						cena5 *= 0.95;
					}

					korzina += cena5;
					apparat();
				}
				else {
					cout << "Нельзя приобрести данный товар" << endl;
					apparat();
				}
				break;

			case(6):
				//очистка экрана
				cout << "\x1B[2J\x1B[H";
				if (tov6 > 0) {

					tov6 -= 1;
					pokypki6++;
					if (tov6 == 0) {
						tovar6 = "         ";
						cena6 = '\0\0';
						tov6 = '\0';

					}
					if (pokypki6 >= 3) {
						cena6 *= 0.95;
					}

					korzina += cena6;

					apparat();
				}
				else {
					cout << "Нельзя приобрести данный товар" << endl;
					apparat();
				}
				break;

			}
		}
		//новый пользователь		
		polz();
		if (new_gamer == 1) {
			apparat();
		}
	}
}
