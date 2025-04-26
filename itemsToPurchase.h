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

    string itemName;
    double itemPrice;
    int itemQuantity;


};

class Food : public ItemToPurchase {
  public:
    void printFoodCost();
    double price;
};

#endif