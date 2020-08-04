#include <iostream>

#include <fstream>

void arch_prueba ();
void arch_lectura ();
using namespace std;


int main()
{
   
arch_prueba ();//
arch_lectura ();

    return 0;
}void arch_prueba(){

  string nombre;
   string apellido;
   int edad;
   char r;
   ofstream archivoprueba;
   string nombrearchivo;
   cout<<"INGRESE EL NOMBRE DEL ARCHIVO: ";
   getline(cin,nombrearchivo);
   archivoprueba.open(nombrearchivo.c_str(),ios::app);
   do
    {
    cout<<"\tIngrese el nombre:";
    getline(cin,nombre,'\n');

    cout<<"\tIngrese el apellido:";
    getline(cin,apellido,'\n');

    cout<<"\tIngrese la edad:";
    cin>>edad;

    archivoprueba<<nombre<<" "<<apellido<<" "<<edad<<"\n";

    cout<<"DESEA INGRESAR OTRO CONTACTO s/n";
    cin>>r;

    cin.ignore();
    }
   while(r=='s');

   
   
   archivoprueba.close();

  

       }
    void arch_lectura (){
   string nombre;
   string apellido;
   int edad;
   char r;
    
   ifstream archivolectura("contactos.txt");
   string texto;
  while(!archivolectura.fail())
    {
        archivolectura>>nombre>>apellido>>edad;

        if(!archivolectura.eof())
            {
        getline(archivolectura,texto);
        cout<<"NOMBRE ES: "<<nombre<<"\n";
        cout<<"APELLIDO ES: "<<apellido<<"\n";
        cout<<"EDAD ES: "<<edad<<"\n";

            }

    }
   archivolectura.close(); 
}//carpeta contaxtos.txt