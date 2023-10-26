#ifndef CARD_H
#define CARD_H

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
 
using namespace std;
 
class Card
{
   public: 
   
      enum RANK{
         A = 1,
         TWO,
         THREE,
         FOUR,
         FIVE,
         SIX,
         SEVEN,
         EIGHT,
         NINE,
         TEN,
         JACK,
         QUEEN,
         KING
      };

      enum SUIT{
         DIAMOND,
         HEARTS,
         SPADES,
         CLUBS
      };

   int CARD(RANK r = A, SUIT s = SPADES);

   int getCardValue() const;

   void FlipCardOver();

   private: 
      RANK _Rank;
      SUIT _Suit;
      bool _IsFaceUp;
}
