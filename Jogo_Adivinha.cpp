#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
//Bibliotecas cstdlib -> sera utilizada para criar um gerador de numero aleatorio; ctime determina um periodo de tempo

class JogoAdivinha {
    //criacao da classe onde ficara a estrutura do jogo
    private:
        int numerosecreto;
        int tentativas;
        //variaveis privadas que armarzenarao o numero de tentativas do usuario e o numero que sera sorteado
    public:
    JogoAdivinha(){
        //Criacao do construtor que ira gerar os componentes do jogo o numero secreto e a coloca o numero de tentativas como 0
        srand(time(0));
        numerosecreto = rand() % 100 + 1;
        tentativas = 0;
    }
    //Em um determinado periodo de tempo o comando srand ira rodar e gerar um numero aleatorio que sera chamado pelo comando rand e seu modulo quando dividido por 100 pode variar de 99 a 0 por isso a adicao de 1 ao numero
    
    void jogar(){
        //Criacao do metodo que sera a estrutura do jogo; O jogador digitara um numero que sera comparado com o numero secreto determinado no construtor anteriormente, caso ele seja maior ou menor que o numero o programa informara ao usuario e tambem adicionara 1 a variavel armazenando as tentativas utilizadas
        int palpite;
        do{
            cout<< "Digite um numero entre 1 e 100: " << endl;
            cin >> palpite;
            tentativas++;
            
            if(palpite > numerosecreto){
                cout<< "O numero secreto é menor" << endl;
            }
            else if (palpite < numerosecreto){
                cout<< "O numero secreto é maior" << endl;
            } else {
                cout<< "Parabens o numero secreto é " << numerosecreto <<"!:) \nVoce acertou em "<< tentativas <<" tentativas!"<< endl;
            }
            //O codigo se repetira ate o o usuario acertar o numero que foi secreto, entao o programa informara ao usuario que ele acertou e quantas tentivas foram necessarias para ele acertar
            } while (palpite != numerosecreto);
        }
};

//Na classe principal ha a criacao do objeto jogo e a execucao do seu metodo jogar, para rodar o jogo.
int main(){
    JogoAdivinha jogo;
    jogo.jogar();
    return 0;
}

/*O construstor pode ser utilizado em um jogo para a criacao de objetos similares ou identicos, por exemplo a criacao de inimigos com dinamicas parecidas, como movimentacao e animacao de ataque, ou poderes que tenham um ataque similar, com o objetivo de economizar memoria e melhorar a performance do jogo, *\