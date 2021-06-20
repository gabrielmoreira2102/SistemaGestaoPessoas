#include "SistGes.hpp"
#include "Vendedor.hpp"
#include "Administrador.hpp"
#include "Operario.hpp"
#include "Fornecedor.hpp"
#include "Empregado.hpp"
#include <iostream>

int main()
{
    int o = 10;
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

		sg.adicionaFornecedor("Elma Chips","Av das Industrias 698","33098755",25000, 5900);
    sg.adicionaFornecedor("Ambev","Rua do Cartorio 500","33824425",50500, 36000); 
		sg.adicionaFornecedor("Vonpar","Assis Brasil 9877","33258968",15900.90, 10000);
    sg.adicionaFornecedor("Zaffari","Av Ipiranga 2345","33302569",11100,15000);
		sg.adicionaFornecedor("Carrefour","Bento Goncalves 7875","33586237",5000, 400);

		sg.adicionaAdministrador("Gabriel","Carlos Gosmes 758","33098755",15000,5000);
    sg.adicionaAdministrador("Vini","Osvaldo Aranha 234","33824425",100000,10000); 
		sg.adicionaAdministrador("Frosi","Manoel Elias 365","33278568",10000,2500);
    sg.adicionaAdministrador("Antonio","Sertorio 9389","33389589",12000,3000);
		sg.adicionaAdministrador("Emmanuel","Jose de Alencar 476","35896837",9000,1000);

		while (o != 0)
    {
    	cout << " *********************************************** " << endl;
			cout << " *      SISTEMA DE GESTAO DE PESSOAS           * " << endl;
      cout << " *********************************************** " << endl;
      cout << " *  1 - Acessar detalhes do Sistema de Gestao  * " << endl;
			cout << " *  2 - Atualiza cadastro                      * " << endl;
			cout << " *  3 - Adiciona cadastro                      * " << endl;
      cout << " *  0 - Sair                                   * " << endl;                      
			cout << " *********************************************** " << endl;
      cout << "Digite sua opcao: "; cin >> o;
      cout << endl;
			switch(o)
      {
       case 1:
          sg.Detalhes();
          break;
       
			 case 2:
          sg.Atualiza();
          break;
				
			 case 3:
          sg.Adiciona();
          break;

			 case 0:
          cout << "\nObrigado por acessar o sistema! Ate a proxima..." << endl;
          break;
					
			 default:
      	  cout << " numero invalido !!! " << endl;
          break;
      }
    }
}