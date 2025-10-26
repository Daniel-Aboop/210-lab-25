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

void printvector(vector<int>& pass);


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
    //using these to hold my results from the races from vector->set->list
    vector<int> reading;
    vector<int> sorting;
    vector<int> inserting;
    vector<int> deleting;
    string temp;

    // Reading races
    auto start=high_resolution_clock::now();
    while(file>>temp){
        racer1.push_back(temp);
    }
    auto end=high_resolution_clock::now();
    auto duration=duration_cast<microseconds>(end-start);
    int timevector=duration.count();
    reading.push_back(timevector);
    file.clear();
    file.seekg(0);
    start=high_resolution_clock::now();
    while(file>>temp){
        racer2.insert(temp);
    }
    end=high_resolution_clock::now();
    duration=duration_cast<microseconds>(end-start);
    int timeset=duration.count();
    reading.push_back(timeset);
    file.clear();
    file.seekg(0);
    start=high_resolution_clock::now();
    while(file>>temp){
        racer3.push_back(temp);
    }
    end=high_resolution_clock::now();
    duration=duration_cast<microseconds>(end-start);
    int timelist=duration.count();
    reading.push_back(timelist);

    //Sorting Races

    //Inserting Races

    //Deleting Races

    //Outputting the resulst of the races
    cout<<"Operation     Vector     List     Set"<<endl;
    cout<<"Reading:  "; printvector(reading);

    file.close();
    return 0;
}

void printvector(vector<int>& pass){
    for(int temp: pass){
        cout<<temp<<" ";
    }


}
/* syntax examples:
auto start = high_resolution_clock::now()
auto end = high_resolution_clock::now()
auto duration = duration_cast<milliseconds>(end - start)
duration.count() references elapsed milliseconds
*/