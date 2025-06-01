#include <iostream>
#include <vector>
#include <algorithm>

// (Beispiel-Funktion, die eine DMX-Schnittstelle ansteuert, muss spezifisch für die verwendete Hardware sein)
void sendDmxData(const std::vector<unsigned char>& data) {
    // Hier würde die Hardware-Ansteuerung erfolgen, um die DMX-Daten zu senden.
    std::cout << "DMX Data sent: ";
    for (const auto& byte : data) {
        std::cout << (int)byte << " ";
    }
    std::cout << std::endl;
}

int main() {
    // Beispiel-DMX-Datenpaket
    std::vector<unsigned char> dmx_data;

    // Header (0x00 ist ein Beispiel)
    dmx_data.push_back(0x00);

    // Startadresse (0x01 ist ein Beispiel)
    dmx_data.push_back(0x01);

    // DMX-Kanäle (Beispiel: Kanal 1 = 100%, Kanal 2 = 50%)
    dmx_data.push_back(255);
    dmx_data.push_back(127);

    // Daten über DMX senden
    sendDmxData(dmx_data);

    return 0;
}