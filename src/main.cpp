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

int main() {
    ToDo myFirstToDo ("hello", true);
    toDoArr.push_back(myFirstToDo);
    cout << toDoArr[0].title << endl;
}