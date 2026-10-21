# 🔄 Algoritmos de Ordenação (Seleção Direta e Bubble Sort) em C++

Este repositório reúne aplicações práticas desenvolvidas em **C++** focadas no estudo de **algoritmos de ordenação**, que são técnicas fundamentais da ciência da computação para organizar elementos de um vetor em uma ordem específica (crescente ou decrescente).

---

## 📌 Sobre o Projeto

Estes projetos foram desenvolvidos como parte das atividades avaliativas de **Estrutura de Dados** sob a orientação do **Professor Cação**. O objetivo principal foi compreender a lógica por trás da organização de dados, analisando o comportamento, as passagens e as trocas de posições em vetores estáticos.

O repositório contempla dois dos principais métodos clássicos de ordenação:

---

## 🔍 1. Ordenação por Seleção Direta (Selection Sort)

Este algoritmo foca em selecionar repetidamente o maior (ou menor) elemento da parte não ordenada do vetor e colocá-lo em sua posição definitiva no final do vetor a cada passagem.

### ⚙️ Como Funciona:
* **Varredura por Passagens:** Percorre o vetor repetidamente, reduzindo o escopo a cada ciclo (`N - pass`).
* **Busca de Máximos:** Identifica o maior valor e a sua respectiva posição (`pos`) na sub-lista atual.
* **Posicionamento:** Move o maior elemento encontrado para o final da faixa não ordenada, ajustando a estrutura de forma iterativa até que todo o vetor esteja ordenado.
* **Feedback:** Exibe o estado do vetor após cada passagem no terminal.

---

## 🫧 2. Ordenação por Bolha Otimizada (Bubble Sort)

Este algoritmo compara pares de elementos adjacentes e os troca de lugar caso estejam fora de ordem, fazendo com que os maiores elementos "flutuem" para o final do vetor.

### ⚙️ Como Funciona:
* **Comparações Adjacentes:** Analisa elementos vizinhos (`x[i]` e `x[i+1]`), realizando a troca com o auxílio de uma variável temporária (`aux`) se o primeiro for maior que o segundo.
* **Otimização por Flag (`troca`):** Utiliza uma variável de controle (`troca=1`). Se durante uma passagem completa nenhuma alteração for realizada, significa que o vetor já está totalmente ordenado, encerrando o loop antecipadamente para economizar processamento.
* **Feedback:** Exibe o número da passagem e o estado atualizado do vetor sempre que ocorre uma troca efetiva.

---

## 🛠️ Tecnologias Utilizadas

* **Linguagem:** C++
* **Biblioteca Padrão:** `<iostream>`

---

## 🚀 Como Executar os Projetos

1. **Clone o repositório:**
   ```bash
   git clone [https://github.com/seu-usuario/seu-repositorio.git](https://github.com/zambiancoII/Aula-de-estrutura-de-dados-21-10.git)
Acesse a pasta do projeto:

Bash
cd seu-repositorio
Compile o arquivo desejado:

Para a Seleção Direta:

Bash
g++ selecao.cpp -o selecao
Para o Bubble Sort:

Bash
g++ bubblesort.cpp -o bubblesort
Execute o programa:

No Linux / macOS:

Bash
./selecao  # ou ./bubblesort
No Windows:

DOS
selecao.exe  # ou bubblesort.exe


👨‍🏫 Créditos e Agradecimentos
Projetos avaliativos desenvolvidos para a disciplina de Estrutura de Dados sob a orientação do Professor Cação.
