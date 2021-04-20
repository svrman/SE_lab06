#include <iostream>
#include <cmath>
#include "mycomplex.h"//подключаем свой файл №3

using namespace std;

Complex ::Complex(double aRe , double aIm)//описание конструктора записи изменяемой действительной и мнимой части(Re и Im)-ничего не возвращает
{
      Re = aRe;//запись параметра действительной части
      Im = aIm;//запись параметра мнимой части
}

Complex ::  Complex(const Complex & aRval)//описание конструктора копирования(передача по ссылке)
{
      Re = aRval.Re;//запись параметра действительной части
      Im = aRval.Im;//запись параметра мнимой части
}

Complex :: ~Complex()//описание деструтора класса, очистка памяти
{
      Re = 0.0;
      Im = 0.0;
}

void Complex ::  Set(double aRe,double aIm)//описание метода сеттера
{
      Re = aRe;//запись параметра действительной части
      Im = aIm;//запись параметра мнимой части
}

Complex :: operator double()//описание метода operator
{
      return abs();//возвращает значение метода вычисления модуля комплексного числа
}

      double Complex :: abs()//описание метода вычисления модуля комплексного числа
{
      return sqrt(Re * Re + Im * Im);//возвращает значение модуля
}

Complex Complex ::  operator + (const Complex & aRval)//описание оператора сложения, комплексная переменная
{
      Complex Result;//создание переменной Result класса Complex
      Result.Re = Re + aRval.Re;//запись переменной Result параметра действительной части
      Result.Im = Im + aRval.Im;//запись переменной Result параметра мнимой части
      return Result;//возвращение записанных параметров действительной и мнимой части
}
Complex Complex :: operator - (const Complex & aRval)//описание оператора вычитания, комплексная переменная
{
      Complex Result;//создание переменной Result класса Complex
      Result.Re = Re - aRval.Re;//запись переменной Result параметра действительной части
      Result.Im = Im - aRval.Im;//запись переменной Result параметра мнимой части
      return Result;//возвращение записанных параметров действительной и мнимой части
}

Complex Complex :: operator + (const double & aRval)//описание оператора сложения, действительная переменная
{
      Complex result;//создание переменной к result класса Complex
      result.Re = Re + aRval;//запись переменной result параметра действительной части
      result.Im = Im;//Мнимая часть без изменений
      return result;//возвращение записанных параметров действительной и мнимой части
}

Complex Complex :: operator - (const double & aRval)//описание оператора вычитания, действительная переменная
{
      Complex Result( * this);//создание переменной к Result класса Complex с указателем объекта на самого себя
      Result.Re = Re - aRval;//запись переменной Result параметра действительной части
      return Result;//возвращение записанных параметров действительной части
}

Complex Complex :: operator * (const Complex  & aRval)//описание оператора умножения, комплексная переменная
{
      Complex Result;//создание переменной Result класса Complex
      Result.Re = Re * aRval.Re - Im * aRval.Im;//запись переменной Result параметра действительной части
      Result.Im = Re * aRval.Im + Im * aRval.Re;//запись переменной Result параметра мнимой части
      return Result;//возвращение записанных параметров действительной и мнимой части
}

Complex Complex :: operator * (const double & aRval)//описание оператора умножения, действительная переменная
{
      Complex Result;//создание переменной Result класса Complex
      Result.Re = Re * aRval;//запись переменной Result параметра действительной части
      Result.Im = Im * aRval;//запись переменной Result параметра мнимой части
      return Result;//возвращение записанных параметров действительной и мнимой части
}

Complex Complex :: operator / (const double & aRval)//описание оператора деления, действительная переменная
{
      Complex Result;//создание переменной Result класса Complex
      Result.Re = Re / aRval;//запись переменной Result параметра действительной части
      Result.Im = Im / aRval;//запись переменной Result параметра мнимой части
      return Result;//возвращение записанных параметров действительной и мнимой части
}

