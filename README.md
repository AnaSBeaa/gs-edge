# Global Solution 2026 - Monitoramento de Energia Solar Espacial

## Descrição do Projeto

Este projeto foi desenvolvido para a Global Solution com o objetivo de explorar uma possível aplicação da Indústria Espacial para a produção e transmissão de energia. A proposta original do grupo consiste na utilização de satélites equipados com painéis solares para captar energia no espaço, onde a incidência solar é mais intensa e constante do que na superfície terrestre. Essa energia seria então transmitida para a Terra por meio de feixes laser direcionados e convertida novamente em eletricidade para utilização pela população.

Devido às limitações de tempo, recursos e componentes disponíveis em ambiente acadêmico, o protótipo desenvolvido não busca reproduzir integralmente o sistema real, mas sim apresentar uma prova de conceito de um de seus princípios fundamentais: o monitoramento da captação de energia a partir da incidência luminosa.

Para representar esse conceito, foi utilizado um sensor LDR responsável por detectar a intensidade da luz incidente. As informações coletadas são processadas pelo Arduino e exibidas em um display LCD, permitindo acompanhar em tempo real a disponibilidade da fonte de energia. Um LED é utilizado como indicador visual do estado do sistema, sinalizando quando a intensidade luminosa atinge níveis adequados para representar a captação energética.

Dessa forma, o protótipo demonstra, em escala reduzida, conceitos presentes em sistemas de energia solar espacial, servindo como uma representação simplificada da solução proposta pelo grupo.

---

## Objetivo da Solução

O objetivo do projeto é demonstrar, de forma prática e acessível, o monitoramento da incidência luminosa em um sistema inspirado na geração de energia solar espacial.

A solução busca representar uma etapa fundamental desses sistemas: a identificação da disponibilidade de energia proveniente da luz solar.

---

## Componentes Utilizados

| Componente | Quantidade |
|------------|------------|
| Arduino Uno | 1 |
| Sensor LDR | 1 |
| Resistor 10 kΩ | 1 |
| LED | 1 |
| Resistor 220 Ω | 1 |
| LCD 16x2 I2C | 1 |
| Protoboard | 1 |

---

## Funcionamento do Sistema

O sistema realiza leituras contínuas do sensor LDR para identificar a intensidade luminosa presente no ambiente.

Quando a intensidade de luz ultrapassa o valor definido para detecção:

- O LED é acionado.
- O display LCD informa que a luz foi detectada.
- O valor lido pelo sensor é exibido em tempo real.

Quando não há luz suficiente:

- O LED permanece desligado.
- O LCD informa que não há incidência luminosa detectada.

Esse comportamento representa, de forma simplificada, a etapa de monitoramento da captação de energia em sistemas de energia solar espacial.

---

## Estrutura do Circuito

| Componente | Pino Arduino |
|------------|--------------|
| LDR | A0 |
| LED | D4 |
| LCD SDA | SDA |
| LCD SCL | SCL |
| LCD VCC | 5V |
| LCD GND | GND |

---

## Instruções de Execução

1. Abrir o projeto no simulador Wokwi.
2. Iniciar a simulação.
3. Alterar a intensidade luminosa do LDR.
4. Observar as informações exibidas no LCD.
5. Verificar o acionamento do LED conforme a luminosidade detectada.

---

## Link da Simulação

Você pode acessar a simulação no Wokwi através do link:

https://wokwi.com/projects/466284248373607425

---

## Integrantes

| Nome Completo | RM |
|---------------|----|---------|
| Ana Beatriz Santos | RM000000 |
| Henrique Pagliato | RM000000 |
| Paloma Cordeiro da Luz | RM000000 |
| Yasmin de Paiva Gomes | RM000000 |

---
## Onde encontrar o projeto completo

Você pode acessar o código completo através do repositório no GitHub:

---

## Considerações Finais

O projeto demonstra conceitos básicos relacionados ao monitoramento da energia solar e à utilização de sensores para identificação de condições favoráveis à geração energética. Apesar de simplificado, o protótipo permite visualizar princípios presentes em estudos sobre energia solar espacial e sistemas inteligentes de monitoramento.

