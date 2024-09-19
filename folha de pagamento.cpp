#include <iostream>
#include <iomanip>

using namespace std;

int main (){
	setlocale (LC_ALL, "");
	double bruto, liquido, inss, fgts, ir, quantHora, valorHora,totaldesc;
	
	cout << "Insira  o valor por hora trabalhada: ";
	cin >> valorHora;
	cout << "Insira a quantidade de horas trabalhadas: ";
	cin >> quantHora;
	
	bruto = valorHora * quantHora;
	cout << "Salário Bruto: " << bruto <<  endl;

	inss = bruto * 0.10;
	fgts = bruto * 0.11;
	

	if (bruto <= 900){
		liquido = bruto - inss;
		cout << "Salário Bruto: " << bruto << endl;
		cout << "(-) INSS (10%): " << inss << endl;
		cout << "(-) FGTS (11%): " << fgts << endl;
		cout << "Total Descontado: " << inss << fixed << setprecision(2) << endl;
		cout << "Salário Líquido: " << liquido << fixed << setprecision(2) << endl;
		
	}else if (bruto > 900 && bruto <= 1500){
		ir = bruto * 0.05;
		totaldesc = ir + inss;
		liquido = bruto - totaldesc;
		
		cout << "Salário Bruto: " << bruto << endl;
		cout << "(-) IR (5%): " << ir << endl;
		cout << "(-) INSS (10%): " << inss << endl;
		cout << "(-) FGTS (11%): " << fgts << endl;
		cout << "Total Descontado: " << totaldesc << fixed << setprecision(2) << endl;
		cout << "Salário Líquido: " << liquido << fixed << setprecision(2) << endl;
		
	}else if (bruto > 1500 && bruto <= 2500){
		ir = bruto * 0.10;
		totaldesc = ir + inss;
		liquido = bruto - totaldesc;
		
		cout << "Salário Bruto: " << bruto << endl;
		cout << "(-) IR (10%): " << ir << endl;
		cout << "(-) INSS (10%): " << inss << endl;
		cout << "(-) FGTS (11%): " << fgts << endl;
		cout << "Total Descontado: " << totaldesc << fixed << setprecision(2) << endl;
		cout << "Salário Líquido: " << liquido << fixed << setprecision(2) << endl;
		
	
}	else if (bruto > 2500){
		ir = bruto * 0.20;
		totaldesc = ir + inss;
		liquido = bruto - totaldesc;
		
		cout << "Salário Bruto: " << bruto << endl;
		cout << "(-) IR (20%): " << ir << endl;
		cout << "(-) INSS (10%): " << inss << endl;
		cout << "(-) FGTS (11%): " << fgts << endl;
		cout << "Total Descontado: " << totaldesc << fixed << setprecision(2) << endl;
		cout << "Salário Líquido: " << liquido << fixed << setprecision(2) << endl;
		
	
}
return 0;
}
