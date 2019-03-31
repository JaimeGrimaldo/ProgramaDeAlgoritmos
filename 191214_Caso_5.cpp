#include<iostream>
#include<math.h>
using namespace std;

//En el Return tuve complicaciones, de todos modos lo codifique para que usted viera que escribi "correctamente" el llamado del return... pero para no atrofiar el programa decidi ponerlo como comentario.

int precio[4]={1879,490,6190,343};

void menu();
void seleccionarpago(int eleccion1, int eleccion2);
int pagoCliente(int eleccion1,int eleccion2);
int cambio(int resta);
void pagoTarjeta(int eleccion1, int eleccion2);
void Combinar(int eleccion1,int eleccion2);
void Combinar2(int opcion1);
void terminar();

int main() {
	menu();
	terminar();
}

void menu() {
	int opcion,eleccion1,eleccion2,regalo;
		cout<<"Preparando para elegir productos..."<<endl;
		cout<<"**Seleccione sus productos**"<<endl;
		cout<<"1) Combo estudio: $1879"<<endl<<endl;
		cout<<"2) Antivirus: $490"<<endl<<endl;
		cout<<"3) Laptop HP: $6190"<<endl<<endl;
		cout<<"Incluye regalo entre mochila y audifonos"<<endl<<endl;
		cout<<"4) Antivirus con descuento de fecha: $343"<<endl<<endl;
		cout<<"Primer producto: ";
		cin>>eleccion1; cout<<endl<<endl;
		cout<<"Seleccione segundo producto"<<endl;
		cin>>eleccion2;
		if(eleccion1!=eleccion2) {
			if(eleccion1==3) {
				cout<<"Seleccione su regalo"<<endl; 
				cout<<"1)Audifonos	2)Mochila"<<endl;
				cin>>regalo;
				if(regalo==1) {
					cout<<"Audifonos seleccionados"<<endl;
				}
				else {
					cout<<"Mochila seleccionada"<<endl;
				}
			}
			if(eleccion2==3) {
				cout<<"Seleccione su regalo"<<endl; 
				cout<<"1)Audifonos	2)Mochila"<<endl;
				cin>>regalo;
				if(regalo==1) {
					cout<<"Audifonos seleccionados"<<endl;
				}
				else {
					cout<<"Mochila seleccionada"<<endl;
				}
			}
			if(eleccion1==2 and eleccion2==4) {
				cout<<"Ambos productos son el mismo, no es posible elegir ambos"<<endl;
				cout<<"La diferencia es que el produco (4) esta en descuento si estas entre el 25 al 31 de enero"<<endl;
				cout<<"Se reiniciara el programa automaticamente..."<<endl<<endl;
				cout<<"****************************REINICIO****************************"<<endl<<endl;
				menu();
			}
		seleccionarpago(eleccion1, eleccion2);
		}
		else {
			cout<<"Selecciono el mismo producto"<<endl;
			cout<<"Repetir programa?: 1)si	2)no"<<endl; cin>>opcion;
			if(opcion==1) {
				menu();
			}
			else {
				cout<<"Fin del programa"<<endl;
			}
		}
		
}	

void seleccionarpago(int eleccion1, int eleccion2) {
	int metodopago,suma;
	cout<<"Seleccione metodo de pago..."<<endl;
	cout<<"1)Efectivo	2)Tarjeta de credito	3)Combinar pagos"<<endl; cin>>metodopago;
	if(metodopago==1) {
		cout<<"Efectivo seleccionado"<<endl;
		pagoCliente(eleccion1,eleccion2);
	}
	if(metodopago==2) {
			cout<<"Tarjeta de credito seleccionada"<<endl;
			pagoTarjeta(eleccion1,eleccion2);
	}
	if(metodopago==3) {
			cout<<"Combinar pagos seleccionado"<<endl;
			Combinar(eleccion1,eleccion2);
		}
}

