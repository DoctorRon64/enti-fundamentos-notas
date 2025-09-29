#include <iostream>
#include <vector>

float sagraDeFamilia = 1.5f;

#pragma region FUNCTIONS
    void PrintSquare(const int width, const int height) {
        for (int row = 0; row < height; ++row) {
            for (int col = 0; col < width; ++col) {
                std::cout << (char)254u;
            }
            std::cout << '\n';
        }
    };

    float CalculateCircle(const float radius) {
        const float PI = 3.141592653589793238462643383279502884197169399375105820974944592307816406286208998628034825342117067982148086513282306647093844f;
        return PI * radius * radius;
    };

    int artimetica(int uno, int dos, int tres) {
        return uno + dos + tres / 3;
    };
#pragma endregion

int main() {
    //============================ Esto el ejercico 1 =======================
    bool barackObamae = true;
    barackObamae = false;
    //============================ Esto el ejercico 2 =======================
    float casaMila;
    casaMila = sagraDeFamilia;
    //============================ Esto el ejercico 3 =======================
    int x = 12; 
    int y = 45;
    PrintSquare(x, y);
    //============================ Esto el ejercico 4 =======================
    int circleRadius = 1;
    int circleArea = CalculateCircle(circleRadius);
    std::cout << circleArea << std::endl;
    //============================ Esto el ejercico 5 =======================
    int oscar = 4;
    int richard = 5;
    int alex = 23;
    int nuevoNumero = artimetica(oscar, richard, alex);
    //============================ Esto el ejercico 6 =======================
    std::cout << "     * " << std::endl;
    std::cout << "    * *    " << std::endl;
    std::cout << "   * * *   " << std::endl;
    std::cout << "  * * * *  " << std::endl;
    std::cout << " * * * * * " << std::endl;
    std::cout << "* * * * * *" << std::endl;
    //============================ Esto el ejercico 7 =======================
    std::string nombre;
    std::cout << "Dime tu Nombre: ";
    std::cin >> nombre;
    std::cout << "tu nombre es: " << nombre << std::endl;
    int edad = 0;
    std::cout << "Dime tu edad: ";
    std::cin >> edad;
    std::cout << "tu nombre es: " << nombre << " y tu edad es: " << edad << std::endl;
    return 0;
}

