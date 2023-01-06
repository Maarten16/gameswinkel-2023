#include <iostream>
#include <vector>
#include <ctime>
#include <stdio.h>
#include "game.h"
using std::string;
using std::cout;
using std::vector;


//30% waarde daling per jaar

class Person{
    float budget;
    string name;
public:
    bool buy(Game game);
    bool sell(Game game, Person& buyer);
    float getBudget();
    void setBudget(float budget);
    vector <Game> getGames;
    void setGames(vector <Game> games);
    void addGame(Game game);
    void removeGame(Game game);
    string getName();
    void setName(string name);
    Person(float budget, string name);


};

int main() {

    time_t curr_time = time(NULL);
    tm *tm_local = localtime(&curr_time);
    cout << tm_local->tm_year +1900;
//    int releaseDate1 = tm_local->tm_year + 1899; // 1 jaar geleden
//    int releaseDate2 = tm_local->tm_year + 1898; // 2 jaar geleden

    return 0;
}
