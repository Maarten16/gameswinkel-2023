//
// Created by maart on 6-1-2023.
//
#include <iostream>
#include "Game.h"

std::string Game::getTitle(){return title;};
void Game::setTitle(std::string title){
    this->title = title;
};

int Game::getReleaseDate(){return releaseDate;}
void Game::setReleaseDate(int releaseDate){
    this->releaseDate = releaseDate;
};

float Game::getOriginalPrice(){return originalPrice;}
void Game::setOriginalPrice(float originalPrice){
    this->originalPrice;
};

float Game::calculateCurrentPrice(){
    time_t curr_time = time(NULL);
    tm *tm_local = localtime(&curr_time);
    int curr_year = tm_local->tm_year +1900;
    return originalPrice * 0.7 * (curr_year - releaseDate);
};

Game::Game(std::string title, int releaseDate, float originalPrice)
:title(title), releaseDate(releaseDate), originalPrice(originalPrice) {}