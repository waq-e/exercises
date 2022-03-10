// Fig. 3.9: AccountTest.cpp
// Displaying and updating Account balances.
#include <iostream>
#include "Invoice.h"

void printInvoice(Invoice invoice);

using namespace std;

int main()
{
	Invoice i1{"63A", "widget", 10, 1, 0.20, 0.0};
	Invoice i2{"72C", "gadget", 10, 2, -0.10, 0.10};
	Invoice i3{"81E", "thing1", 10, 4, 0.10, 0.10};
	Invoice i4{"90G", "thing2", 10, 10, 0.0, 0.20};

	printInvoice(i1);
	printInvoice(i2);
	printInvoice(i3);
	printInvoice(i4);

}

void printInvoice(Invoice invoice) {
	cout << "Invoice:\n\tPart Number: " << invoice.getPartNumber()
			<< "\n\tDescription: " << invoice.getDescription()
			<< "\n\tQuantity: " << invoice.getQuantity()
			<< "\n\tPrice Per Item: " << invoice.getPricePerItem()
			<< "\n\tValueAdded tax: " << invoice.getValueAddedTax()
			<< "\n\tDiscount: " << invoice.getDiscountRate()
			<< "\n\tAmount: " << invoice.getInvoiceAmount() << '\n';
}
