//Carlos Ivan Romero Hernandez RH18030

//Librerias necesarias
#include <cstdlib> 
#include <iostream> 
#include <queue> 


using namespace std;

//declaracion de la estructura que va atener los datos de la cuenta y ticket
struct coor
{   //variables
    int x;
    int y;
    int z;
};

//funcion menu
void menu()
{
    cout<<"\n\t Menu Pincipal\n\n";
    cout<<"\t 1. AGREGAR REGISTRO                     "<<endl;
    cout<<"\t 2. MOSTRAR REGISTROS                    "<<endl;
    cout<<"\t 3. ELIMINAR REGISTRO                    "<<endl;
    cout<<"\t 4. SALIR                                "<<endl;
 
    cout<<"\n INGRESE OPCION: ";
}

int main()
{
    system("color 0b");

    coor aux; //variable auxiliar
    coor *ptr; /*Puntero que permite almacenar la direccion de los datos*/
    queue<coor> cola; //declaracion del nodo
    
    int op;//opcion de menu
   
    do{
        menu();  cin>> op; 
       
       switch(op)//segun la opcion seleccionada se realizan las acciones
        {
            case 1:
            	
            	//Agregar un nuevo registro
                    system("cls");                   
                    cout << "\n\t\tIngresar Datos" << endl;
                    cout << "\n\tValor de X: ";
                    cin >> aux.x;
                    cout << "\n\tValor de Y: ";
                    cin >> aux.y;
                    cout << "\n\tValor de Z: ";
                    cin >> aux.z;

                    cola.push(aux);//se guardan en la cola        
              
                break;
                
            case 2:

                //Se imprimen los datos de la cola usando un for
                system("cls");
                cout << "\n\t\tMostrar cola\n" << endl;
                //Se comprueba si la cola tiene datos
               if(cola.empty()==true){
               	
               	cout<<"\tNo hay Registros!";
               	
			   }else{
			   
                ptr = &cola.front();

                for (int i = 1; i <= cola.size(); i++) {

                    aux = *ptr;
                    cout << "Numero en cola: "<<i<<endl;
                    cout << "\n\tValor de X: " << aux.x;
                    cout << "\n\tValor de Y: " << aux.y;
                    cout << "\n\tValor de Z: " << aux.z << endl;

                    ptr++;
                }
}
                break;
            case 3:
                    
                //Eliminar el ultimo registro de la cola
                    system("cls");
                    float xmedia;
                    float ymedia;
                    float zmedia;


                    cout << "\n\t\tMostrar Datos" << endl;
                    
                    //Se comprueba si la cola tiene datos
               if(cola.empty()==true){
               	
               	cout<<"\n\n\tActualmente no hay registros para Calcular la Media!";
               	
			   }else{
                    
                    
            }
                break;

            case 4:
            	//Salida
            	system("cls");

                cout<<"\n\n\tEsta saliendo del programa\n";					
			    cout<<"\tQue pase un buen dia!\n";					

                break;
        }


        cout<<endl<<endl;
        system("pause");  system("cls");
        
   }while(op!=4);

 
  return EXIT_SUCCESS;
}
