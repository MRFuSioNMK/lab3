#include<iostream>
#include<cmath>

using namespace std;

//// Integer22
int main()

{
    cout<< " Integer22\n "<<endl;//Показ в консоли задания 
    cout<< " Впишіть годину в секундах:";
    int N;//Целочисленная переменная N
    cin >> N;//Считывает данные с консоли
    cout << " Кількість секунд, що пройшли з початку останньої години:\n " << N % 3600 <<endl;// Показ в консоли N


    ////Boolean18
    cout<< " \nBoolean18\n " <<endl;//Показ в консоли задания 
    int a,b,c;//Целочисленные переменные a,b,c
    bool pair;//Логический тип данных 

    cout<< " A= ";// Показ в консоли A =
    cin>> a;//Считывает данные с консоли
    cout<< " B= ";// Показ в консоли B = 
    cin>> b;//Считывает данные с консоли
    cout<< " C= ";// Показ в консоли C = 
    cin>> c;//Считывает данные с консоли

    pair = ((a == b) && (b == a) || (b == c) && (c == b) || (a == c) && (c == a));//Переменная pair внутри которой решение задания
    cout<< " Пара співпадаючих чисел "  <<boolalpha << pair << endl;// Показ в консоли логического типа данных 


    ////Мат. вирази 14
    cout<< " Мат. вирази 14\n " <<endl;//Показ в консоли задания

    float x = 0, y, num, denom;//Переменная с плавающей запятой
    cout<< " Впишіть число: ";//Показ в консоли 
    cin>> x;//Считывает данные с консоли
   
    num = cbrt(abs(pow(x,2)/2 - pow(sin(pow(x,3)),2))) * (log(abs(x)))/log(2.5);//Числитель задания
    denom = pow(2,x) * sqrt(abs(x + 2.5) * abs(tan(x)));//Знаменатель задания
    y = num/denom;//Деление Числителя на Знаменатель

    cout<< " Відповідь: " <<y;// Показ в консоли переменной y

}