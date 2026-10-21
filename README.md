# 🔄 Algoritmos de Ordenação e Busca em C++

Este repositório reúne aplicações práticas desenvolvidas em **C++** focadas no estudo de **algoritmos clássicos de ordenação e busca**, fundamentais para a manipulação eficiente de vetores na ciência da computação.

---

## 📌 Sobre o Repositório

Estes projetos foram desenvolvidos como parte das atividades avaliativas de **Estrutura de Dados** sob a orientação do **Professor Cação**. O objetivo principal foi compreender e implementar a lógica algorítmica para organizar elementos e localizar dados dentro de estruturas estáticas.

---

## 🗂️ Projetos Incluídos

### 1. 🔍 Ordenação por Seleção Direta (Selection Sort)
* **Descrição:** Algoritmo que seleciona repetidamente o maior elemento da parte não ordenada do vetor e o posiciona corretamente no final a cada passagem.
* **Principais Conceitos:** Varreduras com escopo decrescente (`N - pass`), busca de valores máximos e troca de posições baseada em índices.

### 2. 🫧 Ordenação por Bolha Otimizada (Bubble Sort)
* **Descrição:** Compara elementos adjacentes e os troca de lugar caso estejam fora de ordem, fazendo com que os maiores valores "flutuem" para o final do vetor.
* **Principais Conceitos:** Comparações vizinhas, variável auxiliar de troca e **otimização por flag (`troca`)** para encerrar o loop antecipadamente caso o vetor já esteja ordenado.

### 3. 🔎 Busca Sequencial em Vetor
* **Descrição:** Aplicação interativa que permite ao usuário informar uma chave de busca para localizá-la dentro de um vetor numérico estático.
* **Principais Conceitos:** Varredura linear, controle de interrupção por flag (`achou`) e validação de existência com retorno de índice (posição).

---

## 🛠️ Tecnologias Utilizadas

* **Linguagem:** C++
* **Biblioteca Padrão:** `<iostream>`

---

## 🚀 Como Executar os Projetos

1. **Clone o repositório:**
   ```bash
   git clone [https://github.com/seu-usuario/seu-repositorio.git](https://github.com/seu-usuario/seu-repositorio.git)
Acesse a pasta do projeto:

Bash
cd seu-repositorio
Compile o arquivo desejado:

Para a Seleção Direta: g++ selecao.cpp -o selecao

Para o Bubble Sort: g++ bubblesort.cpp -o bubblesort

Para a Busca Sequencial: g++ busca.cpp -o busca

Execute o programa correspondente:

No Linux / macOS: ./selecao (ou ./bubblesort, ./busca)

No Windows: selecao.exe (ou bubblesort.exe, busca.exe)

👨‍🏫 Créditos e Agradecimentos
Projetos avaliativos desenvolvidos para a disciplina de Estrutura de Dados sob a orientação do Professor Cação.
