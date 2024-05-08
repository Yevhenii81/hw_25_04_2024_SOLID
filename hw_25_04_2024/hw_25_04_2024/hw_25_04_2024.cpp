#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Date {
private:
	int day;
	int month;
	int year;
public:

	void SetDay(int day) {
		this->day = day;
	}

	int GetDay() {
		return day;
	}

	void SetMonth(int month) {
		this->month = month;
	}

	int GetMonth() {
		return month;
	}

	void SetYear(int year) {
		this->year = year;
	}

	int GetYear() {
		return year;
	}
};

class Address 
{
private:
    string country;
    string region;
    string city;
    string street;
    int house_number;
    string korpus;
    short postal_code;

public:
	void SetCountry(string country) {
		this->country = country;
	}

	void SetRegion(string region) {
		this->region = region;
	}

	void SetCity(string city) {
		this->city = city;
	}

	void SetHouseNumber(int house_number) {
		this->house_number = house_number;
	}

	void SetKorpus(string korpus) {
		this->korpus = korpus;
	}

	void SetPostalCode(short postal_code) {
		this->postal_code = postal_code;
	}

	string GetCountry() {
		return country;
	}

	string GetRegion() {
		return region;
	}

	string GetCity() {
		return city;
	}

	int GetHouseNumber() {
		return house_number;
	}

	string GetKorpus() {
		return korpus;
	}

	short GetPostalCode() {
		return postal_code;
	}
};

class ZodiacSign
{
private:
	string znak_zodiaka;
public:

	void SetZnakZodiaka(string znak_zodiaka) {
		this->znak_zodiaka = znak_zodiaka;
	}

	string GetZnakZodiaka() {
		return znak_zodiaka;
	}
};

class Lesson {
private:
	int lessons_visited;
	int lessons_late;
public:

	void LessonsLate(int lessons_late) {
		this->lessons_late = lessons_late;
	}

	void SetLessonsVisited(int lessons_visited) {
		this->lessons_visited = lessons_visited;
	}

	int GetLessonsLate() {
		return lessons_late;
	}

	int GetLessonsVisited() {
		return lessons_visited;
	}
};

class Person abstract {
	string name;
	string surname;
	string last_name;
	int age;
	Date* birthday = new Date();
public:

	Person(string name, string surname, string last_name, int age, int day, int month, int year) {
		SetName(name);
		SetSurname(surname);
		SetLastName(last_name);
		SetAge(age);
		birthday->SetDay(day);
		birthday->SetMonth(month);
		birthday->SetYear(year);
	}

	int GetYear() {
		return birthday->GetYear();
	}

	int GetMonth() {
		return birthday->GetMonth();
	}

	int GetDay() {
		return birthday->GetDay();
	}

	void SetAge(int age) {
		this->age = age;
	}

	int GetAge() {
		return age;
	}

	void SetLastName(string last_name) {
		this->last_name = last_name;
	}

	string GetLastName() {
		return last_name;
	}

	void SetSurname(string surname) {
		this->surname = surname;
	}

	string GetSurname() {
		return surname;
	}

	void SetName(string name) {
		this->name = name;
	}

	string GetName() {
		return name;
	}

	~Person() {
		delete birthday;
	}
};

class Rate {
private:
	vector<int> home_work_rates;
	vector<int> practice_rates;
	vector<int> exam_rates;
	vector<int> zachet_rates;
	int dz_count = 0;
	int practice_count = 0;
	int exam_count = 0;
	int zachet_count = 0;
	int dz_average_rate = 0;
public:

	int GetHW() {
		for (int i = 0; i < home_work_rates.size(); i++) {
			return home_work_rates[i];
		}
	}

	int GetPractice() {
		for (int i = 0; i < practice_rates.size(); i++) {
			return practice_rates[i];
		}
	}

	int GetExam() {
		for (int i = 0; i < exam_rates.size(); i++) {
			return exam_rates[i];
		}
	}

	int GetZachetks() {
		for (int i = 0; i < zachet_rates.size(); i++) {
			return zachet_rates[i];
		}
	}

	void AddDzRates(int rate) {
		dz_count++;
		home_work_rates.push_back(rate);
	}

	int GetDzCount() {
		return dz_count;
	}

	void AddPracticeRates(int rate) {
		practice_count++;
		practice_rates.push_back(rate);
	}

	int GetPracticCount() {
		return practice_count;
	}

	void AddExamRates(int rate) {
		exam_count++;
		exam_rates.push_back(rate);
	}

	int GetExamCount() {
		return exam_count;
	}

	void AddZachetRates(int rate) {
		zachet_count++;
		zachet_rates.push_back(rate);
	}

	int GetZachetCount() {
		return zachet_count;
	}
};

class AverageScore {
private:
	int dz_average_rate = 0;
	int practice_average_rate = 0;
	int exam_average_rate = 0;
	int zachet_average_rate = 0;
	double total_average_rate = 0;
public:
};

class Student : public Person{
private:
	Rate* rate = new Rate();
public:

	Student(string firstname, string surname, string lastname, int age, int day, int month, int year) : Person(firstname, surname, lastname, age, day, month, year){}
};

class Group {
private:
	int course;
	string group_name;
	string specialization;
	int students_count = 0;
	vector<Student> student;
public:

	Group(string group_name, string specialization, int course) {
		SetGroupName(group_name);
		SetSpecialization(specialization);
		SetСourse(course);
	}

	void SetStudentsCount(int students_count) {
		this->students_count = students_count;
	}

	int GetStudentCount() {
		return students_count;
	}

	void SetСourse(int course) {
		this->course = course;
	}

	int GetСourse() {
		return course;
	}

	void SetGroupName(string group_name) {
		this->group_name = group_name;
	}

	string GetGroupName() {
		return group_name;
	}

	void SetSpecialization(string specialization) {
		this->specialization = specialization;
	}

	string GetSpecialization() {
		return specialization;
	}
};

class PrintStudent
{
public:
	void Print(Student& student)
	{
		cout << "Name: " << student.GetName() << "\n";
		cout << "Surname: " << student.GetSurname() << "\n";
		cout << "Last name: " << student.GetLastName() << "\n";
		cout << "Age: " << student.GetAge() << "\n";
		cout << "Birthday: " << student.GetDay() << "." << student.GetMonth() << "." << student.GetYear() << "\n";
	}
};

class PrintGroup
{
public:
	void Print(Group& group)
	{
		cout << "Group name: " << group.GetGroupName() << "\n";
		cout << "Specialization : " << group.GetSpecialization() << "\n";
		cout << "Course: " << group.GetСourse() << "\n";
		cout << "Group name: " << group.GetGroupName() << "\n";
	}
};

int main()
{
	Student student("Yevhenii", "Shostak", "Stanislavovich", 18, 11, 8, 2005);
	
	PrintStudent print;
	print.Print(student);
}