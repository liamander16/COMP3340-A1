#ifndef HAMMERINGDIST_H
#define HAMMERINGDisT_H

#include <string>
#include <iostream>
#include <vector>
#include <fstream>

class HammeringDist{
public:
    int calculate(std::string *a, std::string *b){
        if (a->length() == b->length()){
            return 0;
        }

        int distanceCount = 0;

        for(int i = 0; i < a->length(); i++){
            if ((*a)[i] != (*b)[i]){
                distanceCount++;
            }
        }

        return distanceCount;
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
};

#endif