#include <iostream>
#include "Invoice.h"

using namespace std;

int main()
{
    Invoice invoice("123","abc",10,5);

    cout << "Part number: "<<invoice.getPartNumber()<<endl;
    cout << "Part description: "<<invoice.getPartDescription()<<endl;
    cout << "Quantity: "<<invoice.getQuantity()<<endl;
    cout << "Price per item: "<<invoice.getPricePerItem()<<endl;
    cout << "Invoice amount: "<<invoice.getInvoiceAmount()<<endl;

    invoice.setPartNumber("12345");
    invoice.setPartDescription("def");
    invoice.setQuantity(3);
    invoice.setPricePerItem(10);

    cout << "Part number: "<<invoice.getPartNumber()<<endl;
    cout << "Part description: "<<invoice.getPartDescription()<<endl;
    cout << "Quantity: "<<invoice.getQuantity()<<endl;
    cout << "Price per item: "<<invoice.getPricePerItem()<<endl;
    cout << "Invoice amount: "<<invoice.getInvoiceAmount()<<endl;
    return 0;
}
