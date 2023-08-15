#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;

#include <iomanip> // Manipuladores de fluxo parametrizados
using std::setprecision; // Configura a precis�o da sa�da num�rica
using std::setw; // Configura a largura de campo

#include "GradeBook.h" // Inclui a defini��o da classe GradeBook de GradeBook.h






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

// Fun��o para configurar o nome do curso
void GradeBook::setCourseName(string name)
{
    courseName = name; // Armazena o nome do curso
}

// Fun��o para recuperar o nome do curso
string GradeBook::getCourseName()
{
    return courseName;
}

// Exibe uma mensagem de boas-vindas para o usu�rio de GradeBook
void GradeBook::displayMessage()
{
    cout << "Welcome to the grade book for\n" << getCourseName() << "!" << endl;
}

// Realiza v�rias opera��es nos dados
void GradeBook::processGrades()
{
    // Gera sa�da do array de notas
    outputGrades();

    // Chama fun��es getMinimum e getMaximum
    cout << "\nLowest grade in the grade book is " << getMinimum()
         << "\nHighest grade in the grade book is " << getMaximum() << endl;

    // Gera sa�da do gr�fico de distribui��o de notas de todas as notas em todos os testes
    outputBarChart();
}

// Localiza a nota m�nima
int GradeBook::getMinimum()
{
    int lowGrade = 100; // Sup�e que a nota mais baixa � 100

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

// Localiza a nota m�xima
int GradeBook::getMaximum()
{
    int highGrade = 0; // Sup�e que a nota mais alta � 0

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

// Determina a m�dia de um conjunto particular de notas
double GradeBook::getAverage(const int setOfGrades[], const int grades)
{
    int total = 0; // Inicializa o total

    // Soma as notas no array
    for (int grade = 0; grade < grades; grade++)
    {
        total += setOfGrades[grade];
    }

    // Retorna a m�dia das notas
    return static_cast<double>(total) / grades;
}

// Gera a sa�da do gr�fico de barras exibindo a distribui��o de notas
void GradeBook::outputBarChart()
{
    cout << "\nOverall grade distribution:" << endl;

    // Armazena a frequ�ncia de notas em cada intervalo de 10 notas
    const int frequencySize = 11;
    int frequency[frequencySize] = {0};

    // Para cada nota, incrementa a frequ�ncia apropriada
    for (int student = 0; student < students; student++)
    {
        for (int test = 0; test < tests; test++)
        {
            ++frequency[grades[student][test] / 10];
        }
    }

    // Para cada frequ�ncia de nota, imprime uma barra no gr�fico
    for (int count = 0; count < frequencySize; count++)
    {
        // Gera a sa�da do r�tulo da barra ("0-9:", ..., "90-99:", "100:")
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

        cout << endl; // Inicia uma nova linha de sa�da
    }
}

// Gera a sa�da do conte�do do array de notas
void GradeBook::outputGrades()
{
    cout << "\nThe grades are:\n\n";
    cout << " "; // Alinha t�tulos de coluna

    // Cria um t�tulo de coluna para cada um dos testes
    for (int test = 0; test < tests; test++)
    {
        cout << "Test " << test + 1 << " ";
    }

    cout << "Average" << endl; // T�tulo da coluna de m�dia do aluno

    // Cria linhas/colunas de texto que representam notas do array
    for (int student = 0; student < students; student++)
    {
        cout << "Student " << setw(2) << student + 1;

        // Gera a sa�da das notas do aluno
        for (int test = 0; test < tests; test++)
        {
            cout << setw(8) << grades[student][test];
        }

        // Chama a fun��o-membro getAverage para calcular a m�dia do aluno;
        // passa a linha de notas e o valor dos testes como argumentos
        double average = getAverage(grades[student], tests);
        cout << setw(9) << setprecision(2) << fixed << average << endl;
    }
}
