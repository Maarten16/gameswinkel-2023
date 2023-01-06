#include <iostream>
#include <vector>
#include <ctime>
#include <stdio.h>
#include "Game.h"
#include "Person.h"
using std::string;
using std::cout;
using std::vector;


int main() {

    time_t curr_time = time(NULL);
    tm *tm_local = localtime(&curr_time);
    cout << tm_local->tm_year +1900;
//    int releaseDate1 = tm_local->tm_year + 1899; // 1 jaar geleden
//    int releaseDate2 = tm_local->tm_year + 1898; // 2 jaar geleden

    return 0;
}
