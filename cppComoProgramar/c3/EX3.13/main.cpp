/*
*/
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;


class Invoice
{
private:
    string id;
    string description;
    int itemQuantity;
    int itemPrice;
public:
    Invoice( string, string, int, int);

    void setId( string );
    void setDescription( string );
    void setItemQuantity( int );
    void setItemPrice( int );

    string getId() const;
    string getDescription() const;
    int getItemQuantity() const;
    int getItemPrice()const;

    int getInvoiceAmount() const;
};

// construtor
Invoice::Invoice( string number, string description, int quantity, int price )

    :   id( number ),
        description( description ),
        itemQuantity( quantity ),
        itemPrice( price )

{
}

// Funções set
void Invoice::setId( string number )
{
    id = number;
}

void Invoice::setDescription( string description )
{
    description = description;
}

void Invoice::setItemQuantity( int quantity )
{
    if( quantity < 0 )
    {
        itemQuantity = 0;
    }
    else
    {
        itemQuantity = quantity;
    }
}

void Invoice::setItemPrice( int price )
{
    if( price < 0 )
    {
        itemPrice = 0;
    }
    else
    {
        itemPrice = price;
    }
}

// Funções get
string Invoice::getId() const
{
    return id;
}

string Invoice::getDescription() const
{
    return description;
}

int Invoice::getItemQuantity() const
{
    return itemQuantity;
}

int Invoice::getItemPrice() const
{
    return itemPrice;
}

// apenas get para InvoiceAmount
int Invoice::getInvoiceAmount() const
{
    int total = itemQuantity * itemPrice;
    return total;
}

int main()
{
    Invoice invoice( " ", " ", 0, 0 );
    string number;
    string description;
    int quantity;
    int price;

    cout << "Enter the part number: ";
    cin >> number;
    invoice.setId( number );

    cout << "Enter the part description: ";
    cin >> description;
    invoice.setDescription( description );

    cout << "Enter the quantity of the items: ";
    cin >> quantity;
    invoice.setItemQuantity( quantity );

    cout << "Enter the price per item: ";
    cin >> price;
    invoice.setItemPrice( price );

    cout << "-------" << endl;
    cout << "Invoice" << endl;
    cout << "-------" << endl;


    cout << "Id:" << invoice.getId() << endl;
    cout << "Description: " << " " << invoice.getDescription() << endl;
    cout << "Quantity for the item: " << invoice.getItemQuantity() << endl;
    cout << "Price per item: " << invoice.getItemPrice() << endl;
    cout << "Invoice amount: " << invoice.getInvoiceAmount() << endl;

    return 0;
}
