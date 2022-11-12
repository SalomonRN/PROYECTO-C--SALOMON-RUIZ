#include <iostream>
using namespace std;

void moto();
void cc();
void carga();
void veh_ofi_esp_amb();
void autos_f();
void capacidad_6();
void aut_neg();
void servicio_publico();
void servicio_interm();
string matricula;
int pago;
int tipo;


int main()
{

	int soat;
	cout << "Tipos de SOAT: \n "<<
			"Motos: 1 -- Camperos y camionetas: 2 -- Vehiculos de carga o mixtos: 3 \n " << 
			"Vehiculos oficiales, especiales o ambulancias: 4 -- Autos familiares: 5\n "<<
			"Vehiculos con capacidad para 6 personas o mas pasajeros: 6\n " <<
			"Autos de negocio taxis y microbuses urbanos: 7\n "<<
			"Vehiculos de servicio publico, urbano, buses y busetas: 8\n " <<
			"Vehiculos de servicio intermunicipal: 9" << endl;
	
	cout << "Ingrese el numero de los tipos de SOAT anteriores: " << endl;
	cin >> soat;
	
	if (soat >0 && soat <10 ){
		switch (soat){
			case(1): {
				moto();
				break;
			}
			case(2): {
				cc();
				break;
			}
			case(3): {
				carga();
				break;
			}
			case(4): {
				veh_ofi_esp_amb();
				break;
			}
			case(5): {
				autos_f();
				break;
			}
			case(6): {
				capacidad_6();
				break;
			}
			case(7): {
				aut_neg();
				break;
			}
			case(8): {
				servicio_publico();
				break;
			}
			case(9): {
				servicio_interm();
				break;
			}
		}
	}else {
		cout << "ERROR" << endl;
		system("pause");
	}
}
void moto() {

	cout << "Ingrese su matricula: " << endl;
	cin >> matricula;
	cout << "Tipo de moto\n "<<
			"Ciclomotor: 1 -- Menos de 100 c.c : 2 -- Entre 100-200 c.c: 3 \n " <<	
			"Mas de 200 c.c: 4 -- Motocarros, tricimotos y cuadriciclos:5 \n " <<
			"Motocarro cinco pasajeros: 6 " << endl;
	cout << "Ingrese el numero del tipo de moto" << endl;
	cin >> tipo;
	
	if(tipo>0 && tipo<7){
		switch (tipo) {
			case(1): {
				int valor = 200200;
				int depo = 0;
				cout << "Total a pagar:" << valor <<endl;
				cout << "Valor a depositar: " << endl;
				cin >> depo;
				if (depo <= 0) {
					cout << "Valor no Aceptado";
				}else {
					pago = valor - depo;
					while (pago!=0){
						cout << "Nuevo valor total a pagar es:" << pago << endl;
						cout << "Valor a depositar: " << endl;
						cin >> depo;
						pago = pago - depo;
					}
					cout << "SOAT pagado de la matricula " << matricula  << endl;
					system("PAUSE");
				}
				break;
			}
			case(2): {
				int valor = 414800;
				int depo = 0;
				cout << "Total a pagar:" << valor << endl;
				cout << "Valor a depositar: " << endl;
				cin >> depo;
				if (depo <= 0) {
					cout << "Valor no Aceptado";
				}
				else {
					pago = valor - depo;
					while (pago != 0) {
						cout << "Nuevo valor total a pagar es:" << pago << endl;
						cout << "Valor a depositar: " << endl;
						cin >> depo;
						pago = pago - depo;
					}
					cout << "SOAT pagado de la matricula " << matricula << endl;
					system("PAUSE");
				}
				break;
			}
			case(3): {
				int valor = 556500;
				int depo = 0;
				cout << "Total a pagar:" << valor << endl;
				cout << "Valor a depositar: " << endl;
				cin >> depo;
				if (depo <= 0) {
					cout << "Valor no Aceptado";
				}
				else {
					pago = valor - depo;
					while (pago != 0) {
						cout << "Nuevo valor total a pagar es:" << pago << endl;
						cout << "Valor a depositar: " << endl;
						cin >> depo;
						pago = pago - depo;
					}
					cout << "SOAT pagado de la matricula " << matricula << endl;
					system("PAUSE");
				}
				break;
			}
			case(4): {
				int valor = 627600;
				int depo = 0;
				cout << "Total a pagar:" << valor << endl;
				cout << "Valor a depositar: " << endl;
				cin >> depo;
				if (depo <= 0) {
					cout << "Valor no Aceptado";
				}
				else {
					pago = valor - depo;
					while (pago != 0) {
						cout << "Nuevo valor total a pagar es:" << pago << endl;
						cout << "Valor a depositar: " << endl;
						cin >> depo;
						pago = pago - depo;
					}
					cout << "SOAT pagado de la matricula " << matricula << endl;
					system("PAUSE");
				}
				break;
			}
			case(5): {
				int valor = 627600;
				int depo = 0;
				cout << "Total a pagar:" << valor << endl;
				cout << "Valor a depositar: " << endl;
				cin >> depo;
				if (depo <= 0) {
					cout << "Valor no Aceptado";
				}
				else {
					pago = valor - depo;
					while (pago != 0) {
						cout << "Nuevo valor total a pagar es:" << pago << endl;
						cout << "Valor a depositar: " << endl;
						cin >> depo;
						pago = pago - depo;
					}
					cout << "SOAT pagado de la matricula " << matricula << endl;
					system("PAUSE");
				}
				break;
			}
			case(6): {
				int valor = 627600;
				int depo = 0;
				cout << "Total a pagar:" << valor << endl;
				cout << "Valor a depositar: " << endl;
				cin >> depo;
				if (depo <= 0) {
					cout << "Valor no Aceptado";
				}
				else {
					pago = valor - depo;
					while (pago != 0) {
						cout << "Nuevo valor total a pagar es:" << pago << endl;
						cout << "Valor a depositar: " << endl;
						cin >> depo;
						pago = pago - depo;
					}
					cout << "SOAT pagado de la matricula " << matricula << endl;
					system("PAUSE");
				}
				break;
			}
		}
	}else{
		cout << "ERROR" << endl;
		system("pause");
	}
}
void cc() {

	cout << "Ingrese su matricula: " << endl;
	cin >> matricula;
	cout << "Tipo de Campero y/o Camioneta\n " <<
		"C.C Menos de 1500cc y 0 a 9 años: 1 -- C.C Menos de 1500cc y 10 años o mas: 2\n " <<
		"1500cc a 2500cc 0 a 9años: 3 -- 1500cc a 2500cc y 10 años o mas: 4 \n " <<
		"Mas de 2500cc y 0 a 9 años : 5 -- Mas de 2500cc y 10 años o mas " << endl;
	cout << "Ingrese el numero del tipo de Campero y/o Camioneta" << endl;
	cin >> tipo;

	if (tipo > 0 && tipo < 7) {
		switch (tipo) {
		case(1): {
			int valor = 653500;
			int depo = 0;
			cout << "Total a pagar:" << valor << endl;
			cout << "Valor a depositar: " << endl;
			cin >> depo;
			if (depo <= 0) {
				cout << "Valor no Aceptado";
			}
			else {
				pago = valor - depo;
				while (pago != 0) {
					cout << "Nuevo valor total a pagar es:" << pago << endl;
					cout << "Valor a depositar: " << endl;
					cin >> depo;
					pago = pago - depo;
				}
				cout << "SOAT pagado de la matricula " << matricula << endl;
				system("PAUSE");
			}
			break;
		}
		case(2): {
			int valor = 785600;
			int depo = 0;
			cout << "Total a pagar:" << valor << endl;
			cout << "Valor a depositar: " << endl;
			cin >> depo;
			if (depo <= 0) {
				cout << "Valor no Aceptado";
			}
			else {
				pago = valor - depo;
				while (pago != 0) {
					cout << "Nuevo valor total a pagar es:" << pago << endl;
					cout << "Valor a depositar: " << endl;
					cin >> depo;
					pago = pago - depo;
				}
				cout << "SOAT pagado de la matricula " << matricula << endl;
				system("PAUSE");
			}
			break;
		}
		case(3): {
			int valor = 780400;
			int depo = 0;
			cout << "Total a pagar:" << valor << endl;
			cout << "Valor a depositar: " << endl;
			cin >> depo;
			if (depo <= 0) {
				cout << "Valor no Aceptado";
			}
			else {
				pago = valor - depo;
				while (pago != 0) {
					cout << "Nuevo valor total a pagar es:" << pago << endl;
					cout << "Valor a depositar: " << endl;
					cin >> depo;
					pago = pago - depo;
				}
				cout << "SOAT pagado de la matricula " << matricula << endl;
				system("PAUSE");
			}
			break;
		}
		case(4): {
			int valor = 924300;
			int depo = 0;
			cout << "Total a pagar:" << valor << endl;
			cout << "Valor a depositar: " << endl;
			cin >> depo;
			if (depo <= 0) {
				cout << "Valor no Aceptado";
			}
			else {
				pago = valor - depo;
				while (pago != 0) {
					cout << "Nuevo valor total a pagar es:" << pago << endl;
					cout << "Valor a depositar: " << endl;
					cin >> depo;
					pago = pago - depo;
				}
				cout << "SOAT pagado de la matricula " << matricula << endl;
				system("PAUSE");
			}
			break;
		}
		case(5): {
			int valor = 915200;
			int depo = 0;
			cout << "Total a pagar:" << valor << endl;
			cout << "Valor a depositar: " << endl;
			cin >> depo;
			if (depo <= 0) {
				cout << "Valor no Aceptado";
			}
			else {
				pago = valor - depo;
				while (pago != 0) {
					cout << "Nuevo valor total a pagar es:" << pago << endl;
					cout << "Valor a depositar: " << endl;
					cin >> depo;
					pago = pago - depo;
				}
				cout << "SOAT pagado de la matricula " << matricula << endl;;
				system("PAUSE");
			}
			break;
		}
		case(6): {
			int valor = 1020200;
			int depo = 0;
			cout << "Total a pagar:" << valor << endl;
			cout << "Valor a depositar: " << endl;
			cin >> depo;
			if (depo <= 0) {
				cout << "Valor no Aceptado";
			}
			else {
				pago = valor - depo;
				while (pago != 0) {
					cout << "Nuevo valor total a pagar es:" << pago << endl;
					cout << "Valor a depositar: " << endl;
					cin >> depo;
					pago = pago - depo;
				}
				cout << "SOAT pagado de la matricula " << matricula << endl;
				system("PAUSE");
			}
			break;
		}
		}
	}
	else {
		cout << "ERROR" << endl;
		system("pause");
	}
}
void carga() {

	cout << "Ingrese su matricula: " << endl;
	cin >> matricula;
	cout << "Tipo de Cargo o Mixto\n " <<
		"Menos de 5 toneladas: 1 -- De 5 a 15 toneladas : 2 -- Mas de 15 toneladas: 3 \n " << endl;
	cout << "Ingrese el numero del Cargo o Mixto" << endl;
	cin >> tipo;

	if (tipo > 0 && tipo < 4) {
		switch (tipo) {
		case(1): {
			int valor = 732400;
			int depo = 0;
			cout << "Total a pagar:" << valor << endl;
			cout << "Valor a depositar: " << endl;
			cin >> depo;
			if (depo <= 0) {
				cout << "Valor no Aceptado";
			}
			else {
				pago = valor - depo;
				while (pago != 0) {
					cout << "Nuevo valor total a pagar es:" << pago << endl;
					cout << "Valor a depositar: " << endl;
					cin >> depo;
					pago = pago - depo;
				}
				cout << "SOAT pagado de la matricula " << matricula << endl;
				system("PAUSE");
			}
			break;
		}
		case(2): {
			int valor = 1057500;
			int depo = 0;
			cout << "Total a pagar:" << valor << endl;
			cout << "Valor a depositar: " << endl;
			cin >> depo;
			if (depo <= 0) {
				cout << "Valor no Aceptado";
			}
			else {
				pago = valor - depo;
				while (pago != 0) {
					cout << "Nuevo valor total a pagar es:" << pago << endl;
					cout << "Valor a depositar: " << endl;
					cin >> depo;
					pago = pago - depo;
				}
				cout << "SOAT pagado de la matricula " << matricula << endl;
				system("PAUSE");
			}
			break;
		}
		case(3): {
			int valor = 1337000;
			int depo = 0;
			cout << "Total a pagar:" << valor << endl;
			cout << "Valor a depositar: " << endl;
			cin >> depo;
			if (depo <= 0) {
				cout << "Valor no Aceptado";
			}
			else {
				pago = valor - depo;
				while (pago != 0) {
					cout << "Nuevo valor total a pagar es:" << pago << endl;
					cout << "Valor a depositar: " << endl;
					cin >> depo;
					pago = pago - depo;
				}
				cout << "SOAT pagado de la matricula " << matricula << endl;
				system("PAUSE");
			}
			break;
		}
		}
	}
	else {
		cout << "ERROR" << endl;
		system("pause");
	}
}
void veh_ofi_esp_amb() {

	cout << "Ingrese su matricula: " << endl;
	cin >> matricula;
	cout << "Tipo de Oficiales Especiales\n " <<
		"Menos de 1500cc: 1 -- De 1500cc a 2500cc : 2 -- Mas de 2500cc: 3 \n " << endl;
	cin >> tipo;

	if (tipo > 0 && tipo < 4) {
		switch (tipo) {
		case(1): {
			int valor = 324000;
			int depo = 0;
			cout << "Total a pagar:" << valor << endl;
			cout << "Valor a depositar: " << endl;
			cin >> depo;
			if (depo <= 0) {
				cout << "Valor no Aceptado";
			}
			else {
				pago = valor - depo;
				while (pago != 0) {
					cout << "Nuevo valor total a pagar es:" << pago << endl;
					cout << "Valor a depositar: " << endl;
					cin >> depo;
					pago = pago - depo;
				}
				cout << "SOAT pagado de la matricula " << matricula << endl;
				system("PAUSE");
			}
			break;
		}
		case(2): {
			int valor = 1038600;
			int depo = 0;
			cout << "Total a pagar:" << valor << endl;
			cout << "Valor a depositar: " << endl;
			cin >> depo;
			if (depo <= 0) {
				cout << "Valor no Aceptado";
			}
			else {
				pago = valor - depo;
				while (pago != 0) {
					cout << "Nuevo valor total a pagar es:" << pago << endl;
					cout << "Valor a depositar: " << endl;
					cin >> depo;
					pago = pago - depo;
				}
				cout << "SOAT pagado de la matricula " << matricula << endl;
				system("PAUSE");
			}
			break;
		}
		case(3): {
			int valor = 1245200;
			int depo = 0;
			cout << "Total a pagar:" << valor << endl;
			cout << "Valor a depositar: " << endl;
			cin >> depo;
			if (depo <= 0) {
				cout << "Valor no Aceptado";
			}
			else {
				pago = valor - depo;
				while (pago != 0) {
					cout << "Nuevo valor total a pagar es:" << pago << endl;
					cout << "Valor a depositar: " << endl;
					cin >> depo;
					pago = pago - depo;
				}
				cout << "SOAT pagado de la matricula " << matricula << endl;
				system("PAUSE");
			}
			break;
		}
		}
	}
	else {
		cout << "ERROR" << endl;
		system("pause");
	}
}
void autos_f() {
	

	cout << "Ingrese su matricula: " << endl;
	cin >> matricula;
	cout << "Tipo de Auto Familiar\n " <<
		"Menos de 1500cc y 0 a 9 años: 1 -- Menos de 1500cc y 10 años o mas : 2 -- De 1500cc a 2500cc 0 a 9 años: 3 \n " <<
		"De 1500 a 2500 de 10 años o mas: 4 -- Mas de 2500cc 0 a 9 años:5 -- Mas de 2500 10 años o mas: 6 \n " <<
		"Motocarro cinco pasajeros: 6 " << endl;
	cout << "Ingrese el numero del tipo de moto" << endl;
	cin >> tipo;

	if (tipo > 0 && tipo < 7) {
		switch (tipo) {
		case(1): {
			int valor = 368800;
			int depo = 0;
			cout << "Total a pagar:" << valor << endl;
			cout << "Valor a depositar: " << endl;
			cin >> depo;
			if (depo <= 0) {
				cout << "Valor no Aceptado";
			}
			else {
				pago = valor - depo;
				while (pago != 0) {
					cout << "Nuevo valor total a pagar es:" << pago << endl;
					cout << "Valor a depositar: " << endl;
					cin >> depo;
					pago = pago - depo;
				}
				cout << "SOAT pagado de la matricula " << matricula << endl;
				system("PAUSE");
			}
			break;
		}
		case(2): {
			int valor = 488900;
			int depo = 0;
			cout << "Total a pagar:" << valor << endl;
			cout << "Valor a depositar: " << endl;
			cin >> depo;
			if (depo <= 0) {
				cout << "Valor no Aceptado";
			}
			else {
				pago = valor - depo;
				while (pago != 0) {
					cout << "Nuevo valor total a pagar es:" << pago << endl;
					cout << "Valor a depositar: " << endl;
					cin >> depo;
					pago = pago - depo;
				}
				cout << "SOAT pagado de la matricula " << matricula << endl;
				system("PAUSE");
			}
			break;
		}
		case(3): {
			int valor = 448900;
			int depo = 0;
			cout << "Total a pagar:" << valor << endl;
			cout << "Valor a depositar: " << endl;
			cin >> depo;
			if (depo <= 0) {
				cout << "Valor no Aceptado";
			}
			else {
				pago = valor - depo;
				while (pago != 0) {
					cout << "Nuevo valor total a pagar es:" << pago << endl;
					cout << "Valor a depositar: " << endl;
					cin >> depo;
					pago = pago - depo;
				}
				cout << "SOAT pagado de la matricula " << matricula << endl;
				system("PAUSE");
			}
			break;
		}
		case(4): {
			int valor = 558500;
			int depo = 0;
			cout << "Total a pagar:" << valor << endl;
			cout << "Valor a depositar: " << endl;
			cin >> depo;
			if (depo <= 0) {
				cout << "Valor no Aceptado";
			}
			else {
				pago = valor - depo;
				while (pago != 0) {
					cout << "Nuevo valor total a pagar es:" << pago << endl;
					cout << "Valor a depositar: " << endl;
					cin >> depo;
					pago = pago - depo;
				}
				cout << "SOAT pagado de la matricula " << matricula << endl;
				system("PAUSE");
			}
			break;
		}
		case(5): {
			int valor = 524300;
			int depo = 0;
			cout << "Total a pagar:" << valor << endl;
			cout << "Valor a depositar: " << endl;
			cin >> depo;
			if (depo <= 0) {
				cout << "Valor no Aceptado";
			}
			else {
				pago = valor - depo;
				while (pago != 0) {
					cout << "Nuevo valor total a pagar es:" << pago << endl;
					cout << "Valor a depositar: " << endl;
					cin >> depo;
					pago = pago - depo;
				}
				cout << "SOAT pagado de la matricula " << matricula << endl;
				system("PAUSE");
			}
			break;
		}
		case(6): {
			int valor = 621900;
			int depo = 0;
			cout << "Total a pagar:" << valor << endl;
			cout << "Valor a depositar: " << endl;
			cin >> depo;
			if (depo <= 0) {
				cout << "Valor no Aceptado";
			}
			else {
				pago = valor - depo;
				while (pago != 0) {
					cout << "Nuevo valor total a pagar es:" << pago << endl;
					cout << "Valor a depositar: " << endl;
					cin >> depo;
					pago = pago - depo;
				}
				cout << "SOAT pagado de la matricula " << matricula << endl;
				system("PAUSE");
			}
			break;
		}
		}
	}
	else {
		cout << "ERROR" << endl;
		system("pause");
	}

}
void capacidad_6() {

	cout << "Ingrese su matricula: " << endl;
	cin >> matricula;
	cout << "Tipo de Vehiculos para 6 o mas pasajeros\n " <<
		"Menos de 2500cc y 0 a 9 años: 1 -- Menos de 2500cc y 10 años o mas : 2 -- 2500cc o mas 0 a 9 años: 3 \n " <<
		"2500 o mas y 10 años o mass: 4" << endl;
	cin >> tipo;

	if (tipo > 0 && tipo < 7) {
		switch (tipo) {
		case(1): {
			int valor = 657400;
			int depo = 0;
			cout << "Total a pagar:" << valor << endl;
			cout << "Valor a depositar: " << endl;
			cin >> depo;
			if (depo <= 0) {
				cout << "Valor no Aceptado";
			}
			else {
				pago = valor - depo;
				while (pago != 0) {
					cout << "Nuevo valor total a pagar es:" << pago << endl;
					cout << "Valor a depositar: " << endl;
					cin >> depo;
					pago = pago - depo;
				}
				cout << "SOAT pagado de la matricula " << matricula << endl;
				system("PAUSE");
			}
			break;
		}
		case(2): {
			int valor = 838900;
			int depo = 0;
			cout << "Total a pagar:" << valor << endl;
			cout << "Valor a depositar: " << endl;
			cin >> depo;
			if (depo <= 0) {
				cout << "Valor no Aceptado";
			}
			else {
				pago = valor - depo;
				while (pago != 0) {
					cout << "Nuevo valor total a pagar es:" << pago << endl;
					cout << "Valor a depositar: " << endl;
					cin >> depo;
					pago = pago - depo;
				}
				cout << "SOAT pagado de la matricula " << matricula << endl;
				system("PAUSE");
			}
			break;
		}
		case(3): {
			int valor = 879800;
			int depo = 0;
			cout << "Total a pagar:" << valor << endl;
			cout << "Valor a depositar: " << endl;
			cin >> depo;
			if (depo <= 0) {
				cout << "Valor no Aceptado";
			}
			else {
				pago = valor - depo;
				while (pago != 0) {
					cout << "Nuevo valor total a pagar es:" << pago << endl;
					cout << "Valor a depositar: " << endl;
					cin >> depo;
					pago = pago - depo;
				}
				cout << "SOAT pagado de la matricula " << matricula << endl;
				system("PAUSE");
			}
			break;
		}
		case(4): {
			int valor = 1056400;
			int depo = 0;
			cout << "Total a pagar:" << valor << endl;
			cout << "Valor a depositar: " << endl;
			cin >> depo;
			if (depo <= 0) {
				cout << "Valor no Aceptado";
			}
			else {
				pago = valor - depo;
				while (pago != 0) {
					cout << "Nuevo valor total a pagar es:" << pago << endl;
					cout << "Valor a depositar: " << endl;
					cin >> depo;
					pago = pago - depo;
				}
				cout << "SOAT pagado de la matricula " << matricula << endl;
				system("PAUSE");
			}
			break;
		}
	
		}
	}
	else {
		cout << "ERROR" << endl;
		system("pause");
	}
}
void aut_neg() {

	cout << "Ingrese su matricula: " << endl;
	cin >> matricula;
	cout << "Tipo de Auto de negocios y taxis\n " <<
		"Menos de 1500cc y 0 a 9 años: 1 -- Menos de 1500cc y 10 o mas años: 2 -- De 1500cc a 2500cc y 0 a 9 años: 3 \n " <<
		"De 1500cc a 2500cc y 10 años o mas: 4 -- Mas de 2500cc 0 a 9 años: 5 \n " << endl;
	cout << "Ingrese el numero del tipo de moto" << endl;
	cin >> tipo;

	if (tipo > 0 && tipo < 7) {
		switch (tipo) {
		case(1): {
			int valor = 456600;
			int depo = 0;
			cout << "Total a pagar:" << valor << endl;
			cout << "Valor a depositar: " << endl;
			cin >> depo;
			if (depo <= 0) {
				cout << "Valor no Aceptado";
			}
			else {
				pago = valor - depo;
				while (pago != 0) {
					cout << "Nuevo valor total a pagar es:" << pago << endl;
					cout << "Valor a depositar: " << endl;
					cin >> depo;
					pago = pago - depo;
				}
				cout << "SOAT pagado de la matricula " << matricula << endl;
				system("PAUSE");
			}
			break;
		}
		case(2): {
			int valor = 570500;
			int depo = 0;
			cout << "Total a pagar:" << valor << endl;
			cout << "Valor a depositar: " << endl;
			cin >> depo;
			if (depo <= 0) {
				cout << "Valor no Aceptado";
			}
			else {
				pago = valor - depo;
				while (pago != 0) {
					cout << "Nuevo valor total a pagar es:" << pago << endl;
					cout << "Valor a depositar: " << endl;
					cin >> depo;
					pago = pago - depo;
				}
				cout << "SOAT pagado de la matricula " << matricula << endl;
				system("PAUSE");
			}
			break;
		}
		case(3): {
			int valor = 567600;
			int depo = 0;
			cout << "Total a pagar:" << valor << endl;
			cout << "Valor a depositar: " << endl;
			cin >> depo;
			if (depo <= 0) {
				cout << "Valor no Aceptado";
			}
			else {
				pago = valor - depo;
				while (pago != 0) {
					cout << "Nuevo valor total a pagar es:" << pago << endl;
					cout << "Valor a depositar: " << endl;
					cin >> depo;
					pago = pago - depo;
				}
				cout << "SOAT pagado de la matricula " << matricula << endl;
				system("PAUSE");
			}
			break;
		}
		case(4): {
			int valor = 701500;
			int depo = 0;
			cout << "Total a pagar:" << valor << endl;
			cout << "Valor a depositar: " << endl;
			cin >> depo;
			if (depo <= 0) {
				cout << "Valor no Aceptado";
			}
			else {
				pago = valor - depo;
				while (pago != 0) {
					cout << "Nuevo valor total a pagar es:" << pago << endl;
					cout << "Valor a depositar: " << endl;
					cin >> depo;
					pago = pago - depo;
				}
				cout << "SOAT pagado de la matricula " << matricula << endl;
				system("PAUSE");
			}
			break;
		}
		case(5): {
			int valor = 732400;
			int depo = 0;
			cout << "Total a pagar:" << valor << endl;
			cout << "Valor a depositar: " << endl;
			cin >> depo;
			if (depo <= 0) {
				cout << "Valor no Aceptado";
			}
			else {
				pago = valor - depo;
				while (pago != 0) {
					cout << "Nuevo valor total a pagar es:" << pago << endl;
					cout << "Valor a depositar: " << endl;
					cin >> depo;
					pago = pago - depo;
				}
				cout << "SOAT pagado de la matricula " << matricula << endl;
				system("PAUSE");
			}
			break;
		}
		}
	}
	else {
		cout << "ERROR" << endl;
		system("pause");
	}
}
void servicio_publico() {

	cout << "Ingrese su matricula: " << endl;
	cin >> matricula;
	int valor = 1093100;
	int depo = 0;
	cout << "Total a pagar:" << valor << endl;
	cout << "Valor a depositar: " << endl;
	cin >> depo;
	if (depo <= 0) {
		cout << "Valor no Aceptado";
	}
	else {
		pago = valor - depo;
		while (pago != 0) {
			cout << "Nuevo valor total a pagar es:" << pago << endl;
			cout << "Valor a depositar: " << endl;
			cin >> depo;
			pago = pago - depo;
		}
		cout << "SOAT pagado de la matricula " << matricula << endl;
		system("PAUSE");
	}
	
}
void servicio_interm() {


	cout << "Ingrese su matricula: " << endl;
	cin >> matricula;
	cout << "Tipo de Servicio Municipal\n " <<
		"Menor de 10 pasajeros: 1 -- 10 o mas pasajeros: 2 " << endl;
	cin >> tipo;

	if (tipo > 0 && tipo < 3) {
		switch (tipo) {
		case(1): {
			int valor = 1081100;
			int depo = 0;
			cout << "Total a pagar:" << valor << endl;
			cout << "Valor a depositar: " << endl;
			cin >> depo;
			if (depo <= 0) {
				cout << "Valor no Aceptado";
			}
			else {
				pago = valor - depo;
				while (pago != 0) {
					cout << "Nuevo valor total a pagar es:" << pago << endl;
					cout << "Valor a depositar: " << endl;
					cin >> depo;
					pago = pago - depo;
				}
				cout << "SOAT pagado de la matricula " << matricula << endl;
				system("PAUSE");
			}
			break;
		}
		case(2): {

			int valor = 1568500;
			int depo = 0;
			cout << "Total a pagar:" << valor << endl;
			cout << "Valor a depositar: " << endl;
			cin >> depo;
			if (depo <= 0) {
				cout << "Valor no Aceptado";
			}
			else {
				pago = valor - depo;
				while (pago != 0) {
					cout << "Nuevo valor total a pagar es:" << pago << endl;
					cout << "Valor a depositar: " << endl;
					cin >> depo;
					pago = pago - depo;
				}
				cout << "SOAT pagado de la matricula " << matricula << endl;
				system("PAUSE");
			}
			break;
		}
		}
	}
	else {
		cout << "ERROR" << endl;
		system("pause");
	}
}