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
class biblioteca
{
private:
    /* data */
public:
    biblioteca(/* args */);
    ~biblioteca();
};

biblioteca::biblioteca(/* args */)
{
}

biblioteca::~biblioteca()
{
}

class Livro {
    private:
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

Livro::Livro(string tit, string aut, string gen){
    titulo = tit;
    autor = aut;
    genero = gen;
}

void Livro::soltar(/* args */) {
    cout << "Bum! Caiu no chão" << endl;
}

int main(){
    // objeto hobbit da classe livro, definindo atributos com o construtor da classe
    Livro hobbit("O Hobbit", "J. R. R. Tolkien", "Fantasia");
    
    hobbit.ler(); // chamando um método
    hobbit.soltar(); // outro método

    // get título e autor
    cout << "Livro 1\t\t" << hobbit.get_titulo() << ": " << hobbit.get_autor() << endl;
    return 0;
}