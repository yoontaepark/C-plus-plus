#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Employee {
public:
    Employee(int new_empId, double new_empHourlyRate, string new_empName);
    int getEmpId() const { return empId; }
    string getEmpName() const { return empName; }
    double  getEmpHourlyRate() const { return empHourlyRate; }

private:
    int empId;
    double empHourlyRate;
    string empName;

};

Employee::Employee(int new_empId, double new_empHourlyRate, string new_empName) {
    empId = new_empId;
    empHourlyRate = new_empHourlyRate;
    empName = new_empName;
}


struct Node {
    Employee* data;
    Node* next;
    Node* prev;
};


class LLinkedList {
public:
    LLinkedList() { start = nullptr; }
    void addEmployee(int id, double hourlyRate, string name);
    Node* getStart() const { return start; }

private:
    Node* start;
};

void LLinkedList::addEmployee(int id, double hourlyRate, string name) {
    Employee* e = new Employee(id, hourlyRate, name);
    Node* q = new Node;
    q->data = e;
    q->next = nullptr;
    q->prev = nullptr;
    if (start == nullptr) {
        start = q;
        return;
    }
    else {
        Node* p = start;
        while (p->next != nullptr) {
            p = p->next;
        }
        p->next = q;
        q->prev = p;
    }

}

void openInputFile(ifstream& inFile) {
    string filename;
    cout << "What filename? ";
    cin >> filename;
    inFile.open(filename); 
    while (!inFile) { 
        cout << "File failed to open!" << endl;
        cout << "What filename? ";
        cin >> filename;
        inFile.clear();  
        inFile.open(filename); 
    }
}

int main() {

    ifstream inFile;
    openInputFile(inFile);

    int id;
    double hourlyRate;
    string name;
    LLinkedList empList;
    int counter = 0;


    while (inFile >> id) {
        inFile >> hourlyRate;
        inFile.ignore(9999, ' ');
        getline(inFile, name);
        empList.addEmployee(id, hourlyRate, name);
    }

    ifstream inFile2;
    openInputFile(inFile2);

    int file2Id[10];
    int file2Hours[10];

    Node* p = empList.getStart();

    cout << "*********Payroll Information********" << endl;
    

    while (inFile2 >> file2Id[counter]) {
        inFile2 >> file2Hours[counter];
        counter++;
    }


    while (p != nullptr) {
        double pay = 0.00;
        for (int i = 0; i < counter; i++) {
            if (p->data->getEmpId() == file2Id[i]) {
                pay += p->data->getEmpHourlyRate() * file2Hours[i];
            }
        }

        cout << p->data->getEmpName() << ", " << "$" << pay << endl;
        p = p->next;
    }

    cout << "*********End payroll**************" << endl;
    

    return 0;
}