#include <iostream>
#include <string>
using namespace std;

// ./file_lists.exe 11

const char* file_lists[][2] = {
    "1", "11",
    "2", "22",
    "3", "33",
    0, 0
};

int main(int argc, const char *argv[]){
    if (argc < 2) {
        cout << "usage: " << argv[0] << " <filename>" << endl;
        return 1;
    }
    bool found = false;
    for (int i=0; file_lists[i][0]; i++){
        string curr = file_lists[i][1];
        if (curr.compare(argv[1])==0){
            found = true;
        }
        if (found){
            cout << "Found " << file_lists[i][1] << endl;
            break;
        }
    }
    if (!found) cout << "Not found" << endl;

    return 0;
}
