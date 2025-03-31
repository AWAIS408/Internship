#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct course {
    string course_name;
    int credit_hours;
    string grade;
};

double gradeToPoint(string grade) {
    if (grade == "A") return 4.0;
    if (grade == "A-") return 3.7;
    if (grade == "B+") return 3.4;
    if (grade == "B") return 3.2;
    if (grade == "B-") return 2.8;
    if (grade == "C+") return 2.5;
    if (grade == "C") return 2.2;
    if (grade == "C-") return 1.8;               
    if (grade == "D+") return 1.5;
    if (grade == "D") return 1.2;
    if (grade == "F") return 0.0;
    return -1; 
}

double calc_gpa(course courses[], int numCourses) {
    double total_credits = 0, total_grade_points = 0;
                                                    
    for (int i = 0; i < numCourses; i++) {
        double grade_points = gradeToPoint(courses[i].grade);

        if (grade_points == -1) {
            cout << "Invalid Grade entered for " << courses[i].course_name << "\n";
            return -1;
        }
        total_grade_points += grade_points * courses[i].credit_hours;
        total_credits += courses[i].credit_hours;
    }
    return total_credits > 0 ? total_grade_points / total_credits : 0;
}


int main() {
    int semesters;
    cout << "Enter the number of semesters: ";
    cin >> semesters;

    double cumulative_grade_points = 0, cumulative_credits = 0;

    for (int sem = 1; sem <= semesters; sem++) {
        int numCourses;
        cout << "\nEnter the number of courses for Semester " << sem << ": ";
        cin >> numCourses;

        course* courses = new course[numCourses];

        double total_credits = 0; 

        for (int i = 0; i < numCourses; i++) {
            cout << "\nEnter details for Course " << i + 1 << ":\n";
            cout << "Course Name: ";
            cin >> courses[i].course_name;
            cout << "Credit Hours: ";
            cin >> courses[i].credit_hours;
            total_credits += courses[i].credit_hours;


            bool validGrade = false;
            do {
                cout << "Course Grade (A / A- / B+ / B / B- / C+ / C / C- / D+ / D / F): ";
                cin >> courses[i].grade;
                if (gradeToPoint(courses[i].grade) != -1) {
                    validGrade = true;
                } else {
                    cout << "Invalid Grade! Please enter a valid grade.\n";
                }
            } while (!validGrade);
        }

        double sem_gpa = calc_gpa(courses, numCourses);
        if (sem_gpa == -1) {
            delete[] courses;
            return 1;
        } else {
            cout << "\n-------------------------------------\n";
            cout << "   Semester " << sem << " GPA: " << fixed << setprecision(2) << sem_gpa << endl;
            cout << "-------------------------------------\n\n";
        }

        cumulative_grade_points += sem_gpa * total_credits;
        cumulative_credits += total_credits;
                    
        delete[] courses; 
    }

    double CGPA = cumulative_credits > 0 ? cumulative_grade_points / cumulative_credits : 0;
    cout << "\n=====================================\n";
    cout << "   Overall CGPA: " << fixed << setprecision(2) << CGPA << endl;
    cout << "=====================================\n";

    return 0;
}
