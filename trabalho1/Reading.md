Em 1943, McCulloch e Pitts sugeriram um modelo matemático para o
funcionamento do neurônio biológico. O neurônio lógico, nome pelo qual
ficou conhecido, nada mais representa que uma célula nervosa com a
propriedade de poder estar excitada (nível lógico 1) ou inibida (nível lógico
0). O estado de excitação ou inibição é determinado pela seguinte função
não linear: se o somatório das entradas ponderadas do neurônio (SOMAP)
ultrapassar um determinado limiar T, a célula é dita excitada, caso
contrário, a célula é dita inibida. Em um neurônio com um vetor de
entrada X, os elementos individuais xi são multiplicados pelos pesos wi,
gerando SOMAP.

a) Escreva um programa principal que solicita ao usuário 10 valores
reais que são guardados em um vetor ENTRADAS e outros 10
valores reais que são guardados em um vetor PESOS. O programa
também deve solicitar ao usuário o valor do limiar T. Em seguida a
função “fneuronio” descrita abaixo deve ser chamada.

b) Escreva uma função “fneuronio”, que recebe por referência
(utilizando ponteiros) os vetores ENTRADAS e PESOS, preenchidos
pelo usuário, além dos valores do limiar T e do número máximo de
elementos do vetor ENTRADAS, e retorna (utilizando ponteiros) o
valor 1 caso o neurônio esteja excitado ou 0 caso o neurônio esteja
inibido.

c) No programa principal, verificar se o valor de retorno da função
“fneuronio” foi 1 ou 0 e escrever na tela do computador a
mensagem “Neurônio ativado!” ou “Neurôno inibido!”,
respectivamente.
