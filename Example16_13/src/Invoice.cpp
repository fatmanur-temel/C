#include "Invoice.h"

using namespace std;

Invoice::Invoice(string number, string description, int count1, int price)
{
    setPartNumber(number);
    setPartDescription(description);
    setQuantity(count1);
    setPricePerItem(price);
}

void Invoice::setPartNumber(string number)
{
    partNumber=number;
}

string Invoice::getPartNumber()
{
    return partNumber;
}

void Invoice::setPartDescription(string description)
{
    partDescription=description;
}

string Invoice::getPartDescription()
{
    return partDescription;
}

void Invoice::setQuantity(int count1)
{
    if(count1>0)
        quantity=count1;
    if(count1<=0)
        quantity=0;
}

int Invoice::getQuantity()
{
    return quantity;
}

void Invoice::setPricePerItem(int price)
{
    if(price > 0)
        pricePerItem=price;
    if(price <= 0)
        pricePerItem=0;
}

int Invoice::getPricePerItem()
{
    return pricePerItem;
}

int Invoice::getInvoiceAmount()
{
    return getQuantity()*getPricePerItem();
}


