#include <iostream>

using namespace std;

int main()
{
  return 0;
}

calss Pessoa
{
  protected:
    int idade;
    string nome;
    Pessoa* filho_direito;
    Pessoa* filho_esquerdo;
    Pessoa* progeniotor;
    
  public:
  
    Pesssoa()
    {
      nome = "";
      idade = 0;
      Pessoa* filho_direito = NULL;
      Pessoa* filho_esquerdo = NULL;
      Pessoa* progeniotor = NULL;
    };
    
    Pessoa(string nome , int idade)
    {
      this.nome = nome;
      this.idade = idade;
      Pessoa* filho_direito = NULL;
      Pessoa* filho_esquerdo = NULL;
      Pessoa* progeniotor = NULL;
    }
    
    ~Pessoa(){};
    
    void set_nome(string nome)
    {
      this.nome = nome;  
    }
    
    string get_nome()
    {
      return nome;
    }
    
    void set_idade(string nome)
    {
      this.idade = idade;
    }
    
    string get_idade()
    {
      return idade;
    }
    
    inserir_pessoa(Pessoa* frutp_de_uma_transa_bronze)
    {
      
    }
}
