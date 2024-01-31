Todos numeros de filas y columnas (enunciado) suman 34.

Los valores van ordenados arriba, abajo, izquierda y derecha.


Si encontramos un 1 colocar un 4 en la contigua.
Si encontramos un 3 colocar un 4 en la penultima y ultima.



Versiones:
 √  1- Recibir valores en string y converir a array de enteros.
    2- Mostrar todos los sitios posibles donde podemos poner un 4
    3- Descartar los 4s que estan mal puestos


int posibilities[] = {
    {1234, 4, 1},
    {1243, 3, 2},
    {1324, 2, 1},
    {1342, 3, 2},
    {1423, 2, 2},
    {1432, 2, 3},
    {2134, 3, 1},
    {2143, 2, 2},
    {2314, 3, 1},
    {2341, 3, 2},
    {2413, 2, 2},
    {2431, 2, 3},
    {3124, 2, 1},
    {3142, 2, 2},
    {3214, 2, 1},
    {3241, 2, 2},
    {3412, 2, 2},
    {3421, 2, 3},
    {4123, 1, 2},
    {4132, 1, 3},
    {4213, 1, 2},
    {4231, 1, 3},
    {4312, 1, 3},
    {4321, 1, 4}
};