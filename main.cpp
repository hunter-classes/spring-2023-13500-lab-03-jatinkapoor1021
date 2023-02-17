#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <climits>
#include <vector>
#include "reservoir.h"
#include "reverseorder.h"



int main()
{

double east_storage;

std::string dates[] = {"01/05/2018", "03/10/2018", "05/20/2018",

"08/25/2018", "11/05/2018"};

int n = sizeof(dates) / sizeof(dates[0]);

for (int i = 0; i < n; i++) {

east_storage = get_east_storage(dates[i]);

std::cout << dates[i] << " East basin storage: " << east_storage << " billion gallons" << std::endl<<"\n";

}


double min_east_storage = get_min_east();
double max_east_storage = get_max_east();
std::cout << "Minimum east storage: " << get_min_east()<< " billion gallons" << std::endl<<"\n";
std::cout << "Maximum east storage: " << get_max_east() << " billion gallons" << std::endl<<"\n";



std::cout << "The higher value in February 20 is the " << compare_basins("02/20/2018")<< std::endl<<"\n";
std::cout << "The higher value in June 5 is the " << compare_basins("06/05/2018")<< std::endl<<"\n";
std::cout << "The higher value in October 21 is the " << compare_basins("10/21/2018")<< std::endl<<"\n";



reverse_order("01/18/2018", "06/19/2018");
reverse_order("08/05/2018", "12/24/2018");


return 0;
}