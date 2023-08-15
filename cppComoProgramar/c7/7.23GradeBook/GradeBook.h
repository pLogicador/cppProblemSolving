#include <string> // O programa utiliza a classe string da C++ Standard Library
using std::string;

// Defini��o da classe GradeBook
class GradeBook
{
public:
    // Constantes
    static const int students = 10; // N�mero de alunos
    static const int tests = 3; // N�mero de testes

    // O construtor inicializa o nome do curso e o array de notas
    GradeBook(string, const int[][tests]);

    void setCourseName(string); // Fun��o para configurar o nome do curso
    string getCourseName(); // Fun��o para recuperar o nome do curso
    void displayMessage(); // Exibe uma mensagem de boas-vindas
    void processGrades(); // Realiza v�rias opera��es nos dados
    int getMinimum(); // Localiza a nota m�nima no livro de notas
    int getMaximum(); // Localiza a nota m�xima no livro de notas
    double getAverage(const int[], const int); // Encontra a m�dia das notas
    void outputBarChart(); // Gera a sa�da do gr�fico de barras de distribui��o de notas
    void outputGrades(); // Gera a sa�da do conte�do do array de notas

private:
    string courseName; // Nome do curso para esse livro de notas
    int grades[students][tests]; // Array bidimensional de notas
};
