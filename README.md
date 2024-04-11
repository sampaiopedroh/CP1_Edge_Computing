# CP1_Edge_Computing
-> Integrantes: Caio Soares Rossini(555084),Kayky Stiliano(555148),Thomaz Neves(557789) e Pedro Sampaio(555613)
Este projeto consiste em um sistema de verificação de intensidade luminosa para vinícolas, com a capacidade de alertar em três fases (verde, amarela e vermelha) para indicar o nível de luminosidade e uma buzina para alarmar quando estiver no nível vermelho. O objetivo é manter a luminosidade ideal para o armazenamento de vinhos.

-> Funcionamento:
O sistema é baseado em um sensor de luminosidade (ldr) que mede a intensidade luminosa do ambiente. O valor medido é convertido em uma leitura analógica (variando de 0 a 1023) e armazenado na variável vldr.

O código utiliza três LEDs RGB para indicar o nível de luminosidade:
- LED vermelho: Acionado quando a luminosidade é inadequada (>= 60).
- LED amarelo: Acionado quando a luminosidade está em um nível intermediário (30-60).
- LED verde: Acionado quando a luminosidade está no nível ideal (< 30).

Quando a luminosidade atinge um nível crítico (>= 60), o LED vermelho é acionado e a buzina é ativada para alertar sobre a condição inadequada. A função buzina() utiliza a biblioteca tone() para gerar um som com frequência de 200 Hz por 3 segundos.

O sistema também inclui a função Serial.println(vldr) para imprimir o valor da leitura do sensor na porta serial, o que pode ser útil para fins de monitoramento e calibração do sistema.

-> Configurações:
O código utiliza as seguintes definições para configurar os pinos do Arduino:
ldr: Pino A0, conectado ao sensor de luminosidade.
ledR: Pino 2, conectado ao LED vermelho.
ledG: Pino 4, conectado ao LED verde.
ledB: Pino 3, conectado ao LED amarelo.
som: Pino 9, conectado à buzina.
A função setup() é responsável por inicializar os pinos como saídas e configurar a porta serial para a comunicação.

-> Considerações Finais:
Este sistema pode ser adaptado para outras aplicações que requerem a verificação de luminosidade e alertas sonoros. É importante considerar a calibração do sistema e ajustar os limites de luminosidade de acordo com as necessidades específicas do ambiente.