int pagoCliente(int eleccion1,int eleccion2) {
	int suma,resta,pago;
	if(eleccion1==1 and eleccion2==2) {
		suma=precio[0]+precio[1];
		cout<<"Total: "<<suma<<endl;
		cout<<"Ingrese pago: "; cin>>pago;
		if(pago>=suma) {
			resta=pago-suma;
		}
		else {
			cout<<"Dinero insuficiente"<<endl;
		}
	}
	if(eleccion1==1 and eleccion2==3) {
		suma=precio[0]+precio[2];
		cout<<"Total: "<<suma<<endl;
		cout<<"Ingrese pago: "; cin>>pago;
		if(pago>=suma) {
			resta=pago-suma;
		}
		else {
			cout<<"Dinero insuficiente"<<endl;
		}
	}
	if(eleccion1==1 and eleccion2==4) {
		suma=precio[0]+precio[3];
		cout<<"Total: "<<suma<<endl;
		cout<<"Ingrese pago: "; cin>>pago;
		if(pago>=suma) {
			resta=pago-suma;
		}
		else {
			cout<<"Dinero insuficiente"<<endl;
		}
	}
	if(eleccion1==2 and eleccion2==1) {
		suma=precio[1]+precio[0];
		cout<<"Total: "<<suma<<endl;
		cout<<"Ingrese pago: "; cin>>pago;
		if(pago>=suma) {
			resta=pago-suma;
		}
		else {
			cout<<"Dinero insuficiente"<<endl;
		}
	}
	if(eleccion1==2 and eleccion2==3) {
		suma=precio[1]+precio[2];
		cout<<"Total: "<<suma<<endl;
		cout<<"Ingrese pago: "; cin>>pago;
		if(pago>=suma) {
			resta=pago-suma;
		}
		else {
			cout<<"Dinero insuficiente"<<endl;
		}
	}
	if(eleccion1==2 and eleccion2==4){
		suma=precio[1]+precio[3];
		cout<<"Total: "<<suma<<endl;
		cout<<"Ingrese pago: "; cin>>pago;
		if(pago>=suma) {
			resta=pago-suma;
		}
		else {
			cout<<"Dinero insuficiente"<<endl;
		}
	}
	if(eleccion1==3 and eleccion2==1){
		suma=precio[2]+precio[0];
		cout<<"Total: "<<suma<<endl;
		cout<<"Ingrese pago: "; cin>>pago;
		if(pago>=suma) {
			resta=pago-suma;
		}
		else {
			cout<<"Dinero insuficiente"<<endl;
		}
	}
	if(eleccion1==3 and eleccion2==2){
		suma=precio[2]+precio[1];
		cout<<"Total: "<<suma<<endl;
		cout<<"Ingrese pago: "; cin>>pago;
		if(pago>=suma) {
			resta=pago-suma;
		}
		else {
			cout<<"Dinero insuficiente"<<endl;
		}
	}
	if(eleccion1==3 and eleccion2==4){
		suma=precio[2]+precio[3];
		cout<<"Total: "<<suma<<endl;
		cout<<"Ingrese pago: "; cin>>pago;
		if(pago>=suma) {
			resta=pago-suma;
		}
		else {
			cout<<"Dinero insuficiente"<<endl;
		}
	}
	if(eleccion1==4 and eleccion2==1){
		suma=precio[3]+precio[0];
		cout<<"Total: "<<suma<<endl;
		cout<<"Ingrese pago: "; cin>>pago;
		if(pago>=suma) {
			resta=pago-suma;
		}
		else {
			cout<<"Dinero insuficiente"<<endl;
		}
	}
	if(eleccion1==4 and eleccion2==2){
		suma=precio[3]+precio[1];
		cout<<"Total: "<<suma<<endl;
		cout<<"Ingrese pago: "; cin>>pago;
		if(pago>=suma) {
			resta=pago-suma;
		}
		else {
			cout<<"Dinero insuficiente"<<endl;
		}
	}
	if(eleccion1==4 and eleccion2==2){
		suma=precio[3]+precio[1];
		cout<<"Total: "<<suma<<endl;
		cout<<"Ingrese pago: "; cin>>pago;
		if(pago>=suma) {
			resta=pago-suma;
		}
		else {
			cout<<"Dinero insuficiente"<<endl;
		}
	}
	if(eleccion1==4 and eleccion2==3){
		suma=precio[3]+precio[2];
		cout<<"Total: "<<suma<<endl;
		cout<<"Ingrese pago: "; cin>>pago;
		if(pago>=suma) {
			resta=pago-suma;
		}
		else {
			cout<<"Dinero insuficiente"<<endl;
		}
	}
	cambio(resta);
	//return resta;
}

int cambio(int resta) {
	int eleccion1,eleccion2;
	int cambio1;
	//cambio1=pagoCliente(eleccion1,eleccion2);
	//cout<<"Su cambio es: "<<cambio1;
	cout<<"Su cambio es: "<<resta<<endl;
}

