# Simulador de Circuitos Digitais em C++

## 📖 Sobre o Projeto

Este é um simulador de circuitos lógicos digitais desenvolvido em C++. O projeto foi um trabalho da disciplina de Programação Avançada (DCA3303) do curso de Engenharia de Computação da Universidade Federal do Rio Grande do Norte (UFRN). 

O objetivo principal era desenvolver um simulador capaz de interpretar a descrição de um circuito, processar as conexões entre as portas lógicas e calcular os valores nas saídas. Uma característica central do simulador é o uso de um sistema de lógica de três estados (**TRUE**, **FALSE** e **UNDEFINED**), o que o permite, através de um algoritmo iterativo, determinar o estado de circuitos complexos que contenham ciclos (feedback loops).

A implementação seguiu requisitos estritos de design de software, com ênfase no uso de **polimorfismo e métodos virtuais** para a modelagem das diferentes portas lógicas.

## ✨ Funcionalidades Principais

* **Simulação de Portas Lógicas**: Suporte para 7 tipos de portas: `NOT`, `AND`, `OR`, `NAND`, `NOR`, `XOR` e `NXOR`. 
* **Lógica de Três Estados**: Todas as operações consideram os estados `TRUE`, `FALSE` e `UNDEFINED`, permitindo a análise de circuitos com saídas indeterminadas.
* **Suporte a Ciclos**: Implementa um algoritmo iterativo que resolve o estado de circuitos com realimentação, ou informa se a saída permanece indefinida. 
* **Leitura de Arquivos**: O simulador é capaz de ler e interpretar a topologia de um circuito a partir de um arquivo de texto com formato padronizado. 
* **Design Orientado a Objetos**: Utiliza conceitos de C++, como polimorfismo e métodos virtuais, para garantir um código modular e extensível. 

## 🛠️ Tecnologias Utilizadas

* **C++**

## 📂 Formato do Arquivo de Circuito

O simulador utiliza um formato de arquivo específico para descrever os circuitos. A estrutura básica é a seguinte:

```
CIRCUITO Nin Nout Nportas

PORTAS
id_port) type n_in
...

CONEXOES
id_port) id_orig_in_1 id_orig_in_2 ...
...

SAIDAS
id_out) id_orig_out
...
```
* `Nin`, `Nout`, `Nportas`: Número de entradas, saídas e portas do circuito. 
* `type`: Tipo da porta lógica (ex: `AN` para AND, `NT` para NOT, etc.). 
* `id_orig_in`: Origem de um sinal, podendo ser uma entrada do circuito (valor < 0) ou a saída de outra porta (valor > 0). 

## 🚀 Como Executar o Projeto

**Pré-requisitos:**
* Um compilador C++ (como g++).

**Passo a passo:**

1.  Clone este repositório:
    ```bash
    git clone (https://github.com/seu-usuario/seu-repositorio.git)
    ```
2.  Navegue até o diretório do projeto:
    ```bash
    cd seu-repositorio
    ```
3.  Compile os arquivos:
    ```bash
    g++ *.cpp -o simulador
    ```
    ```bash
    make
    ```
4.  Execute o programa:
    ```bash
    ./simulador
    ```

## 🧠 Aprendizados e Desafios

Este projeto foi fundamental para solidificar conhecimentos em Programação Orientada a Objetos e boas práticas de desenvolvimento em C++. Os principais aprendizados foram:

* **Aplicação Prática de Polimorfismo**: O requisito de usar métodos virtuais para o comportamento das portas foi um excelente exercício para entender o poder do polimorfismo e como ele evita o uso de estruturas condicionais (`if`/`switch`) complexas, tornando o código mais limpo e extensível.
* **Gerenciamento de Memória**: A implementação dos construtores (cópia e movimento), destrutores e operadores de atribuição para a classe `Circuito` exigiu um cuidado especial com o gerenciamento de memória dinâmica.
* **Desenvolvimento de Algoritmos**: Projetar e implementar o algoritmo iterativo para a simulação, que lida corretamente com loops e estados indefinidos, foi um desafio lógico interessante.
* **Manipulação de Arquivos (Parsing)**: A necessidade de ler e interpretar um formato de arquivo específico proporcionou uma ótima experiência com operações de I/O e validação de dados em C++.
