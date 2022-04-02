#include <iostream>
#include <queue>
#include <ctime>

using namespace std;

int currentState = 0;

void printQueue(queue<int> myQueue)
{
    queue<int> TempQueue;
    TempQueue = myQueue;

    while(!TempQueue.empty())
    {
        cout << TempQueue.front() << "  ";
        TempQueue.pop();
    }
    cout << endl;
}


void showFirstScreen()
{
    cout << "Welcome!" << endl;
    cout << "What do you want to do?" << endl;
    cout << "[1] Insert a person to queue" << endl;
    cout << "[2] Display chosen queue" << endl;
    cout << "[3] Call next person" << endl;
    cout << "[9] Shut down the program" << endl;
    cout << "Your choice: " ;
}


void showInsertScreen()
{
    cout << "Welcome!" << endl;
    cout << "[1] Sign for queue (YEAR 1)" << endl;
    cout << "[2] Sign for queue (YEAR 2)" << endl;
    cout << "[3] Sign for queue (YEAR 3)" << endl;
    cout << "[4] Sign for queue (YEAR 4)" << endl;
    cout << "[5] Sign for queue (YEAR 5)" << endl;
    cout << "[0] Return " << endl;
    cout << endl << "Your choice: " << endl;
}

void showDisplayScreen()
{
    cout << "[1] Display queue (YEAR 1)" << endl;
    cout << "[2] Display queue (YEAR 2)" << endl;
    cout << "[3] Display queue (YEAR 3)" << endl;
    cout << "[4] Display queue (YEAR 4)" << endl;
    cout << "[5] Display queue (YEAR 5)" << endl;
    cout << "[0] Return " << endl;
    cout << endl << "Your choice: " << endl;
}

void showCallScreen()
{
    cout << "[q] Call next student (YEAR 1)" << endl;
    cout << "[w] Call next student (YEAR 2)" << endl;
    cout << "[e] Call next student (YEAR 3)" << endl;
    cout << "[r] Call next student (YEAR 4)" << endl;
    cout << "[t] Call next student (YEAR 5)" << endl;
    cout << "[0] Return " << endl;
    cout << endl << "Your choice: " << endl;
}

void clearScreen()
{
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
}

void InsertChoice(queue<int>& Q1, queue<int>& Q2, queue<int>& Q3, queue<int>& Q4, queue<int>& Q5)
{
    int operation, student_ID;
    cin >> operation;
    switch(operation)
    {
    case 0:
        currentState = 0;
        clearScreen();
        break;

        case 1:
            cout << endl << "Enter your ID: ";
            cin >> student_ID;
            Q1.push(student_ID);
            clearScreen();
            cout << "Student: " << student_ID << " succesfully added to YEAR's 1 queue!" << endl << endl;
            break;
        case 2:
            cout << endl << "Enter your ID: ";
            cin >> student_ID;
            Q2.push(student_ID);
            clearScreen();
            cout << "Student: " << student_ID << " succesfully added to YEAR's 2 queue!" << endl << endl;
            break;
        case 3:
            cout << endl << "Enter your ID: ";
            cin >> student_ID;
            Q3.push(student_ID);
            clearScreen();
            cout << "Student: " << student_ID << " succesfully added to YEAR's 3 queue!" << endl << endl;
            break;
        case 4:
            cout << endl << "Enter your ID: ";
            cin >> student_ID;
            Q4.push(student_ID);
            clearScreen();
            cout << "Student: " << student_ID << " succesfully added to YEAR's 4 queue!" << endl << endl;
            break;
        case 5:
            cout << endl << "Enter your ID: ";
            cin >> student_ID;
            Q5.push(student_ID);
            clearScreen();
            cout << "Student: " << student_ID << " succesfully added to YEAR's 5 queue!" << endl << endl;
            break;
        default:
            cout << "There is no such an option. " << endl;
            break;
    }
}

void DisplayChoice(queue<int> Q1, queue<int> Q2, queue<int> Q3, queue<int> Q4, queue<int> Q5)
{
    int operation;
    cin >> operation;
    switch(operation)
    {
    case 0:
        currentState = 0;
        break;
    case 1:
        cout << "Year's 1 queue is: ";
        printQueue(Q1);
        break;
    case 2:
        cout << "Year's 2 queue is: ";
        printQueue(Q2);
        break;
    case 3:
        cout << "Year's 3 queue is: ";
        printQueue(Q3);
        break;
    case 4:
        cout << "Year's 4 queue is: ";
        printQueue(Q4);
        break;
    case 5:
        cout << "Year's 5 queue is: ";
        printQueue(Q5);
        break;
    default:
        cout << "There is no such an option. " << endl;
        break;
    }
}

void CallChoice(queue<int>& Q1, queue<int>& Q2, queue<int>& Q3, queue<int>& Q4, queue<int>& Q5)
{
    char operation;
    cin >> operation;
    switch(operation)
    {
    case '0':
        currentState = 0;
        break;
    case 'q':
        if(!Q1.empty())
        {
            cout << "Student with ID: " << Q1.front() << " from year 1 can enter." << endl;
            Q1.pop();
        }else {cout << "The Queue for year 1 is empty!" << endl;}

        break;
    case 'w':
        if(!Q2.empty())
        {
            cout << "Student with ID: " << Q2.front() << " from year 2 can enter." << endl;
            Q2.pop();
        }else {cout << "The Queue for year 2 is empty!" << endl;}

        break;
    case 'e':
        if(!Q3.empty())
        {
            cout << "Student with ID: " << Q3.front() << " from year 3 can enter." << endl;
            Q3.pop();
        }else {cout << "The Queue for year 3 is empty!" << endl;}

        break;
    case 'r':
        if(!Q4.empty())
        {
            cout << "Student with ID: " << Q4.front() << " from year 4 can enter." << endl;
            Q4.pop();
        }else {cout << "The Queue for year 4 is empty!" << endl;}
        break;
    case 't':
        if(!Q5.empty())
        {
            cout << "Student with ID: " << Q5.front() << " from year 5 can enter." << endl;
            Q5.pop();
        }else {cout << "The Queue for year 5 is empty!" << endl;}
        break;
    default:
        cout << "There is no such an option. " << endl;
        break;
    }
}


int main()
{
    queue<int> Q1, Q2, Q3, Q4, Q5;

    int state = 1;

    while(state)
    {
        switch(currentState)
        {
        case 0:
            clearScreen();
            showFirstScreen();
            cin >> currentState;
            break;
        case 1:
            clearScreen();
            showInsertScreen();
            InsertChoice(Q1, Q2, Q3, Q4, Q5);
            break;
        case 2:
            clearScreen();
            showDisplayScreen();
            DisplayChoice(Q1, Q2, Q3, Q4, Q5);
            break;
        case 3:
            clearScreen();
            showCallScreen();
            CallChoice(Q1, Q2, Q3, Q4, Q5);
            break;
        case 9:
            return 0;
            break;
        default:
            cout << "There is no such an option. " << endl;
            break;
        }

    }

    return 0;
}
