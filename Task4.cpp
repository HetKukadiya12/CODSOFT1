#include <iostream>
#include <vector>
#include <string>

using namespace std;

class ToDoList {
public:
    void addTask(const string& task) {
        tasks.push_back(task);
        cout << "Task added: " << task << endl;
    }

    void viewTasks() const {
        if (tasks.empty()) {
            cout << "No tasks in the list." << endl;
            return;
        }
        cout << "To-Do List:" << endl;
        for (size_t i = 0; i < tasks.size(); ++i) {
            cout << i + 1 << ". " << tasks[i] << endl;
        }
    }

    void removeTask(size_t index) {
        if (index == 0 || index > tasks.size()) {
            cout << "Invalid task number." << endl;
            return;
        }
        cout << "Task removed: " << tasks[index - 1] << endl;
        tasks.erase(tasks.begin() + (index - 1));
    }

private:
    vector<string> tasks;
};

void displayMenu() {
    cout << "To-Do List Program" << endl;
    cout << "1. Add task" << endl;
    cout << "2. View tasks" << endl;
    cout << "3. Remove task" << endl;
    cout << "4. Exit" << endl;
    cout << "Choose an option: ";
}

int main() {
    ToDoList todo;
    int choice;
    string task;
    size_t taskNumber;

    while (true) {
        displayMenu();
        cin >> choice;
        cin.ignore(); // Ignore the newline character left in the buffer

        switch (choice) {
        case 1:
            cout << "Enter a new task: ";
            getline(cin, task);
            todo.addTask(task);
            break;
        case 2:
            todo.viewTasks();
            break;
        case 3:
            cout << "Enter the task number to remove: ";
            cin >> taskNumber;
            todo.removeTask(taskNumber);
            break;
        case 4:
            cout << "Exiting the program." << endl;
            return 0;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
