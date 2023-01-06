//
// Created by maart on 6-1-2023.
//

#ifndef GAMESWINKEL_GAME_H
#define GAMESWINKEL_GAME_H


class Game{
    std::string title;
    int releaseDate;
    float originalPrice;
public:
    std::string getTitle();
    void setTitle(std::string title);

    int getReleaseDate();
    void setReleaseDate(int releaseDate);

    float getOriginalPrice();
    void setOriginalPrice(float originalPrice);

    float calculateCurrentPrice();

    Game(std::string title, int releaseDate, float originalPrice);
};


#endif //GAMESWINKEL_GAME_H
