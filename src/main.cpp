#include "HammeringDist.h"

int main(int args, char* argc[]){
    HammeringDist hamr;

    //Matrix for the Data
    std::vector<std::string> data;

    readFile("C:/Users/limmy/OneDrive/Desktop/COMP3340-A1/src/data/USPresidency.csv");

    return 0;
}




void readFile(std::string fileLocation){
    std::cout << "!!!!!!" << std::endl;

    std::fstream fin;

    fin.open(fileLocation);

    std::vector<std::string> row;
    std::string word;
    std::string line;

    while (fin >> word){
        row.clear();
        
        std::cout << word << "\n";
    }
}
