// COMSC-210 | Lab 25 | Daniel Santisteban
// IDE used: VS Code

#include <iostream>
#include <chrono>
#include <vector>
#include <list>
#include <set>
#include <string>
#include <fstream>
using namespace std;
using namespace std::chrono;
//C:\\Users\\hope4\\Desktop\\COMSC 210 Work\\210-lab-25\\codes.txt
int main() {
    ifstream file("C:\\Users\\hope4\\Desktop\\COMSC 210 Work\\210-lab-25\\codes.txt");
    if(!file.is_open()){
        cout<<"failed to open file"<<endl;
        return 1;
    }
    else{
        cout<<"opened file"<<endl;
    }
    vector<string> racer1;
    set<string> racer2;
    list<string> racer3;
    string temp;
    
    while(file>>temp){
        racer1.push_back(temp);
    }
    temp="";
    while(file>>temp){
        racer2.insert(temp);
    }
    temp="";
    while(file>>temp){
        racer3.push_back(temp);
    }


    file.close();
    return 0;
}

/* syntax examples:
auto start = high_resolution_clock::now()
auto end = high_resolution_clock::now()
auto duration = duration_cast<milliseconds>(end - start)
duration.count() references elapsed milliseconds
*/