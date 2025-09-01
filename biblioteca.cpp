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

class Livro {
    public:
        string titulo; // atributos título, autor e gênero
        string autor;
        string genero;
        void method(/* args */){ // método definido dentro da classe
            cout << "Flap flap, páginas virando" << endl;
        }
        void outClassDef();  // definição fora da classe
};

void Livro::outClassDef(/* args */) {
    cout << "Bum! Caiu no chão" << endl;
}

int main(){
    Livro hobbit; // objeto hobbit é da classe livro

    hobbit.titulo = "O Hobbit"; // definindo atributos
    hobbit.autor = "J. R. R. Tolkien";
    hobbit.genero = "Fantasia";
    
    hobbit.method(); // chamando um método
    hobbit.outClassDef(); // outro método

    cout << "Livro 1\t\t" << hobbit.titulo << ": " << hobbit.autor << endl;
    return 0;
}