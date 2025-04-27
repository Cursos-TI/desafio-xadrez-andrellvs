# XADREZ EM C
# Desenvolvendo a Lógica do Jogo
</div>
  <div style="display: inline_block"><br>
  <img height="250" width="850" src="https://www.torneiosdexadrez.com.br/wp-content/uploads/2023/12/jogando-xadrez-720x380.png" />
</div>

# COMPILAÇÃO:

🛠️ Pré-requisitos
- Tenha o compilador C instalado.
- No Linux/macOS, o GCC geralmente já está disponível ou pode ser instalado com um comando.

- Linux (Debian/Ubuntu): sudo apt install build-essential
- macOS: xcode-select --install
- Windows: Use o MinGW ou o WSL com GCC

1. Abra o terminal ou prompt de comando
2. Navegue até a pasta onde está seu arquivo
3. Compile com o GCC
```shell 
cd /caminho/para/o/arquivo
```
```shell 
gcc programa.c -o programa
```
4. Execute o programa compilado
No Linux/macOS:
```shell 
./programa
```
No Windows:
```shell 
programa.exe
```

# ⚠️ Importante!!!
Você pode escolher qualquer um dos desafios para desenvolver. Sinta-se à vontade para começar pelo desafio que mais lhe interessa.

# Desafio de Xadrez - MateCheck

Bem-vindo ao desafio de Xadrez da MateCheck! Este projeto tem como objetivo testar e determinar os limites de utilização do código dentro do jogo utilizando estruturas de repetição e funções avançadas.

## Níveis do Desafio

### 🏅 Nível Novato

A equipe de testes da MateCheck recebeu uma solicitação para determinar os limites de utilização do código dentro do jogo. Para isso, a equipe de programação solicitou o envio de blocos de código contendo loops (estruturas de repetição) para avaliação de desempenho e possibilidades de aplicação.

**Movimentação das Peças:**
- Bispo: 5 casas na diagonal superior direita
- Torre: 5 casas para a direita
- Rainha: 8 casas para a esquerda

No jogo, apenas possuímos movimentação para quatro direções, mas o Bispo se mexe na diagonal. Com isso, foi adicionada uma condição para movimentação dessa peça, em que, para movê-lo, utilizamos o comando `printf` e, em seu valor, colocamos a direção usando a combinação de direções básicas. 

**Requisitos Funcionais:**
1. **Entrada de Dados:**
   - Os valores necessários devem ser inseridos manualmente a partir de variáveis dentro do código.
   - Será permitido o uso de constantes para facilitar a escrita do código e evitar repetição de valores.
2. **Estruturas de Repetição:**
   - Os códigos precisam ser desenvolvidos utilizando estruturas de repetição.
3. **Saída de Dados:**
   - O sistema deve exibir os resultados de cada procedimento de forma clara e legível.

**Requisitos Não Funcionais:**
1. **Performance:**
   - O sistema deve executar os cálculos e apresentar os resultados sem atrasos perceptíveis.
2. **Documentação:**
   - O código deve ser bem documentado, incluindo comentários detalhados sobre a função de cada parte do código.
3. **Manutenibilidade:**
   - O código deve ser escrito de forma clara, empregando nomes de variáveis que permitam o fácil entendimento.

**Instruções Detalhadas:**
1. **Entrada de Dados:**
   - Inclua a biblioteca padrão de entrada e saída no início do seu programa.
   - Declare variáveis constantes para definir os valores a serem comparados dentro das estruturas condicionais.
2. **Estruturas de Repetição:**
   - Utilize cada uma das diferentes estruturas de repetição apresentadas.
3. **Saída:**
   - As saídas deverão ser mostradas de forma clara e organizada, com a direção da peça.

**Nomenclatura:**

printf("Cima\n");
printf("Baixo\n");
printf("Esquerda\n");
printf("Direita\n");

### 🏅 Nível Aventureiro
Agora que já conseguimos mover as peças mais simples usando loops, os desenvolvedores pediram para elaborar os loops de outra forma. Para o desafio, moveremos o cavalo, que possui sua movimentação em L. O cavalo deve se movimentar para baixo e para a esquerda, usando pelo menos duas estruturas de repetição: uma deve ser for e a outra pode ser while ou do-while.

**Movimentação do Cavalo:**

Mover o cavalo em L utilizando loops aninhados.
Obs: É obrigatório o uso de loops aninhados.

### 🥇 Nível Mestre
Para o desafio final, as peças que utilizam loops simples terão seus códigos trocados por **funções recursivas**, e a movimentação do cavalo utilizará loops com variáveis múltiplas e/ou condições múltiplas, permitindo o uso de continue e break.

**Movimentação das Peças:**

**Bispo**: 5 casas na diagonal direita para cima
**Torre**: 5 casas para a direita
**Rainha**: 8 casas para a esquerda
**Cavalo**: 1 vez em L para cima à direita
Obs: É obrigatório o uso de loops aninhados na movimentação do bispo e funções recursivas.

Ao concluir este desafio, você terá um conhecimento mais profundo de estruturas complexas e elaboradas, amplamente utilizadas no mercado de trabalho. Boa sorte e boa programação!

Equipe de Ensino - MateCheck
