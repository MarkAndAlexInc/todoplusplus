#include <iostream>
#include <string>
#include <vector>
using namespace std;

class ToDo {
    public:
        string title;
        bool done;
        ToDo();
        ToDo(string, bool);       
};

ToDo::ToDo (string t, bool d) {
    title = t;
    done = d;
}

vector<ToDo> toDoArr;

void listToDos() {
    cout << endl;
    cout << "** Your TODO List **" << endl;
    cout << endl;

    if(toDoArr.size() < 1) {
        cout << "No todos!" << endl;
    }
    
    for (size_t i = 0; i < toDoArr.size(); i++) {
        cout << "TODO #" << (i + 1) << ":" << endl;
        cout << "   title: " << toDoArr[i].title << endl;
        cout << "   complete: " << (toDoArr[i].done ? "Yes" : "No") << endl;
        cout << endl;
    }
}

void addToDo(string title) {
    ToDo newToDo(title, false);
    toDoArr.push_back(newToDo);
}

bool removeToDo(int userSelection) {
    int idOfTodoToRemove = userSelection - 1;
    // Find todo, return true if found and removed false 
}

int main() {

    addToDo("My first todo!");
    addToDo("My second todo!");

    listToDos();
}