#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

int main(int argc, char* argv[]){
    ifstream file(argv[1]);
    string line;

    vector<double> list = {0.0001,0.005,0.01,0.05,0.01,0.05,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,0.95,1};

    unordered_map<double,vector<double>> splited_map;
    while(getline(file, line)){
        string MAF;
        double Rsq;

        istringstream iss(line);
        getline(iss, MAF, '\t');
        iss >> Rsq;

        for(int i = 0; i < list.size(); i++){
            if(stod(MAF) <= list[i]){
                splited_map[list[i]].push_back(Rsq);
                break;
            }
        }
    }
    for(const auto& var:splited_map){
        for(int i = 0; i < var.second.size(); i++){
            cout << var.first << '\t' << var.second[i] << endl;
        }
    }
    return 0;
}
