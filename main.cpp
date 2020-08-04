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
   char d;
   ofstream archivoprueba;
   string nombrearchivo;
   cout<<"Ingrese el nombre del archivo: ";
   getline(cin,nombrearchivo);
   archivoprueba.open(nombrearchivo.c_str(),ios::app);
   do
    {
    cout<<"\tIngrese el nombre,por favor :";
    getline(cin,nombre,'\n');

    cout<<"\tIngrese el apellido, por favor:";
    getline(cin,apellido,'\n');

    cout<<"\tIngrese la edad, por favor:";
    cin>>edad;

    archivoprueba<<nombre<<" "<<apellido<<" "<<edad<<"\n";

    cout<<"DESEA INGRESAR OTRA INFORMACION ADICIONAL  s/n";
    cin>>d;

    cin.ignore();
    }
   while(d=='s');

   
   
   archivoprueba.close();

  

       }
    void arch_lectura (){
   string nombre;
   string apellido;
   int edad;
   char d;
    
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