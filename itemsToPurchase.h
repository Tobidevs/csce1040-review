#ifndef ITEMSTOPURCHASE_H
#define ITEMSTOPURCHASE_H
#include <string>
#include <iostream>
using namespace std;



class ItemToPurchase {
  public:
    ItemToPurchase();
    ItemToPurchase(string name, double price ,int quantity);

    string getItemName();
    void setItemName(string name);
    double getItemPrice();
    void setItemPrice(double price);
    int getItemQuantity();
    void setItemQuantity(int quantity);
    void printItemCost();

  private:
    string itemName;
    double itemPrice;
    int itemQuantity;


};

#endif