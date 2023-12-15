#include"colors.hpp"
#include"shapes.hpp"
#include<vector>
#ifndef BOARD_H_
#define BOARD_H_
static const sf::Font font ;
struct Board
{
    sf::RenderWindow &window ;
    int boxesCnt ;
    int dotsCnt ;
    float dotsDistance ;
    // sf::Font font ;
    // sf::Text playerOneScoreText ;

    static const float dotsRadius ;
    static const float lineThickness ;

    std::vector<Line> horizontaLineProperties;
    std::vector<Line> verticalLineProperties;
    std::vector<sf::RectangleShape> boxesProperties;
    std::vector<sf::CircleShape> dotsProperties;

    Board(sf::RenderWindow &window_,int boxesCnt_) ;

    void setVerticalLinesProberties();
    void setHorizontalLinesProberties();
    void setDotsProberties() ;
    void setBoxesProberties() ;
    void initializeBoard() ;
};

#endif