#include <iostream>

using namespace std;


struct libro
{
        string codiceISBN;
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

void eliminaLibro(libro struttura[], int n)
{
    string verifica;
    int i = 0;

    cout<<"inserire il codice del libro che si vuole eliminare"<<endl;
    cin>>verifica;

    if(struttura[i].codiceISBN == verifica)
    {
        for(int i = 0; i < n; i++)
        {
            struttura[i].titolo = "";
            struttura[i].autore = "";
            struttura[i].editore = "";
            struttura[i].annoPubblicazione = 0;
            struttura[i].prezzo = 0;
            struttura[i].codiceISBN = "";
            struttura[i].tagGenere = "";
        }
    }
    stampa(struttura, n);
}

void ricercaLibro(libro struttura[], int n)
{
    string ricerca;
    int i=0;
    
    cout<<"inserire il codice del libro da ricercare "<<endl;
    cin>>ricerca;
    
    if(struttura[i].codiceISBN == ricerca)
    {
        for(int i = 0; i < n; i++)
        {
            cout<<"Libro trovato"<<endl;
            cout<<"Codice :  \n"<<struttura[i].codiceISBN<<endl;
            cout<<"Titolo :  \n"<<struttura[i].titolo<<endl;
            cout<<"Autore :  \n"<<struttura[i].autore<<endl;
            cout<<"Editore :  \n"<<struttura[i].editore<<endl;
            cout<<"Anno Pubblicazio : \n"<<struttura[i].annoPubblicazione<<endl;
            cout<<"Prezzo : \n"<<struttura[i].prezzo<<endl;
            cout<<"Tag Genere : \n"<<struttura[i].tagGenere<<endl;
        }
    }
    stampa(struttura, n);
}

void modificaLibro(libro struttura[], int n)
{
    string modifica;
    int i=0;
    
    cout<<"inserire il codice del libro da modificare "<<endl;
    cin>>modifica;
    
    if(struttura[i].codiceISBN == modifica)
    {
        for(int i = 0; i < n; i++)
        {
            cout<<"CodiceISBN : "<<endl;
            cin>>struttura[i].codiceISBN;
            cout<<"Titolo : "<<endl;
            cin>>struttura[i].titolo;
            cout<<"Autore : "<<endl;
            cin>>struttura[i].autore;
            cout<<"Editori : "<<endl;
            cin>>struttura[i].editore;
            cout<<"Anno Pubblicazione: "<<endl;
            cin>>struttura[i].annoPubblicazione;
            cout<<"Prezzo : "<<endl;
            cin>>struttura[i].prezzo;
            cout<<"Tag Genere : "<<endl;
            cin>>struttura[i].tagGenere;
            
        }
    }
    stampa(struttura, n);
}

int main()
{
    int n=0, opzione;
    libro struttura[50];

    n=inserimento(struttura);
    

    do{

        cout<<"0 - esci dal programma"<<endl;

        cout <<"1 - Inserire libro" << endl;
        cout <<"2 - Stampa libro o catalogo" << endl;
        cout <<"3 - Cancella libro" << endl;
        cout <<"4 - Ricerca libro" << endl;
        cout <<"5 - Effettua modifiche al libro " << endl;
        cin >> opzione;

        if(opzione == 0)
            break;

        switch(opzione){
        case 1:
            inserimento(struttura);
        break;

        case 2:
            stampa(struttura, n);
        break;

        case 3:
            eliminaLibro(struttura, n);
        break;

        case 4:
            ricercaLibro(struttura, n);
        break;

        case 5:
            modificaLibro(struttura, n);
        break;

            default: cout << "Opzione non valida" << endl;
        }

    }
    while(true);

    return 0;
}
