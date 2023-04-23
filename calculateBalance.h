#include <string>
using namespace std;

class calculateBalance {

   private:
   //private class variables
   double startAmount,monthlyDeposit,yearlyInterest;
   int years;

   public:
      //mutators to set the item details 
      calculateBalance();
      void Setyears(int years);
      void SetStartAmount(double startAmount);
      void SetmonthlyDeposit(double monthlyDeposit);
      void SetyearlyInterest(double yearlyInterest);



      //accessors to get display the item details
      double GetStartAmount();
      double GetmonthlyDeposit();
      double GetyearlyInterest();
      int Getyears();
};

