// #include <iostream>
// #include <vector>
// #include <stdlib.h>

// using namespace std;

// void calculateGPA();
// void calculateCGPA();
// void method();

// int main()
// {
//     system("cls");
//     int input;
//     cout << "--------------------------------------------------------------" << endl;
//     cout << " GPA & CGPA Calculator (Developed by Ohid) " << endl;
//     cout << "--------------------------------------------------------------\n" << endl;
//     cout << " MENU:" << endl;
//     cout << " 1. Calculate GPA (Grade Point Average)" << endl;
//     cout << " 2. Calculate CGPA (Cumulative Grade Point Average)" << endl;
//     cout << " 3. Method used for calculating GPA & CGPA" << endl;
//     cout << " 4. Exit Application" << endl;
//     cout << "--------------------------------------------------------------" << endl;

//     sub:
//     cout << "Enter your choice: ";
//     cin >> input;

//     switch (input)
//     {
//         case 1:
//             calculateGPA();
//             break;

//         case 2:
//             calculateCGPA();
//             break;

//         case 3:
//             method();
//             break;

//         case 4:
//             exit(EXIT_SUCCESS);
//             break;

//         default:
//             cout << "You have entered an incorrect input. Please try again!" << endl;
//             goto sub;
//             break;
//     }
// }

// void calculateGPA()
// {
//     int q;
//     system("cls");
//     cout << "-------------- GPA Calculation -----------------" << endl;
//     cout << "How many subjects' points do you want to calculate? : ";
//     cin >> q;

//     vector<float> credit(q);
//     vector<float> point(q);

//     cout << endl;
//     for (int i = 0; i < q; i++)
//     {
//         cout << "Enter the credit for subject " << i + 1 << ": ";
//         cin >> credit[i];
//         cout << "Enter the point of subject " << i + 1 << ": ";
//         cin >> point[i];
//         cout << "-----------------------------------\n\n" << endl;
//     }

//     float sum = 0;
//     float tot;
//     for (int j = 0; j < q; j++)
//     {
//         tot = credit[j] * point[j];
//         sum += tot;
//     }

//     float totCr = 0;
//     for (int k = 0; k < q; k++)
//     {
//         totCr += credit[k];
//     }

//     cout << "\n\n\nTotal Points: " << sum << ". Total Credits: " << totCr << ". Total GPA: " << sum / totCr << "." << endl;

//     sub:
//     int inmenu;
//     cout << "\n\n\n1. Calculate Again" << endl;
//     cout << "2. Go Back to Main Menu" << endl;
//     cout << "3. Exit This App \n\n" << endl;
//     cout << "Your Input: ";
//     cin >> inmenu;

//     switch (inmenu)
//     {
//         case 1:
//             calculateGPA();
//             break;

//         case 2:
//             main();
//             break;

//         case 3:
//             exit(EXIT_SUCCESS);

//         default:
//             cout << "\n\nYou have entered an incorrect input! Please choose again!" << endl;
//             goto sub;
//     }
// }

// void calculateCGPA()
// {
//     system("cls");
//     int l;
//     cout << "-------------- CGPA Calculation -----------------\n\n" << endl;
//     cout << "How many semester results do you want to input? : ";
//     cin >> l;
//     cout << "\n\n" << endl;

//     vector<float> semrs(l);

//     for (int i = 0; i < l; i++)
//     {
//         cout << "Enter Semester " << i + 1 << " Result (GPA): ";
//         cin >> semrs[i];
//         cout << "\n" << endl;
//     }

//     float semtot = 0;
//     for (int j = 0; j < l; j++)
//     {
//         semtot += semrs[j];
//     }

//     cout << "CGPA (Cumulative Grade Point Average): " << semtot / l << endl;
// }

// void method() {
//     system("cls");
//     cout << "-------------- Method Used for Calculating GPA & CGPA -----------------" << endl;
//     cout << "This program uses a simple method for calculating GPA and CGPA." << endl;
//     cout << "GPA is calculated by multiplying the credit of each subject by its corresponding point," << endl;
//     cout << "summing these products, and dividing by the total credit." << endl;
//     cout << "CGPA is calculated by averaging the GPAs of all semesters." << endl;
//     cout << "-------------------------------------------------------------------------" << endl;
// }


#include <iostream>
#include <vector>
#include <stdlib.h>

using namespace std;

void calculateGPA();
void calculateCGPA();
void method();

