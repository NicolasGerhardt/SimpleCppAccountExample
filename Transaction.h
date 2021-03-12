#include <string>

using std::string;

class Transaction
{
  private:
    int amount;
    string type;

  public:
    Transaction(int amoujnt, string type);
    string Report();
};