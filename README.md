# Trabalho em PThreads - Computação de Alto Desempenho - UNISINOS

Desenvolva um programa paralelo em C e pthreads que calcula e apresenta a
quantidade total de divisores de cada número presente em uma lista. Para isso, você
deverá implementar o modelo workpool, em que cada thread solicita o próximo número
para calcular a quantidade de divisores apenas após finalizar a computação atual.
• A implementação deve garantir que seja possível escolher facilmente a quantidade de
threads a serem criadas/executadas.
• A versão sequencial também deverá ser desenvolvida.
• Você deve coletar o tempo de execução dos programas.
• Além dos programas, você deverá escrever um relatório (2 páginas, no máximo)
explicando os resultados obtidos. Nos resultados você deverá comparar e analisar a
execução do programa sequencial e sua versão paralela utilizando diferentes quantidade
de threads. Por exemplo: executar os programa paralelo com 1 thread, 4 threads, 8
threads, 16 threads e 32 threads (Dica: após a execução com 1 (uma) thread, o número
de threads inicial deve ser igual a quantidade de cores físicos da sua máquina. Na
sequência, a quantidade de threads deve dobrar, até chegar em 32).
