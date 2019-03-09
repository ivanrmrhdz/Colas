//Carlos Ivan Romero Hernandez RH18030

//Librerias necesarias
#include <cstdlib> 
#include <iostream> 
#include <queue> 


using namespace std;

//declaracion de la estructura que va atener los datos de la cuenta y ticket
struct cuenta 
{   //variables
    char ticket[4];
    int NCuenta;
    int edad;
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

    cuenta aux; //variable auxiliar
    cuenta *ptr; /*Puntero que permite almacenar la direccion de los datos*/
    queue<cuenta> cola; //declaracion del nodo
    
    int op;//opcion de menu
   
    do{
        menu();  cin>> op; 
       
       switch(op)//segun la opcion seleccionada se realizan las acciones
        {
            case 1:
            	
            	//Agregar un nuevo registro
                    system("cls");                   
                    cout << "\n\t\tNUEVO REGISTRO" << endl;
                    cout << "\n\tNumero de Ticket: ";
                    cin >> aux.ticket;
                    cout << "\n\tNumero de cuenta: ";
                    cin >> aux.NCuenta;
                    cout << "\n\tEdad: ";
                    cin >> aux.edad;

                    cola.push(aux);//se guardan en la cola        
              
                break;
                
            case 2:

                //Se imprimen los datos de la cola usando un for
                system("cls");
                cout << "\n\t\tDATOS REGISTRADOS\n" << endl;
                //Se comprueba si la cola tiene datos
               if(cola.empty()==true){
               	
               	cout<<"\tNo hay Registros!";
               	
			   }else{
			   
                ptr = &cola.front();

                for (int i = 1; i <= cola.size(); i++) {

                    aux = *ptr;
                    cout << "\n\tTicket: " << aux.ticket;
                    cout << "\n\tNumero de cuenta: " << aux.NCuenta;
                    cout << "\n\tEdad: " << aux.edad << endl;

                    ptr++;
                }
}
                break;
            case 3:
                    
                //Eliminar el ultimo registro de la cola
                    system("cls");


                    cout << "\n\t\tELIMINAR REGISTRO" << endl;
                    
                    //Se comprueba si la cola tiene datos
               if(cola.empty()==true){
               	
               	cout<<"\n\n\tActualmente no hay registros para eliminar!";
               	
			   }else{
                    
                    cout<<"\n\tNota: Se eliminara el registro mas antiguo\n";
                    cout<<"\n\n\tDesea eliminar el registro?"<<endl;
                    int m;//variable para confirmar acciones	
					cout<<"\t1. Si            2. No"<<endl;	
					cout<<"\tSeleccione: ";cin>>m;	
			        //dependiendo de la seleccion se realizan acciones
					if(m==1){
						
					cola.front();
                    cola.pop();//se elimina de la cola 	
					cout<<"\n\tRegistro eliminado";
						
					}else{
						
						cout<<"\n\tNo se eliminara el registro"<<endl;
						cout<<"\n\tSera redirigido al menu principal";
		            }
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

