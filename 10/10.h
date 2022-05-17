#pragma once
#include <iostream>
using namespace std;

class Human
{
protected:
	string surname, name, midname;
	int age;
public: 
	Human()
	{
		surname = " ";
		name = " ";
		midname = " ";
		age = 0;
	}
	Human(string surname, string name, string midname, int age)
	{
		this->surname = surname;
		this->name = name;
		this->midname = midname;
		this->age = age;
	}

	virtual void print() = 0;
};

class Student : public Human
{
private:
	bool on_lesson;
public:
	Student() : Human()
	{
		on_lesson = 0;
	}
	Student(string surname, string name, string midname, int age, bool on_lesson): Human(name, surname, midname, age)
	{
		this->on_lesson = on_lesson;
	}
	void print() override;
};

class Boss : public Human
{
private:
	int number_of_workers;
public:
	Boss() : Human()
	{
		number_of_workers = 0;
	}
	Boss(string surname, string name, string midname, int age, int number_of_workers): Human(name, surname, midname, age)
	{
		this->number_of_workers = number_of_workers;
	}
	void print() override;
};