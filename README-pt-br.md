# pgm-generator
Um programa que gera imagens PGM usando manipulação de matrizes.

PGM é uma sigla para Portable Graymap Format. É um formato de arquivo definido pelo projeto Netpbm. Como seu nome sugere é um formato de escala de cinza e pode representar cerca de 65535 tons de cinza. Um exemplo de um arquivo desse formato seria o seguinte:
```
P2 
3 3 
10 
0 0 0 
0 10 0 
0 0 0 
```
* P2 é conhecido como o "número mágico". Ele define o tipo de arquivo. P2 significa que é um arquivo do tipo PGM. P1 seria um arquivo PBM (Portable Bitmap Format) e P3, PPM (Portable Pixmap Format).
* A segunda linha informa o tamanho da imagem por pixels. 3 por 3 pixels nesse caso. 
* A terceira linha é o valor máximo que um pixel pode ter. 10, nesse caso, representa o tom mais branco possível e 0 o mais escuro.
* O resto do arquivo são os valores de cinza de cada pixel. Usando matrizes em C você pode definini-los facilmente e formar suas próprias imagens.


