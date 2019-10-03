# pgm-generator
A program that generates PGM images using matrices manipulation.

PGM stands for Portable Graymap Format. It was defined by the Netpbm project. As the name suggests it is grayscale format that can represent 65535 shades of gray. An example of a file with this format would be:
```
P2 
3 3 
10 
0 0 0 
0 10 0 
0 0 0 
```
* P2 is known as the "magic number". It defines the file type. P2 means that is a PGM file. P3 would be PPM(Portable Pixmap Format) and P1 PBM(Portable Bitmap Format).
* The second line informs the size of the image per pixels. 3 by 3 in this case.
* The third line is the maximum value that a pixel can have. 10 in this case would represent the most white shade possible and 0 the most black.
* The rest of the file are the gray values of each pixel. Using matrices in C you can define them easily and form your own images.
