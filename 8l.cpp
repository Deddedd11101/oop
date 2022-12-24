

#include <iostream>
#include<iomanip>
#include<cstdio>
#include<conio.h>
using namespace std;

//Four one
/*char s[255] = "abcd\n";*/
char buf[255] = "abcd\n";
/*ostream& endp(ostream& stream)
{
    char ss[255];
    static int k = 0;
    int i, j, c = 5;
    for (i = 0, j = 0; s[j] != '\0'; i++, j++)
    {
        ss[i] = s[j];
        if (ss[i] == '\n')
        {
            k++;
            if (k == c)
            {
                ss[i + 1] = '\n';
                stream << "\n-------------\n";
                i = -1;
            }
        }
    }
    if (i < 0)
    {
        ss[i + 1] = '\0';
        stream << ss;
    }
    return stream;
}*/

//Four two
/*ostream& endp(ostream& stream, int n)//здесь n - количество строк на странице
{
    char ss[255];
    static int k = 0;//счетчик
    int i, j;
    for (i = 0, j = 0; s[j] != '\0'; i++, j++)
    {
        ss[i] = s[j];
        if (ss[i] == '\n')
        {
            k++;
            if (k == n)
            {
                ss[i + 1] = '\n';
                stream << "\n-----------\n";
                i = -1;
            }
        }
    }
    if (i < 0)
    {
        ss[i + 1] = '\0';
        stream << ss;
    }
    return stream;
}*/


//Four three
/*ostream& fendp(ostream& stream, int n, char* s)
{
    char bb[255];
    static int k = 0;
    int i, j;
    for (i = 0, j = 0; buf[j] != '\0'; i++, j++)
    {
        bb[i] = buf[j];
        if (bb[i] == '\n')
        {
            k++;
            if (k == n)
            {
                bb[i + 1] = '\n';
                stream << s;
                i = -1;
            }
        }
    }
    if (i < 0)
    {
        bb[i + 1] = '\0';
        stream << bb;
    }
    return stream;
}
*/
int main()
{
    setlocale(LC_ALL, "Russian");
    /*int value = 64;
    cout << hex << value << endl;


    //2
    cout << fixed << setprecision(3) << (13.5 / 2) << endl;
    
    //3
    */
    /*float var = 11.11;
    cout << setw(20) << var << endl;
    cout << setw(10) << right << var << endl;
    cout << setw(20) << left << var << endl;

    //Задание 2
    cout.setf(ios::showpos);
    cout.setf(ios::scientific);
    cout << 123 << " " << 123.23 << "\n";
    cout.precision(2); // две цифры после запятой
    cout.width(10); // в поле из десяти символов
    cout << 123 << " " << 123.23 << " \n";
    cout.fill('#'); // заполнение с помощью #
    cout.width(10); // в поле из десяти символов
    cout << 123 << " " << 123.23;
    return 0;*/


    //Задание 3
    /*cout.setf(ios::boolalpha);
    bool log_false = 0, log_true = 1;
    cout << log_false << endl<< log_true << endl;

    cout.unsetf(ios::dec);
    cout.setf(ios::oct);
    int value;
    cin >> value;
    cout << value << endl;

    cout.setf(ios::dec);
    int value;
    cin >> value;
    cout << value << endl;*/

    //Задание 4.1
    /*int i = -1;
    for (i = 0; i < 9; i++)
        cout << s << endp;*/


    //Задание 4.2
    /*int i;
    for (i = 0; i < 7; i++) {
        cout << s;
        endp(cout, 5);
    }*/


    //Задание 4.3
    /*int i;
    char t[] = "\n-------------\n";
    for (i = 0; i < 7; i++) {
        cout << buf;
        fendp(cout, 5, t);
    }*/

    //Задание 5 
    int number;

    cout << "Введите число: ";
    cin >> number;
    cin.ignore();
    cout << "введенро: " << number << "\n";
   

    char char1;
    cout << "строку: ";
    cin.get(char1); cout << endl;
    cout << "строка = " << char1 << endl;


    cin.putback(char1);
    cin.get(char1);
    cout << endl;
    cout << "char1 = " << char1 << endl;

    char1 = cin.peek();
    cout << "char1 = " << char1 << endl;



}


