# C++ CLI Task Manager

A command-line task manager built in C++ as a hands-on learning project. This project was developed while transitioning from Java to C++, focusing on core language fundamentals like structs, vectors, file I/O, and input handling.

## Features

- Add tasks with custom titles
- View all tasks with completion status
- Toggle task completion
- Delete tasks
- Persistent storage (tasks save to file and load on startup)

## Prerequisites

- C++17 compatible compiler (g++, clang++, etc.)

## Building & Running

Clone the repository:

```bash
git clone https://github.com/HemalSPatel/CPPCLITaskManager.git
cd CPPCLITaskManager
```

Compile:

```bash
g++ -std=c++17 main.cpp -o cpp_cli_task_manager
```

Run:

```bash
./cpp_cli_task_manager
```

## Usage

Once running, you'll be prompted with available commands:

| Command | Action |
|---------|--------|
| `a` | Add a new task |
| `v` | View all tasks |
| `t` | Toggle task completion status |
| `d` | Delete a task |
| `q` | Save and quit |

Tasks are automatically saved to `tasks.txt` when you quit and loaded when you start the program.

## Why This Project?

This task manager was built as part of my journey learning C++ coming from a Java background. It covers fundamental concepts including:

- Structs and custom data types
- Vectors and iteration
- File I/O with fstream
- Input validation and stream handling
- Pass-by-reference vs pass-by-value