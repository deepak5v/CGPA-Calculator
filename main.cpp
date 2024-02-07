#include <iostream>
#include <cstdlib> // For exit()
#include <limits>  // For numeric_limits

using namespace std;

// Function prototypes
void calculateGPA();
void calculateCGPA();
void displayMethod();

int main()
{
    int choice;
    
    while (true) {
        system("cls");
        cout << "---------------------------------------------------" << endl;
        cout << "             GPA & CGPA Calculator                " << endl;
        cout << "---------------------------------------------------" << endl;
        cout << "                 MENU:                             " << endl;
        cout << "                1. Calculate GPA                   " << endl;
        cout << "                2. Calculate CGPA                  " << endl;
        cout << "                3. Methodology                     " << endl;
        cout << "                4. Exit Application                " << endl;
        cout << "---------------------------------------------------" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                calculateGPA();
                break;

            case 2:
                calculateCGPA();
                break;

            case 3:
                displayMethod();
                break;

            case 4:
                cout << "Exiting application." << endl;
                exit(EXIT_SUCCESS);

            default:
                cout << "Invalid input. Please try again." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                break;
        }
    }

    return 0;
}

void calculateGPA()
{
    int numOfSubjects;
    float credits[50];
    float points[50];

    system("cls");
    cout << "-------------- GPA Calculation -----------------" << endl;
    cout << "How many subjects' grades do you want to calculate? : ";
    cin >> numOfSubjects;

    cout << endl;
    float sum = 0;
    float totalCredits = 0;

    for(int i = 0; i < numOfSubjects; i++)
    {
        cout << "Enter the credits for subject " << i + 1 << ": ";
        cin >> credits[i];
        cout << "Enter the grade points for subject " << i + 1 << ": ";
        cin >> points[i];
        cout << "-----------------------------------\n" << endl;
        
        sum += credits[i] * points[i];
        totalCredits += credits[i];
    }

    cout << "Total GPA: " << sum / totalCredits << endl;
    cout << "Press any key to continue..." << endl;
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
}

void calculateCGPA()
{
    int numOfSemesters;
    float semesterGPA[20] = {0}; // Initialize to zeros

    system("cls");
    cout << "-------------- CGPA Calculation -----------------" << endl;
    cout << "How many semesters' grades do you want to input? :";
    cin >> numOfSemesters;
    cout << endl;

    float totalGPA = 0;

    for(int i = 0; i < numOfSemesters; i++)
    {
        cout << "Enter Semester " << i + 1 << " GPA: ";
        cin >> semesterGPA[i];
        cout << endl;

        totalGPA += semesterGPA[i];
    }

    cout << "Your CGPA is: " << totalGPA / numOfSemesters << endl;
    cout << "Press any key to continue..." << endl;
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
}

void displayMethod()
{
    system("cls");
    cout << "--------------- Method of Calculating GPA & CGPA ---------------" << endl;
    cout << "GPA = Sum of (Credit * Grade Point) / Total Credits" << endl;
    cout << "CGPA = Sum of GPA / Number of Semesters" << endl;
    cout << "-----------------------------------------------------------------" << endl;
    cout << "Press any key to continue..." << endl;
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
}
