
#include <iostream>
#include <queue>
using namespace std;

// Employee structure
struct Employee {
    int id;
    string name;
    string position;
    Employee *left;
    Employee *right;
};

// Function to create a new employee
Employee *createEmployee(int id, string name, string position) {
    Employee* emp = new Employee;
    emp->id = id;
    emp->name = name;
    emp->position = position;
    emp->left = NULL;
    emp->right = NULL;
    return emp;
}

// Function to insert an employee into the organization tree
Employee *insertEmployee(Employee *root, Employee *emp) {
    if (root == NULL) {
        return emp;
    } else {
        queue<Employee*> q;
        q.push(root);

        while (!q.empty()) {
            Employee *current = q.front();
            q.pop();

            if (current->left == NULL) {
                current->left = emp;
                break;
            } else if (current->right == NULL) {
                current->right = emp;
                break;
            } else {
                q.push(current->left);
                q.push(current->right);
            }
        }
        return root;
    }
}

// Function to count the number of employees
int countEmployees(Employee *root) {
    if (root == NULL) {
        return 0;
    } else {
        int count = 0;
        queue<Employee*> q;
        q.push(root);

        while (!q.empty()) {
            Employee* current = q.front();
            q.pop();
            count++;

            if (current->left != NULL) {
                q.push(current->left);
            }

            if (current->right != NULL) {
                q.push(current->right);
            }
        }
        return count;
    }
}

// Function to search for an employee by ID
Employee *searchEmployee(Employee *root, int id) {
    if (root == NULL || root->id == id) {
        return root;
    }

    Employee *leftResult = searchEmployee(root->left, id);
    if (leftResult != NULL) {
        return leftResult;
    }

    return searchEmployee(root->right, id);
}

// Function to display employees according to their position
void displayEmployeesByPosition(Employee *root, string position) {
    if (root == NULL) {
        return;
    }

    if (root->position == position) {
        cout << "ID: " << root->id << ", Name: " << root->name << ", Position: " << root->position << endl;
    }

    displayEmployeesByPosition(root->left, position);
    displayEmployeesByPosition(root->right, position);
}

// Function to display all employees in the organization
void displayAllEmployees(Employee* root) {
    if (root == NULL) {
        return;
    }

    cout << "ID: " << root->id << ", Name: " << root->name << ", Position: " << root->position << endl;

    displayAllEmployees(root->left);
    displayAllEmployees(root->right);
}

int main() {
    // Create root employee (CEO)
    int rootId;
    string rootName, rootPosition;
    cout << "Enter details for the CEO:" << endl;
    cout << "ID: ";
    cin >> rootId;
    cout << "Name: ";
    cin >> rootName;
    cout << "Position: ";
    cin >> rootPosition;

    Employee* root = createEmployee(rootId, rootName, rootPosition);

    int choice, id;
    string name, position;
    do {
        cout << "\nEmployee Management System Menu:" << endl;
        cout << "1. Add Employee" << endl;
        cout << "2. Count Employees" << endl;
        cout << "3. Search Employee" << endl;
        cout << "4. Display Employees by Position" << endl;
        cout << "5. Display All Employees" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "\nEnter details for the employee:" << endl;
                cout << "ID: ";
                cin >> id;
                cout << "Name: ";
                cin >> name;
                cout << "Position: ";
                cin >> position;

                Employee *emp = createEmployee(id, name, position);
                root = insertEmployee(root, emp);
                cout << "Employee added successfully!" << endl;
                break;

            case 2:
                cout << "\nTotal number of employees: " << countEmployees(root) << endl;
                break;

            case 3:
                cout << "\nEnter employee ID to search: ";
                cin >> id;
                Employee* foundEmployee = searchEmployee(root, id);
                if (foundEmployee != NULL) {
                    cout << "Employee found!" << endl;
                    cout << "ID: " << foundEmployee->id << ", Name: " << foundEmployee->name << ", Position: " << foundEmployee->position << endl;
                } else {
                    cout << "Employee not found!" << endl;
                }
                break;

            case 4:
                cout << "\nEnter position to display employees: ";
                cin >> position;
                cout << "\nEmployees with position " << position << ":" << endl;
                displayEmployeesByPosition(root, position);
                break;

            case 5:
                cout << "\nAll Employees:" << endl;
                displayAllEmployees(root);
                break;

            case 6:
                cout << "\nExiting the program. Goodbye!" << endl;
                break;

            default:
                cout << "\nInvalid choice. Please try again." << endl;
                break;
        }
    } while (choice != 6);

    return 0;
}
    
   