void pagoTarjeta(int eleccion1, int eleccion2) {
	int suma;
	if(eleccion1==1 and eleccion2==2) {
		suma=precio[0]+precio[1];
		cout<<"Se cargaron: $"<<suma<<" a su tarjeta de credito"<<endl;
	}
	if(eleccion1==1 and eleccion2==3) {
		suma=precio[0]+precio[2];
		cout<<"Se cargaron: $"<<suma<<" a su tarjeta de credito"<<endl;
	}
	if(eleccion1==1 and eleccion2==4) {
		suma=precio[0]+precio[3];
		cout<<"Se cargaron: $"<<suma<<" a su tarjeta de credito"<<endl;
	}
	if(eleccion1==2 and eleccion2==1) {
		suma=precio[1]+precio[0];
		cout<<"Se cargaron: $"<<suma<<" a su tarjeta de credito"<<endl;
	}
	if(eleccion1==2 and eleccion2==3) {
		suma=precio[1]+precio[2];
		cout<<"Se cargaron: $"<<suma<<" a su tarjeta de credito"<<endl;
	}
	if(eleccion1==2 and eleccion2==4) {
		suma=precio[1]+precio[3];
		cout<<"Se cargaron: $"<<suma<<" a su tarjeta de credito"<<endl;
	}
	if(eleccion1==3 and eleccion2==1) {
		suma=precio[2]+precio[0];
		cout<<"Se cargaron: $"<<suma<<" a su tarjeta de credito"<<endl;
	}
	if(eleccion1==3 and eleccion2==2) {
		suma=precio[2]+precio[1];
		cout<<"Se cargaron: $"<<suma<<" a su tarjeta de credito"<<endl;
	}
	if(eleccion1==3 and eleccion2==4) {
		suma=precio[2]+precio[3];
		cout<<"Se cargaron: $"<<suma<<" a su tarjeta de credito"<<endl;
	}
	if(eleccion1==4 and eleccion2==1) {
		suma=precio[3]+precio[0];
		cout<<"Se cargaron: $"<<suma<<" a su tarjeta de credito"<<endl;
	}
	if(eleccion1==4 and eleccion2==2) {
		suma=precio[3]+precio[1];
		cout<<"Se cargaron: $"<<suma<<" a su tarjeta de credito"<<endl;
	}
	if(eleccion1==4 and eleccion2==3) {
		suma=precio[3]+precio[2];
		cout<<"Se cargaron: $"<<suma<<" a su tarjeta de credito"<<endl;
	}
	if(eleccion1==4 and eleccion2==3) {
		suma=precio[3]+precio[2];
		cout<<"Se cargaron: $"<<suma<<" a su tarjeta de credito"<<endl;
	}
}

void Combinar(int eleccion1,int eleccion2) {
	int opcion1,pago,resta;
	cout<<"Ingrese el producto que desea pagar en efectivo:"<<endl;
	cout<<"(1) Combo estudio"<<endl<<"(2) Antivirus"<<endl<<"(3) Laptop"<<endl<<"(4) Antivirus descuento"<<endl;
	cin>>opcion1;
	switch(opcion1) {
		case 1: cout<<"Ingrese pago en efectivo"<<endl;
				cin>>pago;
				if(pago>precio[0]) {
					resta=pago-precio[0];
					cout<<"Su cambio es: "<<resta<<endl;
				}
				else {
					cout<<"Efectivo insuficiente"<<endl;
					Combinar(eleccion1,eleccion2);
				}
		break;
		case 2: cout<<"Ingrese pago en efectivo"<<endl;
				cin>>pago;
				if(pago>precio[1]) {
					resta=pago-precio[1];
					cout<<"Su cambio es: "<<resta<<endl;
				}
				else {
					cout<<"Efectivo insuficiente"<<endl;
					Combinar(eleccion1,eleccion2);
				}
		break;
		case 3: cout<<"Ingrese pago en efectivo"<<endl;
				cin>>pago;
				if(pago>precio[2]) {
					resta=pago-precio[2];
					cout<<"Su cambio es: "<<resta<<endl;
				}
				else {
					cout<<"Efectivo insuficiente"<<endl;
					Combinar(eleccion1,eleccion2);
				}
		break;
		case 4: cout<<"Ingrese pago en efectivo"<<endl;
				cin>>pago;
				if(pago>precio[3]) {
					resta=pago-precio[3];
					cout<<"Su cambio es: "<<resta<<endl;
				}
				else {
					cout<<"Efectivo insuficiente"<<endl;
					Combinar(eleccion1,eleccion2);
				}
		break;
	}
	Combinar2(opcion1);
}

void Combinar2(int opcion1) {
	int opcion2;
	cout<<"Ingrese el producto que desea pagar con tarjeta de credito:"<<endl;
	cout<<"(1) Combo estudio"<<endl<<"(2) Antivirus"<<endl<<"(3) Laptop"<<endl<<"(4) Antivirus descuento"<<endl;
	cin>>opcion2;
	if(opcion2!=opcion1) {
		switch(opcion2) {
			case 1: cout<<"Se han cargado: "<<precio[0]<<" a su tarjeta de credito"<<endl; break;
			case 2: cout<<"Se han cargado: "<<precio[1]<<" a su tarjeta de credito"<<endl; break;
			case 3: cout<<"Se han cargado: "<<precio[2]<<" a su tarjeta de credito"<<endl; break;
			case 4: cout<<"Se han cargado: "<<precio[3]<<" a su tarjeta de credito"<<endl; break;
		}
	}
	else {
		cout<<"No puede pagar 2 veces el mismo producto"<<endl;
		Combinar2(opcion1);
	}
}


void terminar() {
	cout<<"Gracias, hasta luego."<<endl;
}




