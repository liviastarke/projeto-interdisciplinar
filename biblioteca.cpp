/* SIMULADOR DE GERENCIAMENTO DE BIBLIOTECA EM C++ */

/* OBJETIVOS:                                               *
    • Aplicar os conceitos de Programação Orientada.        *
    • Desenvolver um projeto modular e bem estruturado.     *
                                                            *
Descrição do Trabalho:                                      *
Crie um sistema para gerenciar uma biblioteca.              *
1. Classes: Os alunos devem modelar classes como Livro,     *
Membro e Empréstimo.                                        *
2. Herança: Crie classes derivadas de Livro, como Livro     *
Físico e Livro digital, com atributos e métodos específicos.*                                        *
3. Funcionalidades: O programa deve permitir:               *
    • Adicionar, remover e listar livros e membros.         *
    • Registrar empréstimos e devoluções.                   *
    • Buscar livros por título, autor ou gênero.            */

#include <iostream>

using namespace std;

// modelo de classe
// class biblioteca
// {
// private:
//     /* data */
// public:
//     biblioteca(/* args */);
//     ~biblioteca();
// };

// biblioteca::biblioteca(/* args */)
// {
// }

// biblioteca::~biblioteca() // destructor
// {
// }

class Livro {
    protected:
    // atributos título, autor e gênero são privados
        string titulo;
        string autor;
        string genero;
    public:
    // os métodos são públicos
        // Declaração do construtor (definido fora da classe)
        Livro(string tit, string aut, string gen);

        // getters
        string get_titulo(){
            return titulo;
        }

        string get_autor(){
            return autor;
        }

        string get_genero(){
            return genero;
        }

        // outros métodos
        void ler(/* args */){ // método definido dentro da classe
            cout << "Flap flap, páginas virando" << endl;
        }

        void soltar();  // definição fora da classe
};

Livro::Livro(string tit, string aut, string gen)
{
    titulo = tit;
    autor = aut;
    genero = gen;
}

void Livro::soltar(/* args */)
{
    cout << "Bum! Caiu no chão" << endl;
}

class Periodico : public Livro{
	private:
		int issn;
	public:
        Periodico(string tit, string aut, string gen, int issn_num);// construtor
		int get_issn(){
			return issn;
		}
};
Periodico::Periodico(string tit, string aut, string gen, int issn_num):Livro(tit, aut, gen)
{
    issn = issn_num;
}

class LivroDigital : public Livro{
    private:
	    string doi;
    public:
        LivroDigital(string tit, string aut, string gen, string doi_num);// construtor
	    string get_doi(){
		return doi;
	    }
};

LivroDigital::LivroDigital(string tit, string aut, string gen, string doi_num):Livro(tit, aut, gen)
{
    doi = doi_num;
}

/* MEMBRO */
class Membro{
private:
    string nome;
    int id;
public:
    Membro(string name, int number); // construtor

     // getters
     string get_nome(){
         return nome;
     }

     int get_id(){
         return id;
     }
};

Membro::Membro(string name, int number)
{
    nome = name;
    id = number;
}


/* EMPRÉSTIMO ou BIBLIOTECA
    Empréstimo
    Atributos data de empréstimo, data esperada / efetiva de devolução,
    que membro que emprestou, qual livro.
    data de esperada devolução = empréstimo + 7 dias
    Métodos: emprestar() (não sei se precisa) e devolver(). Cada empréstimo
    é um objeto

    Biblioteca
    pode ser criada só uma instância e ela tem vários registros de empréstimo */
class Emprestimo{
    protected:
        Membro membro;
        Livro livro;
    public:
        Emprestimo(Membro emprestador, Livro emprestado);
};

Emprestimo::Emprestimo(Membro emprestador, Livro emprestado){
    membro = emprestador;
    livro = emprestado;
}

int main(){
    // objeto hobbit da classe livro, definindo atributos com o construtor da classe
    Livro hobbit("O Hobbit", "J. R. R. Tolkien", "Fantasia");
    Membro john("John Doe", 42);
    LivroDigital divergente("Divergente", "Veranica Roth", "Drama", "10.1590/S0104-40362020002803115");
    Periodico revista_nature("Nature", "Nature Publishing Group", "Ciência", 14764687); // Exemplo de uso de Periódico
    
    divergente.ler(); // chamando um método
    hobbit.soltar(); // outro método

    // get título e autor
    cout << "Livro 1\t\t" << hobbit.get_titulo() << ": " << hobbit.get_autor()
         << endl;
    
    cout << "Membro " << john.get_id() << ": " << john.get_nome() << endl;
    
    cout << "Livro 2\t\t" << divergente.get_titulo() << ": "
         << divergente.get_autor() << " DOI: " << divergente.get_doi() << endl;
    
         cout << "Periódico\t" << revista_nature.get_titulo()
         << " (" << revista_nature.get_autor() << ") - ISSN: "
         << revista_nature.get_issn() << endl;
    return 0;
}
