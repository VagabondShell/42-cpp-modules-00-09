#include "Sed.hpp"
int main (int argc, char *argv[]) {

  if (argc < 5 && argc > 3)
  {
    std::string fileName(argv[1]);
    std::string s1(argv[2]);
    std::string s2(argv[3]);
    std::ifstream inputFile(fileName.c_str());
    std::string line;
    std::string buffer;
    if (!inputFile.is_open()) { 
      std::cerr << "Error: Could not open input file '" << argv[1] << "'." << std::endl;
      return 1; 
    }
    std::string outputFileName = fileName + ".replace";
    std::ofstream outputFile(outputFileName.c_str()); 
    if (!outputFile.is_open()) {
      std::cerr << "Error: Could not open output file." << std::endl;
      inputFile.close(); 
      return 1;
    }
    while (std::getline(inputFile, line))
    {
      if (!inputFile.eof())
        line +="\n";
      buffer += line;
    }
    outputFile << change(buffer, s1, s2);
    inputFile.close();
    outputFile.close();
  }
  else 
    std::cout << "invalid argument" << std::endl;
  return 0;
}
