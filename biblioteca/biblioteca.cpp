#include <iostream>
#include <string>
#include <windows.h>

int main()
{
  std::string titulo[4];
  std::string anoPubli[4];
  std::string nombreAutor[4];


  std::cout << "hola empecemos con la biblioteca" << std::endl;
  Sleep(1000);

    for (int i = 0; i < 4; i++) {
        std::cout << "inserta el titulo del libro " << i + 1 << std::endl;
        std::getline(std::cin, titulo[i]);

        std::cout << "inserta el  ano de publicacion  " << i + 1 << std::endl;
        std::getline(std::cin, anoPubli[i]);

        std::cout << "inserta el  nombre del autor  " << i + 1 << std::endl;
        std::getline(std::cin, nombreAutor[i]);

        system("CLS");
    }

    for (int i = 0; i < 4; i++) {
        std::cout << std::endl << "LIBRO" << i + 1 << std::endl;

        std::cout << "El autor del libro " << i + 1 << " es: " << titulo[i] << std::endl;

        std::cout << "El ano de publicacion del libro " << i + 1 << " es: " << anoPubli[i] << std::endl;

        std::cout << "El autor del libro " << i + 1 << " es: " << nombreAutor[i] << std::endl;
    }
}