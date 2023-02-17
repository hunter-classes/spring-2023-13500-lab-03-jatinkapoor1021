#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <climits>

double get_east_storage(std::string date) {
    std::ifstream file("Current_Reservoir_Levels.tsv");
    if (file.fail()) {
    std::cerr << "File cannot be opened for reading." << "\n";
    exit(1); 
}
std::string junk;
    std::getline(file, junk);
    std::string dates;
    double get_east_storage;

    while(file >> dates >> get_east_storage){
        if(date == dates){
            return get_east_storage;
        }
        file.ignore(INT_MAX, '\n');
    }
   return 0;
}

double get_min_east(){
    std::ifstream file("Current_Reservoir_Levels.tsv");
    if (file.fail()) {
    std::cerr << "File cannot be opened for reading." << "\n";
    exit(1); 
}

    std::string junk;
    std::getline(file, junk);
    std::string dates;
    double get_min_east;
    double EastMin = 10000000;

    while(file >> dates >> get_min_east){
        if(get_min_east < EastMin){
            EastMin= get_min_east;
        }
        file.ignore(INT_MAX, '\n');
    }
    return EastMin;
}
double get_max_east(){
    std::ifstream file("Current_Reservoir_Levels.tsv");
    if (file.fail()) {
    std::cerr << "File cannot be opened for reading." << "\n";
    exit(1); 
}

    std::string junk;
    std::getline(file, junk);
    std::string dates;
    double get_max_east;
    double EastMax = 0;

    while(file >> dates >> get_max_east){
        if(get_max_east > EastMax){
            EastMax= get_max_east;
        }
        file.ignore(INT_MAX, '\n');
    }
    return EastMax;
}

std::string compare_basins(std::string date){
    std::ifstream file("Current_Reservoir_Levels.tsv");
    if (file.fail()) {
    std::cerr << "File cannot be opened for reading." << "\n";
    exit(1); 
}

    std::string junk;
    std::getline(file, junk);
    std::string dates;
    double StorageEast, ElevationEast,StorageWest, ElevationWest;

    while(file >> dates >> StorageEast >> ElevationEast >> StorageWest >> ElevationWest){
        if(date == dates){
            if(ElevationEast > ElevationWest){
                return "East";
            }
            else if(ElevationWest > ElevationEast){
                return "West";
            }
            else{
                return "Equal";
            }
        }
        file.ignore(INT_MAX, '\n');
    }
    return 0;

}
















