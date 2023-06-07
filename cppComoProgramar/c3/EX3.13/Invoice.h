#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>
using std::string;

// Invoice(fatura)

class Invoice
{
public:
    Invoice(int numero, int quantidade, int preco, string descricao)
    {
        setQuantidade( quantidade );
        setDescricao( descricao );
        setPreco( preco );
    }

    void setNumero( int numero )
    {
        setNumero = numero;
    }

    void setQuantidade( int quantidade )
    {
        setQuantidade = quantidade
    }
    void setDescricao( string descricao )
    {
        setDescricao = descricao;
    }
    void setPreco( int preco )
    {
        setPreco = preco;
    }

    int getNumero()
    {
        return numero;
    }

    int getQuantidade()
    {
        return quantidade;
    }

    int getPreco()
    {
        return preco;
    }

    int getInvoiceAmount()
    {
        int amount = preco * quantidade;

        if( quantidade < 0 )
        {
            setQuantidade = 0;
        }
        if( preco < 0 )
        {
            setPreco = 0;
        }

        return amount;
    }

};
