//program name: university timetable
//author: Barry Dickson
//description: This program will give you the class schedules at coventry university.

#include <iostream>
#include<string>
#include<conio.h>

using namespace std;

string day[7] = { "sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturday" }; // an array of the 7 days of the week

int main() {

	string day;

    cout<<"enter day"<<endl; // this gets user input to display the inputed data
    cin>> day;

	if (day == "monday") {

		cout << "computer science activity led learning project 2" << endl;
		cout << "Time: 10:00 am To 12:00 pm" << endl;
		cout << "lecturer: Simon Billings" << endl;
		cout << "lecture room: online\n" << endl;
		cout << "database systems" << endl;
		cout << "Time: 2:00 pm To 4:00 pm" << endl;
		cout << "lecture: Diana Hintea" << endl;
		cout << "lecture room: online" << endl;

	}

            else if (day == "tuesday") {

			cout << "object oriented programming(OOP)" << endl;
			cout << "Time: 2:00 pm To 4:00 pm" << endl;
			cout << "lecturer: David Croft" << endl;
			cout << "lecture room: online\n" << endl;

		}
    else if (day == "wednesday") {

				cout << "computer science activity led learning project 2" << endl;
				cout << "Time: 10:00 am To 12:00 pm" << endl;
				cout << "lecturer: Simon Billings" << endl;
				cout << "lecture room: online\n" << endl;
				cout << "computer architecture and networks" << endl;
				cout << "Time: 1:00 pm To 3:00 pm" << endl;
				cout << "lecture: Mohamed Abdelshafy" << endl;
				cout << "lecture room: online" << endl;

			}
			else if (day == "thursday") {

					cout << "computer science activity led learning project 2" << endl;
					cout << "Time: 12:00 pm To 2:00pm" << endl;
					cout << "lecturer: Simon Billings" << endl;
					cout << "lecture room: online" << endl;
				}
    else if(day == "friday") {

						cout << "database systems" << endl;
						cout << "Time: 10:00 am To 12:00pm" << endl;
						cout << "lecturer: Diana Hintea" << endl;
						cout << "lecture room: online\n" << endl;
						cout << "introduction to negotiation" << endl;
						cout << "Time: 2:00pm To 4:00pmn" << endl;
						cout << "lecture: Bridget Irene" << endl;
						cout << "lecture room: online" << endl;
					}

            else if (day == "saturday") {

							cout << "there are no classes today" << endl;
						}

    else if(day == "sunday") {

								cout << "there are no classes today" << endl;
							}

    else
        {
            cout<<"invalid day"<< endl; // if user input doest match any of the above conditions, the user gets another try.
            cout<<"try again"<<endl;
            cin >>day;


    return 0;

						}
}





