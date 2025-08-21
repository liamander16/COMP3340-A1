#ifndef HAMMERINGDIST_H
#define HAMMERINGDisT_H

#include <string>
#include <iostream>
#include <vector>
#include <fstream>

class HammeringDist{
private:
    //Matrix for the Data
    std::vector<std::string> data;

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
};

#endif