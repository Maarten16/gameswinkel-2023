#ifndef GAMESWINKEL_PERSON_H
#define GAMESWINKEL_PERSON_H


class Person{
    float budget;
    string name;
public:
    bool buy(Game game);
    bool sell(Game game, Person& buyer);
    float getBudget();
    void setBudget(float budget);
    vector <Game> getGames();
    void setGames(vector <Game> games);
    void addGame(Game game);
    void removeGame(Game game);
    string getName();
    void setName(string name);
    Person(float budget, string name);


};


#endif //GAMESWINKEL_PERSON_H
