#include "header.h"
#include <iostream>
#include <string>





int main ()
{










  bool technicolor = false;
  bool uiText = true;
  bool strobe = false;
  bool ducks = false;





  return 0;
}

/* MOVE ALL OF THESE FUNCTIONS INTO THE HEADER */

void incrementStat( int * stat, int amount, int limit = 0)
{
  if ((amount > 0 && stat < limit) || (amount < 0 && stat > limit))
  {
    stat = stat + amount;
  }
}
// name:
// descp: This trades sellAmount pt(s) of sell for buyAmount pt(s) of buy
// author:  Daniel Zimmer
// date added: 9/20/17
void tradeStatForStat (int * sell, int * buy, int sellAmount, int buyAmount)
{
    sell = sell - sellAmount;
    buy = buy + buyAmount;
}
