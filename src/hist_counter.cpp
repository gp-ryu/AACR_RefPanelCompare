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


    unordered_map<int, int> hist;
    unordered_map<int, int> hist_rare;
    unordered_map<int, int> hist_common;

    int Rsq_;

    while(getline(file, line)){
        string MAF;
        double Rsq;


        istringstream iss(line);
        getline(iss, MAF, '\t');
        iss >> Rsq;

        int Rsq_ = Rsq * 100;
        int Rsq__ = Rsq_/5;
        Rsq_ = Rsq_/10;

        hist[Rsq__]++;

        if(stod(MAF) < .01){
            hist_rare[Rsq__]++;
        }else {
            hist_common[Rsq__]++;
        }
    }
    cout << "window\twhole\trare\tcommon" << endl;
    for(int i=0; i<=20; i++){
        cout << i*5 << '\t' << hist[i] << '\t' << hist_rare[i] << '\t' << hist_common[i] << endl;
    }
    return 0;

}
