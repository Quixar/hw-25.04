#include <iostream>
#include <vector>
using namespace std;

class Person {
	string firstname;
	string surname;
	string lastname;
};

class Address {
	string country;
	string region;
	string city;
	string street;
	string korpus;
	int house_number;
	short postal_code;
};

class Birthday {
	int birth_day; // день рождения
	int birth_month; // месяц рождения
	int birth_year; // год рождения
};

class Znak_zodiaka {
	string znak_zodiaka;
};

class Study_dates {
	int start_day; // день поступления в универ
	int start_month; // месяц поступления в универ
	int start_year; // год поступления в универ
};

class Group {
	int kurs;
	string group_name;
	string specialization;
	int students_count; 
};

class Attendance {
	int lessons_visited; // сколько пар было посещено за всё время
	int lessons_late; // сколько было опозданий
};

class Teacher {
	string teacher_name;
	string subject_name;
};

class Marks {
	vector<int> dz_rates;
	vector<int> practice_rates;
	vector<int> exam_rates;
	vector<int> zachet_rates;
	float dz_average_rate;
	float practice_average_rate;
	float exam_average_rate;
	float zachet_average_rate;
	double total_average_rate;
};

class Student {
	Person person;
	Address address;
	Birthday birthday;
	Znak_zodiaka znak_zodiaka;
	Study_dates study_dates;
	Group group;
	Attendance attendance;
	Teacher teacher;
	Marks marks;
};

int main() {

}