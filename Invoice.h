//
// Invoice.h created by waqe on 20220310.  &-:
//

#include <string>

class Invoice {
public:
	// Your class should have a constructor that initializes the six data
	// members.
	explicit Invoice(std::string part, std::string desc, int qty, int ppi, double vat, double discount)
			: partNumber{part}, description{desc}, quantity{qty}, pricePerItem{ppi} {
		if (vat > 0.0) {
			valueAddedTax = vat;
		}
		if (discount > 0.0) {
			discountRate = discount;
		}
	}

	const double getInvoiceAmount() const {
		double total = pricePerItem * quantity;
		if (discountRate > 0.0) {
			total *= 1 - discountRate;
		}
		if (valueAddedTax > 0.0) {
			total *= 1 + valueAddedTax;
		}
		return total;
	}

	const std::string &getPartNumber() const {
		return partNumber;
	}

	void setPartNumber(const std::string &partNumber) {
		Invoice::partNumber = partNumber;
	}

	const std::string &getDescription() const {
		return description;
	}

	void setDescription(const std::string &description) {
		Invoice::description = description;
	}

	int getQuantity() const {
		return quantity;
	}

	void setQuantity(int quantity) {
		Invoice::quantity = quantity;
	}

	int getPricePerItem() const {
		return pricePerItem;
	}

	void setPricePerItem(int pricePerItem) {
		Invoice::pricePerItem = pricePerItem;
	}

	double getValueAddedTax() const {
		return valueAddedTax;
	}

	void setValueAddedTax(double valueAddedTax) {
		Invoice::valueAddedTax = valueAddedTax;
	}

	double getDiscountRate() const {
		return discountRate;
	}

	void setDiscountRate(double discountRate) {
		Invoice::discountRate = discountRate;
	}

private:
	std::string partNumber;
	std::string description;
	int quantity;
	int pricePerItem;
	double valueAddedTax{0.20};
	double discountRate{0.0};
};