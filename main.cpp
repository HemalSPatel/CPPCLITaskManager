#include <string>
#include <vector>
#include <iostream>

struct Task {
    std::string title;
    bool completed{};
};

void addTask(std::vector<Task>& tasks) {
    std::string title;
    std:: cout << "Enter title of new task: " << " ";
    std::cin.ignore();
    std::getline(std::cin,title);
    tasks.push_back(Task{title});
    std::cout << "Task Added!" << std::endl;
}

void viewTasks(const std::vector<Task>& tasks) {
    if (tasks.empty()) {
        std::cout << "No Tasks found!" << std::endl;
    } else {
        for (int i = 0; i < (int)tasks.size(); i++) {
            std::cout << "[" << i + 1 << "]" << " ";
            if (tasks[i].completed) {
                std::cout << "✅" << " ";
            } else {
                std::cout << "❌" << " ";
            }
            std::cout << tasks[i].title <<  std::endl;
        }
    }
}

void toggleTaskStatus(int taskNumber, std::vector<Task>& tasks) {
    taskNumber -= 1;
    if (taskNumber >= 0 && taskNumber < (int)tasks.size())
    {
        tasks[taskNumber].completed = !tasks[taskNumber].completed;
        std::cout << "Task " << taskNumber + 1 << " updated!" << std::endl;
    } else {
        std::cout << "Task " << taskNumber + 1 << " not found!" << std::endl;
    }
}

void deleteTask(int taskNumber, std::vector<Task>& tasks)
{
    taskNumber -= 1;
    if (taskNumber >= 0 && taskNumber < (int)tasks.size())
    {
        std::swap(tasks[taskNumber], tasks.back());
        tasks.pop_back();
        std::cout << "Task " << taskNumber + 1 << " deleted!" << std::endl;
    } else {
        std::cout << "Task " << taskNumber + 1 << " not found!" << std::endl;
    }

}


int main()
{
    std::vector<Task> tasks;


    bool running = true;
    while (running)
    {
        char command;
        std::cout << "Choose command (a - add, v - view all, t - toggle task completion, d - delete task, q - quit): " << " ";
        std::cin >> command;
        switch (command) {
        case 'a':
            std::cout << "Adding task..." << std::endl;
            addTask(tasks);
            break;
        case 'v':
            std::cout << "Viewing tasks..." << std::endl;
            viewTasks(tasks);
            break;
        case 't':
            int updateNumber;
            std::cout << "Enter the task number you would like to toggle the completion status for: ";
            std::cin >> updateNumber;
            toggleTaskStatus(updateNumber, tasks);
            break;
        case 'd':
            int deleteNumber;
            std::cout << "Enter the task number you would like to delete: ";
            std::cin >> deleteNumber;
            deleteTask(deleteNumber, tasks);
            break;
        case 'q':
            std::cout << "Quitting..." << std::endl;
            running = false;
            break;
        default:
            std::cout << "Invalid input." << std::endl;
        }
    }
    return 0;
}
