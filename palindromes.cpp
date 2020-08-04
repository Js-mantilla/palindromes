#include <iostream>
#include <string>
using namespace std;
int main() {
    string texto;                //se crea una variable de caracteres llamada "texto"
    int aux = 0, igual = 0;      // se crean unas variables llamadas "aux" y "igual" las cuales tienen un valor inicial de 0  
    
    cout << "Ingrese la palabra a evaluar: ";   // se imprime un texto en el terminal "ingrese la palabra a evaluar"
    getline(cin >> ws, texto);  //«<<«, en este caso le estamos pidiendo al usuario que ingrese una palabra. En la segunda línea se realiza la operación de entrada de datos pero con algunas diferencias a la entrada normal con el objeto cin, en este caso usamos la función getline() para capturar la información ingresada por el usuario capturando texto con espacios en blanco pero eliminando los espacios finales y saltos de línea del buffer.
    
    for(int ind = texto.length() - 1; ind >= 0; ind--) {
        if(texto[ind] == texto[aux]) {      //verifica que cada uno de los elementos del string en los índice ind y aux sean iguales
            igual++;    //la variable igual incrementa de a 1 (igual=igual + 1)
        }
        aux++;   // la variable aux incrementa de a 1 (aux= aux+1)
    }
    
    if(texto.length() == igual) {            //va a verificar que la longitud del texto o palabra ingresada por el usuario sea igual al valor que se encuentra almacenado en la variable igual
        cout << "La palabra ingresada es palindromo!! uwu" << endl;     //si se cumple la anterior condiccion imprime en el terminal "La palabra ingresada es palindromo!! :D"
    } else {                                                            //si no
        cout << "La palabra ingresada no es palindromo!! uwu" << endl;   // si no sse cumple la condiccion se imprimira en el terminal "La palabra ingresada no es palindromo!! uwu"
    }
    
    return 0;
}