Complex & Complex :: operator +=  (const Complex &  aRval)//описание оператора +=, комплексная переменная
{
      Re += aRval.Re;//запись параметра действительной части
      Im += aRval.Im;//запись параметра мнимой части
      return * this;//возвращение указателя на самого себя
}

Complex & Complex :: operator -= (const Complex & aRval)//описание оператора -=, комплексная переменная
{
      Re -= aRval.Re;//запись параметра действительной части
      Im -= aRval.Im;//запись параметра мнимой части
      return *this;//возвращение указателя на самого себя
}

Complex & Complex :: operator *= (const Complex & aRval)//описание оператора *=, комплексная переменная
{
      double tmpRe = Re;//создание действительной переменной и присвоение ей значение действительной части
      Re = Re * aRval.Re - Im * aRval.Im;//запись параметра действительной части
      Im = Im * aRval.Re + tmpRe * aRval.Im;//запись параметра мнимой части
      return *this;//возвращение указателя на самого себя
}

Complex & Complex :: operator += (const double & aRval)//описание оператора +=, действительная переменная
{
      Re += aRval;//запись параметра действительной части
      return * this;//возвращение указателя на самого себя
}

Complex & Complex :: operator -= (const double & aRval)//описание оператора -=, действительная переменная
{
      Re -= aRval;//запись параметра действительной части
      return * this;//возвращение указателя на самого себя
}

Complex & Complex :: operator  *=  (const  double  &  aRval)//описание оператора *=, действительная переменная
{
      Re *= aRval;//запись параметра действительной части
      Im *= aRval;//запись параметра мнимой части
      return *this;//возвращение указателя на самого себя
}

Complex & Complex :: operator /= (const double & aRval)//описание оператора /=, действительная переменная
{
      Re /= aRval;//запись параметра действительной части
      Im /= aRval;//запись параметра мнимой части
      return * this;//возвращение указателя на самого себя
}

Complex & Complex :: operator = (const Complex & aRval)//описание оператора присваивания, комплексная переменная
      Re = aRval.Re;//запись параметра действительной части
      Im = aRval.Im;//запись параметра мнимой части
      return * this;//возвращение указателя на самого себя
}

Complex & Complex :: operator = (const double & aRval)//описание оператора присваивания, действительная переменная
{
      Re = aRval;//запись параметра действительной части
      Im = 0.0;	//обнуление мнимой часть
      return * this;//возвращение указателя на самого себя
}

istream & operator >> (istream & stream, Complex & a)//перегрузка оператора >>
{
      char tmp[256];  stream >> a.Re >>
      a.Im >> tmp;
      return stream;
}
ostream & operator << (ostream & stream, Complex & a)//перегрузка оператора <<
{
      stream << a.Re;
      if(!(a.Im < 0) ) stream << '+';
      stream << a.Im << 'i';
      return stream;
}

Complex operator + (const double & aLval, const Complex & aRval)//описание оператора сложения, одна действительная переменная и одная комплексная переменная
{
      Complex Result;//создание переменной Result класса Complex
      Result.Re = aLval + aRval.Re;//запись переменной Result параметра действительной части
      Result. Im = aRval.Im;//запись переменной Result параметра мнимой части
      return Result;//возвращение записанных параметров действительной и мнимой части
}

Complex operator -(const double & aLval, const Complex&aRval)//описание оператора вычитания, одна действительная переменная и одная комплексная переменная
{
      Complex Result;//создание переменной Result класса Complex
      Result.Re = aLval - aRval.Re;//запись переменной Result параметра действительной части
      Result.Im = -aRval.Im;//запись переменной Result параметра мнимой части
      return Result;//возвращение записанных параметров действительной и мнимой части
}

Complex operator * (const double & aLval, const Complex & a)//описание оператора умножения, одна действительная переменная и одная комплексная переменная
{
      Complex r;//создание переменной r класса Complex
      r.Re = aLval * a.Re;//запись переменной r параметра действительной части
      r.Im = aLval * a.Im;//запись переменной r параметра мнимой части
      return r;//возвращение записанных параметров действительной и мнимой части
}
