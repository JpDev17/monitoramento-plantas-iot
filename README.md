# Sistema Inteligente de Monitoramento de Plantas com IoT

## Descrição

Projeto desenvolvido para a disciplina Objetos Inteligentes Conectados da Universidade Presbiteriana Mackenzie.

O sistema utiliza um ESP32 conectado a sensores ambientais para monitorar as condições de uma planta e realizar irrigação automática quando necessário.

## Componentes Utilizados

- ESP32
- Sensor de Umidade do Solo Capacitivo
- Sensor DHT11
- Módulo Relé
- Bomba de Água
- Rede Wi-Fi

## Comunicação

A comunicação ocorre através do protocolo MQTT utilizando TCP/IP.

Os dados coletados pelos sensores são enviados para uma plataforma MQTT, permitindo monitoramento remoto em tempo real.

## Funcionamento

1. ESP32 conecta-se ao Wi-Fi.
2. ESP32 conecta-se ao Broker MQTT.
3. Sensores realizam leituras periódicas.
4. Dados são publicados no MQTT.
5. Quando a umidade do solo fica abaixo do limite definido, o relé aciona a bomba.
6. Após atingir a umidade adequada, a bomba é desligada.

## Autor

João Paulo Rodrigues Alves
Universidade Presbiteriana Mackenzie
