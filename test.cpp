#include <iostream>
#include <string>

int main() {
    // Kullanıcıdan bir metin girmesini iste
    std::cout << "Lutfen bir metin girin: ";

    // Girişi saklamak için bir string değişkeni tanımla
    std::string metin;

    // Kullanıcının girişini al
    std::getline(std::cin, metin);

    // Girişi ekrana yazdır
    std::cout << "Girdiginiz metin: " << metin << std::endl;

    return 0;
}