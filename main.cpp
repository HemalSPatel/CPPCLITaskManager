#include <string>
#include <vector>
#include <iostream>

struct Task {
    std::string title;
    bool completed{};
};

void printTasks(const std::vector<Task>& tasks)
{
    for (const Task& task : tasks)
    {
        std::cout << task.title << std::endl;
    }
}
void addTask(std::vector<Task>& tasks)
{
    std::string title;
    std:: cout << "Enter title of new task: " << " ";
    std::cin >> title;
    tasks.push_back(Task{title});


}

int main()
{
    std::vector<Task> tasks;


    bool running = true;
    while (running)
    {
        char command;
        std::cout << "Choose command (a - add, v - view all, q - quit): " << " ";
        std::cin >> command;
        switch (command) {
        case 'a':
            std::cout << "Adding task..." << std::endl;
            // function to add a task
            break;
        case 'v':
            std::cout << "Viewing tasks..." << std::endl;
            printTasks(tasks);
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
