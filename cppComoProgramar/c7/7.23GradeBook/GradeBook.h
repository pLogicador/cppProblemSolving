#include <string> // O programa utiliza a classe string da C++ Standard Library
using std::string;

// Definição da classe GradeBook
class GradeBook
{
public:
    // Constantes
    static const int students = 10; // Número de alunos
    static const int tests = 3; // Número de testes

    // O construtor inicializa o nome do curso e o array de notas
    GradeBook(string, const int[][tests]);

    void setCourseName(string); // Função para configurar o nome do curso
    string getCourseName(); // Função para recuperar o nome do curso
    void displayMessage(); // Exibe uma mensagem de boas-vindas
    void processGrades(); // Realiza várias operações nos dados
    int getMinimum(); // Localiza a nota mínima no livro de notas
    int getMaximum(); // Localiza a nota máxima no livro de notas
    double getAverage(const int[], const int); // Encontra a média das notas
    void outputBarChart(); // Gera a saída do gráfico de barras de distribuição de notas
    void outputGrades(); // Gera a saída do conteúdo do array de notas

private:
    string courseName; // Nome do curso para esse livro de notas
    int grades[students][tests]; // Array bidimensional de notas
};
