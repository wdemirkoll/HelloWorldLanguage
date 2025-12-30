#include <iostream>

// Prints "Hello, World!" in English
void English(){
    std::cout << "Hello, World!" << std::endl;
}

// Prints "Hello, World!" in Spanish
void Spanish(){
    std::cout << "Hola, Mundo!" << std::endl;
}

// Prints "Hello, World!" in French
void French(){
    std::cout << "Bonjour le Monde!" << std::endl;
}

// Prints "Hello, World!" in German
void German(){
    std::cout << "Hallo, Welt!" << std::endl;
}

// Prints "Hello, World!" in Italian
void Italian(){
    std::cout << "Ciao, Mondo!" << std::endl;
}

// Prints "Hello, World!" in Portuguese
void Portuguese(){
    std::cout << "Ola, Mundo!" << std::endl;
}

int main(){
    int Vote; // Stores user's language selection

    // Infinite loop to keep the program running
    while(true){
        // Display language menu
        std::cout << "1 - English" << std::endl;
        std::cout << "2 - Spanish" << std::endl;
        std::cout << "3 - French" << std::endl;
        std::cout << "4 - German" << std::endl;
        std::cout << "5 - Italian" << std::endl;
        std::cout << "6 - Portuguese" << std::endl;
        std::cout << "Vote: ";

        // Get user input
        std::cin >> Vote;

        // Execute function based on user choice
        switch(Vote){
            case 1:
                English();
                break;

            case 2:
                Spanish();
                break;

            case 3:
                French();
                break;

            case 4:
                German();
                break;

            case 5:
                Italian();
                break;

            case 6:
                Portuguese();
                break;

            // Handles invalid input
            default:
                std::cout << "Invalid Selection!" << std::endl;
                return 0; // Exit
            }
      }

    return 0;
}
