#include <iostream>
#include <string>
#include <sys/stat.h>
using namespace std;

string pathGiven() {
    return "C:\\Users\\schou";;
}

int main() {
    struct stat info;
    // The stat() function is used to retrieve information about a file system object (file, directory, symbolic link, etc.) specified by its path.
    // The function fills a struct stat variable (in this case, pathinfo) with information about the object
    if (stat(pathGiven().c_str(), &info) == 0){
        if (S_ISDIR(info.st_mode)){
            cout << "Is a directory" << endl;
        }
        else if (S_ISREG(info.st_mode)){
            cout << " Is a file " << endl;
        }
    }
    return 0;
}