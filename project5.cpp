#include <iostream>
#include <mutex>
#include <fstream>

std::mutex logMutex;

bool fileExists(std::string& fileName) {
    return static_cast<bool>(std::ifstream(fileName));
}

//funcao para executar o arquivo
template <typename filename, typename T1, typename T2, typename T3, typename T4>
bool writeCsvFile(filename& fileName, T1 Numero, T2 Nome, T3 RU, T4 Email) {
    std::lock_guard<std::mutex> csvLock(logMutex);
    std::fstream file;
    file.open(fileName, std::ios::out | std::ios::app);
    if (file) {
        file << "\"" << Numero << "\",";
        file << "\"" << Nome << "\",";
        file << "\"" << RU << "\",";
        file << "\"" << Email << "\"";

        file << std::endl;
        return true;
    }
    else {
        return false;
    }
}

int main() {
    std::string csvFile = "3779539.csv";
    std::string nome = "Lucas Cezar Trentin";
    std::string RU = "3779539";
    std::string email = "czartrentin@gmail.com";

    if (!fileExists(csvFile))
        writeCsvFile(csvFile, "Numero", "Nome", "UR", "Email");

    for (int i = 1; i < 11; ++i) {
        if (!writeCsvFile(csvFile, i, nome, RU, email)) {
            std::cerr << "Erro ao executar o arquivo: " << csvFile << "\n";
        }
    }
    return 0;
}
