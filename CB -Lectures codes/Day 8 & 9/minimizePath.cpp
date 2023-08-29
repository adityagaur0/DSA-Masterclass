// #include <iostream>
// using namespace std;
// string minPath(string str){
//     string arr[];
//     for(char ch : str){
//         if(ch='N'){
//             if(ch='S'){
                
//             }
//         }
//     }
// }

// int main(){
//     string str;
//     getline(cin,str);
//     cout<<minPath(str);

// }

#include <iostream>
#include <vector>

using namespace std;

vector<string> minimizePath(vector<string> directions) {
    int north = 0, east = 0;

    for (const string& direction : directions) {
        if (direction == "N")
            north++;
        else if (direction == "S")
            north--;
        else if (direction == "E")
            east++;
        else if (direction == "W")
            east--;
    }

    vector<string> minimizedPath;
    if (north > 0) {
        minimizedPath.insert(minimizedPath.end(), north, "N");
    } else if (north < 0) {
        minimizedPath.insert(minimizedPath.end(), -north, "S");
    }

    if (east > 0) {
        minimizedPath.insert(minimizedPath.end(), east, "E");
    } else if (east < 0) {
        minimizedPath.insert(minimizedPath.end(), -east, "W");
    }=

    return minimizedPath;
}

int main() {
    vector<string> input = {"N", "N", "N", "S", "W", "W", "E", "E", "E"};
    vector<string> minimized = minimizePath(input);

    cout << "Minimized Path: ";
    for (const string& direction : minimized) {
        cout << direction << " ";
    }
    cout << endl;

    return 0;
}
