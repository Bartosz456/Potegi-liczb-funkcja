#include <iostream>
using namespace std;

int oblicznie_potegi(int podstawa, int wykladnik, int wynik = 1)
{
		for (size_t i = 0; i < wykladnik; i++)
		{
			wynik *= podstawa;
		}
		return wynik;
}
int main()
{
	int podstawa, wykladnik;
	cout << "Podaj podstawe: ";
	cin >> podstawa;
	cout << "Podaj wykladnik: ";
	cin >> wykladnik;
	cout << oblicznie_potegi(podstawa, wykladnik);
}