#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;

#include <iomanip> // Manipuladores de fluxo parametrizados
using std::setprecision; // Configura a precisão da saída numérica
using std::setw; // Configura a largura de campo

#include "GradeBook.h" // Inclui a definição da classe GradeBook de GradeBook.h






// Construtor de dois argumentos que inicializa courseName e array de notas
GradeBook::GradeBook(string name, const int gradesArray[][tests])
{
    setCourseName(name); // Inicializa courseName

    // Copia notas de gradesArray para grades
    for (int student = 0; student < students; student++)
    {
        for (int test = 0; test < tests; test++)
        {
            grades[student][test] = gradesArray[student][test];
        }
    }
}

// Função para configurar o nome do curso
void GradeBook::setCourseName(string name)
{
    courseName = name; // Armazena o nome do curso
}

// Função para recuperar o nome do curso
string GradeBook::getCourseName()
{
    return courseName;
}

// Exibe uma mensagem de boas-vindas para o usuário de GradeBook
void GradeBook::displayMessage()
{
    cout << "Welcome to the grade book for\n" << getCourseName() << "!" << endl;
}

// Realiza várias operações nos dados
void GradeBook::processGrades()
{
    // Gera saída do array de notas
    outputGrades();

    // Chama funções getMinimum e getMaximum
    cout << "\nLowest grade in the grade book is " << getMinimum()
         << "\nHighest grade in the grade book is " << getMaximum() << endl;

    // Gera saída do gráfico de distribuição de notas de todas as notas em todos os testes
    outputBarChart();
}

// Localiza a nota mínima
int GradeBook::getMinimum()
{
    int lowGrade = 100; // Supõe que a nota mais baixa é 100

    // Faz um loop pelas linhas do array de notas
    for (int student = 0; student < students; student++)
    {
        // Faz um loop pelas colunas da linha atual
        for (int test = 0; test < tests; test++)
        {
            // Se a nota for menor que lowGrade, atribui a nota a lowGrade
            if (grades[student][test] < lowGrade)
            {
                lowGrade = grades[student][test]; // Nova nota mais baixa
            }
        }
    }

    return lowGrade; // Retorna a nota mais baixa
}

// Localiza a nota máxima
int GradeBook::getMaximum()
{
    int highGrade = 0; // Supõe que a nota mais alta é 0

    // Faz um loop pelas linhas do array de notas
    for (int student = 0; student < students; student++)
    {
        // Faz um loop pelas colunas da linha atual
        for (int test = 0; test < tests; test++)
        {
            // Se a nota atual for maior que highGrade, atribui essa nota a highGrade
            if (grades[student][test] > highGrade)
            {
                highGrade = grades[student][test]; // Nova nota mais alta
            }
        }
    }

    return highGrade; // Retorna a nota mais alta
}

// Determina a média de um conjunto particular de notas
double GradeBook::getAverage(const int setOfGrades[], const int grades)
{
    int total = 0; // Inicializa o total

    // Soma as notas no array
    for (int grade = 0; grade < grades; grade++)
    {
        total += setOfGrades[grade];
    }

    // Retorna a média das notas
    return static_cast<double>(total) / grades;
}

// Gera a saída do gráfico de barras exibindo a distribuição de notas
void GradeBook::outputBarChart()
{
    cout << "\nOverall grade distribution:" << endl;

    // Armazena a frequência de notas em cada intervalo de 10 notas
    const int frequencySize = 11;
    int frequency[frequencySize] = {0};

    // Para cada nota, incrementa a frequência apropriada
    for (int student = 0; student < students; student++)
    {
        for (int test = 0; test < tests; test++)
        {
            ++frequency[grades[student][test] / 10];
        }
    }

    // Para cada frequência de nota, imprime uma barra no gráfico
    for (int count = 0; count < frequencySize; count++)
    {
        // Gera a saída do rótulo da barra ("0-9:", ..., "90-99:", "100:")
        if (count == 0)
        {
            cout << " 0-9: ";
        }
        else if (count == 10)
        {
            cout << " 100: ";
        }
        else
        {
            cout << count * 10 << "-" << (count * 10) + 9 << ": ";
        }

        // Imprime a barra de asteriscos
        for (int stars = 0; stars < frequency[count]; stars++)
        {
            cout << '*';
        }

        cout << endl; // Inicia uma nova linha de saída
    }
}

// Gera a saída do conteúdo do array de notas
void GradeBook::outputGrades()
{
    cout << "\nThe grades are:\n\n";
    cout << " "; // Alinha títulos de coluna

    // Cria um título de coluna para cada um dos testes
    for (int test = 0; test < tests; test++)
    {
        cout << "Test " << test + 1 << " ";
    }

    cout << "Average" << endl; // Título da coluna de média do aluno

    // Cria linhas/colunas de texto que representam notas do array
    for (int student = 0; student < students; student++)
    {
        cout << "Student " << setw(2) << student + 1;

        // Gera a saída das notas do aluno
        for (int test = 0; test < tests; test++)
        {
            cout << setw(8) << grades[student][test];
        }

        // Chama a função-membro getAverage para calcular a média do aluno;
        // passa a linha de notas e o valor dos testes como argumentos
        double average = getAverage(grades[student], tests);
        cout << setw(9) << setprecision(2) << fixed << average << endl;
    }
}
