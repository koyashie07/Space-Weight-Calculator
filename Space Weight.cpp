

#include <iostream>

int main()
{  
    std::cout << "What is your weight on Earth?(kg)\n";
    float weight;
    int planet;
    std::cin >> weight;
    std::cout << " 1 Mercury\n 2 Venus\n 3 Mars\n 4 Jupiter\n 5 Saturn\n 6 Uranus\n 7 Neptune\n ";
    std::cout << "Enter a number for the planet that you are gonna be on!\n";
    std::cin >> planet;
    switch (planet) {
    case 1:
        std::cout << weight * 0.38 << " kg";
        break;
    case 2:
        std::cout << weight * 0.91 << " kg";
        break;
    case 3:
        std::cout << weight * 0.38 << " kg";
        break;
    case 4:
        std::cout << weight * 2.34 << " kg";
        break;
    case 5:
        std::cout << weight * 1.06 << " kg";
        break;
    case 6:
        std::cout << weight * 0.92 << " kg";
        break;
    case 7:
        std::cout << weight * 1.19 << " kg";
        break;
    default:
        std::cout << "Error. Number selected is invalid!";
            break;
    }

}