int main()
{
    system("cls");
    int input;
    cout << "--------------------------------------------------------------" << endl;
    cout << " GPA & CGPA Calculator (Developed by Ohid) " << endl;
    cout << "--------------------------------------------------------------\n" << endl;
    cout << " MENU:" << endl;
    cout << " 1. Calculate GPA (Grade Point Average)" << endl;
    cout << " 2. Calculate CGPA (Cumulative Grade Point Average)" << endl;
    cout << " 3. Method used for calculating GPA & CGPA" << endl;
    cout << " 4. Exit Application" << endl;
    cout << "--------------------------------------------------------------" << endl;

    while (true)
    {
        cout << "Enter your choice: ";
        cin >> input;

        switch (input)
        {
            case 1:
                calculateGPA();
                break;

            case 2:
                calculateCGPA();
                break;

            case 3:
                method();
                break;

            case 4:
                exit(EXIT_SUCCESS);
                break;

            default:
                cout << "You have entered an incorrect input. Please try again!" << endl;
                break;
        }
    }
}

void calculateGPA()
{
    int q;
    system("cls");
    cout << "-------------- GPA Calculation -----------------" << endl;
    cout << "How many subjects' points do you want to calculate? : ";
    cin >> q;

    vector<float> credit(q);
    vector<float> point(q);

    cout << endl;
    for (int i = 0; i < q; i++)
    {
        cout << "Enter the credit for subject " << i + 1 << ": ";
        cin >> credit[i];
        cout << "Enter the point of subject " << i + 1 << ": ";
        cin >> point[i];
        cout << "-----------------------------------\n\n" << endl;
    }

    float sum = 0;
    float tot;
    for (int j = 0; j < q; j++)
    {
        tot = credit[j] * point[j];
        sum += tot;
    }

    float totCr = 0;
    for (int k = 0; k < q; k++)
    {
        totCr += credit[k];
    }

    cout << "\n\n\nTotal Points: " << sum << ". Total Credits: " << totCr << ". Total GPA: " << sum / totCr << "." << endl;

    int inmenu;
    cout << "\n\n\n1. Calculate Again" << endl;
    cout << "2. Go Back to Main Menu" << endl;
    cout << "3. Exit This App \n\n" << endl;
    cout << "Your Input: ";
    cin >> inmenu;

    switch (inmenu)
    {
        case 1:
            calculateGPA();
            break;

        case 2:
            return; // Return to the main menu
            break;

        case 3:
            exit(EXIT_SUCCESS);
            break;

        default:
            cout << "\n\nYou have entered an incorrect input! Please choose again!" << endl;
            break;
    }
}

void calculateCGPA()
{
    system("cls");
    int l;
    cout << "-------------- CGPA Calculation -----------------\n\n" << endl;
    cout << "How many semester results do you want to input? : ";
    cin >> l;
    cout << "\n\n" << endl;

    vector<float> semrs(l);

    for (int i = 0; i < l; i++)
    {
        cout << "Enter Semester " << i + 1 << " Result (GPA): ";
        cin >> semrs[i];
        cout << "\n" << endl;
    }

    float semtot = 0;
    for (int j = 0; j < l; j++)
    {
        semtot += semrs[j];
    }

    cout << "CGPA (Cumulative Grade Point Average): " << semtot / l << endl;

    int inmenu;
    cout << "\n\n\n1. Calculate Again" << endl;
    cout << "2. Go Back to Main Menu" << endl;
    cout << "3. Exit This App \n\n" << endl;
    cout << "Your Input: ";
    cin >> inmenu;

    switch (inmenu)
    {
        case 1:
            calculateCGPA();
            break;

        case 2:
            return; // Return to the main menu
            break;

        case 3:
            exit(EXIT_SUCCESS);
            break;

        default:
            cout << "\n\nYou have entered an incorrect input! Please choose again!" << endl;
            break;
    }
}

void method() {
    system("cls");
    cout << "-------------- Method Used for Calculating GPA & CGPA -----------------" << endl;
    cout << "This program uses a simple method for calculating GPA and CGPA." << endl;
    cout << "GPA is calculated by multiplying the credit of each subject by its corresponding point," << endl;
    cout << "summing these products, and dividing by the total credit." << endl;
    cout << "CGPA is calculated by averaging the GPAs of all semesters." << endl;
    cout << "-------------------------------------------------------------------------" << endl;

    int inmenu;
    cout << "\n\n\n1. Calculate Again" << endl;
    cout << "2. Go Back to Main Menu" << endl;
    cout << "3. Exit This App \n\n" << endl;
    cout << "Your Input: ";
    cin >> inmenu;

    switch (inmenu)
    {
        case 1:
            method();
            break;

        case 2:
            return; // Return to the main menu
            break;

        case 3:
            exit(EXIT_SUCCESS);
            break;

        default:
            cout << "\n\nYou have entered an incorrect input! Please choose again!" << endl;
            break;
    }
}
