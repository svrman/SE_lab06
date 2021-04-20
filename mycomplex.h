#ifndef _MY_COMPLEX_H_
#define _MY_COMPLEX_H_							//имя подключаемого файла "mycomplex.h"
#include <iostream>

using namespace std;

class Complex								//объявление класса "комплексное число"

{
      	double Re;							//объявление параметров действительной части(закрытая переменная)
	    double Im;							//объявление параметров мнимой части(закрытая переменная)
public:									//тип доступа к описаным ниже методам(общий доступ)

      Complex (double aRe = 0, double aIm = 0);				//объявление конструктра записи изменяемой действительной и мнимой части(Re и Im)
      Complex (const Complex &);					//объявление конструктора копирования
     ~Complex();							//объявление деструтора, очистка памяти

void Set(double aRe, double aIm = 0);					//объявление метода сеттера
      operator double();						//объявление operator
      double abs();							//объявление метода вычисления модуля комплексного числа

friend istream & operator >> (istream &, Complex &);		//объявление дружественных операторов, которым мы разрешаем доступ
friend ostream & operator << (ostream &, Complex &);		//к закрытым переменным

      Complex operator + (const Complex &);				//объявление оператора сложения, комплексная переменная
      Complex operator - (const Complex &);				//объявление оператора вычитания, комплексная переменная
      Complex operator + (const double &);				//объявление оператора сложения,  действительная переменная

friend Complex operator + (const double &, const Complex &); 	//объявление дружественного оператора сложения, одна действительная переменная и одная комплексная переменная
       Complex operator - (const double &);				//объявление оператора вычитания, действительная переменная
friend Complex operator - (const 	double &, const Complex &);	//объявление дружественного оператора вычитания, одна действительная переменная и одная комплексная переменная
       Complex operator * (const Complex &);				//объявление оператора умножение, комплексная переменная
       Complex operator * (const double &);				//объявление оператора умножения, действительная переменная
friend Complex operator * (const double &, const Complex &);	//объявление дружественного оператора умножения, одна действительная переменная и одная комплексная переменная
       Complex operator / (const double &);				//объявление оператора деления, действительная переменная

       Complex & operator += (const Complex &);				//объявление оператора +=, комплексная переменная
       Complex & operator -= (const Complex &);				//объявление оператора -=, комплексная переменная
       Complex & operator *= (const Complex &);				//объявление оператора *=, комплексная переменная
       Complex & operator += (const double &);				//объявление оператора +=, действительная переменная
       Complex & operator -= (const double &);				//объявление оператора -=, действительная переменная
       Complex & operator *= (const double &);				//объявление оператора *=, действительная переменная
       Complex & operator /= (const double &);				//объявление оператора /=, действительная переменная
       Complex & operator = (const Complex &);				//объявление оператора присванивания, комплексная переменная
       Complex & operator = (const double &);				//объявление оператора присванивания, действительная переменная
};
#endif
