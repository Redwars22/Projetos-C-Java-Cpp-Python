#include <iostream>
#include <list>
#include <string>

using namespace std;

class Language {
    public:
        string name;
        list<char> phonemes;
        list<string> words;
};

int main()
{
    //Instanciar objetos da classe Language
    Language hawaiian;
    Language tagalog;

    //Setar propriedades de objetos da classe Language
    hawaiian.name = "'Olelo Hawai'i";
    hawaiian.phonemes = {'a', 'e', 'i', 'o', 'u'};
    hawaiian.words = {"ohana", "Hawaii", "kele", "kau", "olelo"};
    tagalog.name = "Tagalog";
    tagalog.phonemes = {'a', 'e', 'i', 'o', 'u'};
    tagalog.words = {"pilipino", "gabi", "magandang", "ako", "ingles", "bakit", "po", "kayo", "hindi"};

    cout << "##### " << hawaiian.name << " #####" << endl;
    cout << "Fonemas: ";

    for(char HawaiianPhonemes : hawaiian.phonemes)
        cout << " [" << HawaiianPhonemes << "]" ;

    cout << endl << "Palavras: ";

    for(string HawaiianWords : hawaiian.words)
        cout << HawaiianWords << ", ";

    cout << endl << endl << "##### " << tagalog.name << " #####" << endl;
    cout << "Fonemas: ";

    for(char TagalogPhonemes : tagalog.phonemes)
        cout << " [" << TagalogPhonemes << "]" ;

    cout << endl << "Palavras: ";

    for(string TagalogWords : tagalog.words)
        cout << TagalogWords << ", ";

    return 0;
}
