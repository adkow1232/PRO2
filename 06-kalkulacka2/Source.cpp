# include <iostream>
using namespace std;

int main()
{
    char operacia, pokracovanie;
    float cislo1, cislo2;

    do
    {
        cout << "Zadaj priklad napr. 10 + 5" << endl;
        cin >> cislo1 >> operacia >> cislo2;

        switch (operacia)
        {
        case '+':
            cout << cislo1 << " + " << cislo2 << " = " << cislo1 + cislo2;
            break;

        case '-':
            cout << cislo1 << " - " << cislo2 << " = " << cislo1 - cislo2;
            break;

        case '*':
            cout << cislo1 << " * " << cislo2 << " = " << cislo1 * cislo2;
            break;

        case '/':
            cout << cislo1 << " / " << cislo2 << " = " << cislo1 / cislo2 << endl;
            break;

        default:
            cout << "Zly operator!!!";
            break;
        }
        cout << "Chces pokracovat ? (a/n)" << endl;
        cin >> pokracovanie;
    } while (pokracovanie == 'a');

    return 0;
}