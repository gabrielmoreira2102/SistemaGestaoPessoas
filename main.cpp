#include "SistGes.hpp"
#include <iostream>

int main()
{
    int b = 10;
    SistGes sg;

    sg.adicionaVendedor("Michele","Av.Ipiranga 9000","999856980",10500,500);
    sg.adicionaVendedor("Ildo","Carlos Gomes 221","998569823",20000,1400);
    sg.adicionaVendedor("Rosane","Felizardo 987","987456325",9000,800);
    sg.adicionaVendedor("Bento","Osvaldo Pereira de Freitas 135","987256310",2000,100);
    sg.adicionaVendedor("Lucas","Bento Gonçalves 345","978562123",3000,400);

		sg.adicionaOperario("Gustavo","Albion 345","988598925",1500,500);
    sg.adicionaOperario("Rodrigo","Guilherme Alves 87","986966425",4000,900); 
		sg.adicionaOperario("Matheus","Felizardo 45","985696548",1500.90,300);
    sg.adicionaOperario("Helo","Joao Wallig 843","987564567",1000.50,150);
		sg.adicionaOperario("Maria","Dom Joaquim 875","987552237",2000,250);

		sg.adicionaFornecedor("Elma Chips","Av das Industrias 698","33098755",25000);
    sg.adicionaFornecedor("Ambev","Rua do Cartorio 500","33824425",50500); 
		sg.adicionaFornecedor("Vonpar","Assis Brasil 9877","33258968",15900.90);
    sg.adicionaFornecedor("Zaffari","Av Ipiranga 2345","33302569",11100);
		sg.adicionaFornecedor("Carrefour","Bento Goncalves 7875","33586237",5000);
}