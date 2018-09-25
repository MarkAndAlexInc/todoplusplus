#include <iostream>
#include <string>
#include <vector>
using namespace std;

class ToDo {
    public:
        char title[10];
        bool done;
        ToDo();
        ToDo(string title, bool done);
};

vector<ToDo> toDoArr;

int main() {
    ToDo myFirstToDo("my to do", false);
    toDoArr.push_back(myFirstToDo);
    cout << toDoArr[0].title << endl;
}