#include <iostream>

using namespace std;


struct libro
{
        int codiceISBN;
        string titolo;
        string autore;
        string editore;
        int annoPubblicazione;
        int prezzo;
        string tagGenere;
};

int inserimento(libro struttura[])
{
    int n;
    cout<<"quanti libri vuoi inserire ?";
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cout<<"CodiceISBN :";
        cin>>struttura[i].codiceISBN;
        cout<<"titolo :";
        cin>>struttura[i].titolo;
        cout<<"autore :";
        cin>>struttura[i].autore;
        cout<<"editore :";
        cin>>struttura[i].editore;
        cout<<"annoPubblicazione :";
        cin>>struttura[i].annoPubblicazione;
        cout<<"prezzo :";
        cin>>struttura[i].prezzo;
        cout<<"tagGenere :";
        cin>>struttura[i].tagGenere;
    }
    return n;
}

void stampa (libro struttura[],int n)

{
    for(int i=0; i<n; i++)
    {
        cout<<"\t STAMPA";
        cout<<"Libro n. \n"<<i+1<<endl;
        cout<<"Codice :  \n"<<struttura[i].codiceISBN<<endl;
        cout<<"Titolo :  \n"<<struttura[i].titolo<<endl;
        cout<<"Autore :  \n"<<struttura[i].autore<<endl;
        cout<<"Editore : \n"<<struttura[i].editore<<endl;
        cout<<"Anno Pubblicazione :  \n"<<struttura[i].annoPubblicazione<<endl;
        cout<<"Prezzo :  \n"<<struttura[i].prezzo<<endl;
        cout<<"Tag Genere :  \n"<<struttura[i].tagGenere<<endl;
    }
}
int main()
{
    int n=0;
    libro struttura[50];

    n=inserimento(struttura);
    stampa(struttura, n);

    return 0;
}
