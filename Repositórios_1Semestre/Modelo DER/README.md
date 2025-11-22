# 🌱 Sistema de Monitoramento Ambiental Urbano - Poluição 

Este repositório apresenta o modelo de dados para um sistema de **monitoramento ambiental em cidades**, com foco na coleta, análise e emissão de relatórios sobre poluentes em áreas urbanas. O projeto foi desenvolvido como parte da formação em **Análise e Desenvolvimento de Sistemas**, utilizando conceitos de modelagem de banco de dados relacional.

---

## 🎯 Objetivo do Projeto

Criar uma estrutura de banco de dados capaz de representar a relação entre cidades, pontos de monitoramento, sensores, fontes de poluição e relatórios ambientais. O sistema visa apoiar decisões públicas e estudos ambientais por meio da organização eficiente dos dados coletados.

---

## 🧩 Estrutura do Modelo

O modelo é composto pelas seguintes entidades:

- **Cidade**: armazena dados como nome, estado e população.
- **Ponto de Monitoramento**: representa locais específicos dentro da cidade onde sensores são instalados.
- **Sensor**: dispositivos que medem níveis de poluentes em pontos de monitoramento.
- **Fonte de Poluição**: identifica e classifica origens de poluentes em cada cidade.
- **Relatório**: documentos emitidos com base nas leituras dos sensores.
- **Leitura**: registros de dados coletados pelos sensores em datas específicas.

---

## 🔗 Relacionamentos

- Uma cidade pode possuir vários pontos de monitoramento e emitir múltiplos relatórios.
- Cada ponto de monitoramento pode conter diversos sensores e estar associado a várias fontes de poluição.
- Sensores realizam leituras periódicas que alimentam os relatórios ambientais.

---

## 🛠️ Tecnologias e Ferramentas

Este projeto foi modelado com base em:

- **Modelagem ER (Entidade-Relacionamento)**
- **Conceitos de banco de dados relacional**
- **Planejamento para implementação em SGBDs como MySQL ou PostgreSQL**

---

## 🙋 Sobre Mim

Sou Vinicius Miranda Santos, estudante de **Análise e Desenvolvimento de Sistemas**, com interesse em soluções tecnológicas voltadas para sustentabilidade, dados urbanos e sistemas inteligentes. Este projeto representa meu compromisso com a aplicação prática dos conceitos aprendidos em sala de aula.

📧 Email : mirandavini228@gmail.com  
🔗 Meu GitHub : https://github.com/Vini01-dev


---

> Este repositório está em constante evolução e pode servir como base para aplicações reais de monitoramento ambiental em cidades brasileiras.
