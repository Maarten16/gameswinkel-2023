#include <iostream>
#include <vector>
#include <ctime>
#include <stdio.h>
using std::string;
using std::cout;
using std::vector;


//30% waarde daling per jaar
class Game{
    string title;
    int releaseDate;
    float originalPrice;
public:
    string getTitle(){
        cout << "title: " << title << '\n';
    };
    void setTitle(string title){
        this->title = title;
    };

    void setReleaseDate(int releaseDate){
        this->releaseDate = releaseDate;
    };

    float getOriginalPrice();
    void setOriginalPrice(float originalPrice);
    float calculateCurrentPrice(){
        return originalPrice * 0.7 * (2022 - releaseDate);
    };

    Game(string title, int releaseDate, float originalPrice)
    :title(title), releaseDate(releaseDate), originalPrice(originalPrice){
        cout << "object created \n";
        calculateCurrentPrice();
    };
};

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

    std::time_t result = std::time(NULL);
    std::cout << std::asctime(std::localtime(&result));

    time_t curr_time = time(NULL);
    tm *tm_local = localtime(&curr_time);
    int releaseDate1 = tm_local->tm_year + 1899; // 1 jaar geleden

    std::cout << "Hello, World!" << std::endl;
    Game Counterstrike("counter strike", releaseDate1, 50);
    Counterstrike.getTitle();
    Counterstrike.setTitle("csgo");
    Counterstrike.getTitle();
    return 0;
}
