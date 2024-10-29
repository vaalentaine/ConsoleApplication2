
#include <iostream>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL,"RU");
    
       
        int a, b;
        cout << "Введите два числа: ";
        cin >> a >> b;
        int max = (a > b) ? a : b;
        cout << "Максимум: " << max << endl;


       

        int number;
        cout << "Введите целое число:";
        cin >> number;
        string result = (number % 2 == 0) ? "четное" : "нечетное";
        cout << "Число" << number << "является" << result << endl;



        int num;
        cout << "Введите число: ";
        cin >> num;
        cout << "Число " << num << "." << endl;



        
        int a, b, c;
        cout << "Введите три числа: ";
        cin >> a >> b >> c;
        int max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
        cout << "Максимум: " << max << endl;
        


        int score;
        cout << "Введите оценку (0-100): ";
        cin >> score;
        cout << "Оценка: " << score << endl;


        int age;
        cout << "Введите возраст: ";
        cin >> age;
        cout << "Возрастная категория: " << age << "." << endl;



        int year;
        cout << "Введите год: ";
        cin >> year;
        cout << year << " - " << year << "." << endl;


        int num;
        cout << "Введите число: ";
        cin >> num;
        cout << (num >= 0 ? "положительное" : "отрицательное") << endl;



        int hour;
        cout << "Введите часы (0-23): ";
        cin >> hour;
        cout << "Время суток: " << hour << "." << endl;



        string input;
        cout << "Введите строку: ";
        cin >> input;
        string result = input;
        cout << result << endl;



        string input;
        cout << "Введите строку: ";
        cin >> input;
        cout << input << "." << endl;



        string str1, str2;
        cout << "Введите первую строку: ";
        cin >> str1;
        cout << "Введите вторую строку: ";
        cin >> str2;
        cout << ((str1 > str2) ? "первая больше" : "вторая больше") << "." << endl;




        double num1, den1, num2, den2;
        cout << "Введите первую дробь (числитель и знаменатель): ";
        cin >> num1 >> den1;
        cout << "Введите вторую дробь (числитель и знаменатель): ";
        cin >> num2 >> den2;
        cout << (num1, den1, num2, den2) << "." << endl;



        int num;
        cout << "Введите число: ";
        cin >> num;
        cout << num << "." << endl;



        string input;
        cout << "Введите строку: ";
        cin >> input;
        cout << input << "." << endl;



        float temp;
        cout << "Введите температуру в градусах Цельсия: ";
        cin >> temp;
        cout << temp << "." << endl;
        return 0;



    
}




