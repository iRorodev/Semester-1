// Fizza Ali 22i8787 Question 7

#include <iostream>
using namespace std;
int main()
{
	system("cls");
	int inq, sub, edu_sys, choise, relation, scholarship = 0;
	float o_level, a_level, matric, fsc, add_math;
	float students_merit, required_merit, extra;

	cout << "Do you want to inquire eligibility of admissions or scholarship?" << endl;
	cout << "1 - Eligibility of admissions" << endl;
	cout << "2 - Scholarships" << endl;
	cout << "Enter :: ";
	cin >> inq;

	switch (inq)
	{
	case 1:
	{
		cout << "Which educational system was opted?" << endl;
		cout << "[1] O/A Levels" << endl;
		cout << "[2] Matric/FSC" << endl;
		cout << "Enter :: ";
		cin >> edu_sys;

		if (edu_sys == 1)
		{
			cout << "Enter O-level percentage: ";
			cin >> o_level;
			cout << "Enter A-level percentage: ";
			cin >> a_level;
		}
		else
		{
			cout << "Enter matric percentage: ";
			cin >> matric;
			cout << "Enter FSC percentage: ";
			cin >> fsc;
		}

		cout << "What was your subject choice?" << endl;
		cout << "[1] Pre-medical" << endl;
		cout << "[2] Pre-engineering" << endl;
		cout << "Enter :: ";
		cin >> sub;

		if (sub == 1)
		{
			cout << "What was your add math exam percentage? ";
			cin >> add_math;
		}
		cout << "--------------------------------------" << endl;
		cout << "ID    Degree                       Merit" << endl;
		cout << "1     BS Software Eng.              79% " << endl;
		cout << "2     BS Computer Sciences          80% " << endl;
		cout << "3     BS Artificial Intelligence    75% " << endl;
		cout << "4     BS Data Sciences              76% " << endl;
		cout << "5     BS Cyber Security             77% " << endl;
		cout << "6     BS Electrical Engineering     76% " << endl;
		cout << "Which Degree Do you want to apply too? :: ";
		cin >> choise;

		if (choise == 1)
			required_merit = 79;
		else if (choise == 2)
			required_merit = 80;
		else if (choise == 3)
			required_merit = 75;
		else if (choise == 4)
			required_merit = 76;
		else if (choise == 5)
			required_merit = 77;
		else if (choise == 6)
			required_merit = 76;
		else
		{
			cout << "Please enter correctly " << endl;
			cout << "--------------------------------------" << endl;
			cout << "ID    Degree                       Merit" << endl;
			cout << "1     BS Software Eng.              79% " << endl;
			cout << "2     BS Computer Sciences          80% " << endl;
			cout << "3     BS Artificial Intelligence    75% " << endl;
			cout << "4     BS Data Sciences              76% " << endl;
			cout << "5     BS Cyber Security             77% " << endl;
			cout << "6     BS Electrical Engineering     76% " << endl;
			cout << "Which Degree Do you want to apply too?  :: ";
			cin >> choise;
			if (choise == 1)
				required_merit = 79;
			else if (choise == 2)
				required_merit = 80;
			else if (choise == 3)
				required_merit = 75;
			else if (choise == 4)
				required_merit = 76;
			else if (choise == 5)
				required_merit = 77;
			else if (choise == 6)
				required_merit = 76;
			else
			{
				cout << "You have entered wrong input twice" << endl;
				cout << "You are not eligible becaause you are clearly stupid" << endl;
				return 0;
			}
		}

		if (edu_sys == 1)
		{
			if (sub == 1)
			{
				if (add_math >= 50)
				{
					students_merit = 0.15 * o_level + 0.35 * a_level;
					extra = 2 * (required_merit - students_merit);
					cout << "-----------------------------------------------------------------" << endl;
					cout << "You need " << extra << " % marks in admission test to be eligible" << endl;
					cout << "Which equals to about " << (extra / 100) * 250 << " marks out of 250 " << endl;
				}
				else
					cout << "Your percentage in maths is less than 50 %, you are not eligible" << endl;
			}
			else
			{
				students_merit = 0.15 * o_level + 0.35 * a_level;
				extra = 2 * (required_merit - students_merit);
				cout << "-----------------------------------------------------------------" << endl;
				cout << "You need " << extra << " % marks in admission test to be eligible" << endl;
				cout << "Which equals to about " << (extra / 100) * 250 << " marks out of 250 " << endl;
			}
		}
		else
		{
			if (sub == 1)
			{
				if (add_math > 50)
				{
					students_merit = 0.15 * matric + 0.35 * fsc;
					extra = 2 * (required_merit - students_merit);
					cout << "-----------------------------------------------------------------" << endl;
					cout << "You need " << extra << " % marks in admission test to be eligible" << endl;
					cout << "Which equals to about " << (extra / 100) * 250 << " marks out of 250 " << endl;
				}
				else
					cout << "Your percentage in maths is less than 50 %, you are not eligible" << endl;
			}
			else
			{
				students_merit = 0.15 * matric + 0.35 * fsc;
				extra = 2 * (required_merit - students_merit);
				cout << "-----------------------------------------------------------------" << endl;
				cout << "You need " << extra << " % marks in admission test to be eligible" << endl;
				cout << "Which equals to about " << (extra / 100) * 250 << " marks out of 250 " << endl;
			}
		}
		break;
	}

	case 2:
	{
		cout << "Which educational system was opted?" << endl;
		cout << "[1] O/A Level" << endl;
		cout << "[2] Matric/FSC" << endl;
		cout << "[3] FAST NUCES alumnus is family" << endl;
		cout << "Enter ::" ;
		cin >> edu_sys;

		if (edu_sys == 1)
		{
			cout << "Enter O-level percentage: " ;
			cin >> o_level;
			cout << "Enter A-level percentage: " ;
			cin >> a_level;

			if (o_level > 90)
				scholarship = 10;
			if (a_level > 90)
				scholarship = 30;
		}
		else if (edu_sys == 2)
		{
			cout << "Enter matric percentage: " ;
			cin >> matric;
			cout << "Enter FSC percentage: " ;
			cin >> fsc;

			if (matric > 90)
				scholarship = 10;
			if (fsc > 90)
				scholarship = 30;
		}
		else
		{
			cout << "Press 1 if the relation is Blood related" << endl;
			cout << "Press 2 if the relation is Maternal or Paternal" << endl;
			cin >> relation;
			if (relation == 1)
				scholarship = 20;
			else
				scholarship = 10;
		}
		if (scholarship != 0)
			cout << "Your scholarship is :: " << scholarship << " %" << endl;
		else
			cout << "You get no ScholarShip becasue you meet no requirements" << endl;
		break;
	}
	}
	return 0;
}
