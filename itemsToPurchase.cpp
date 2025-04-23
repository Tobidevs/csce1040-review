#include "itemsToPurchase.h"

ItemToPurchase::ItemToPurchase() : 
    itemName("none"), itemPrice(0.0), itemQuantity(0) {}
ItemToPurchase::ItemToPurchase(string name, double price, int quantity) :
    itemName(name), itemPrice(price), itemQuantity(quantity) {}
string ItemToPurchase::getItemName() {
    return itemName;
}
void ItemToPurchase::setItemName(string name) {
    itemName = name;
}
double ItemToPurchase::getItemPrice() {
    return itemPrice;
}
void ItemToPurchase::setItemPrice(double price) {
    itemPrice = price;
}
int ItemToPurchase::getItemQuantity() {
    return itemQuantity;
}
void ItemToPurchase::setItemQuantity(int quantity) {
    itemQuantity = quantity;
}
void ItemToPurchase::printItemCost() {
    cout << itemName << " " << itemQuantity << " @ $" << itemPrice << " = $" << (itemPrice * itemQuantity) << endl;
}
