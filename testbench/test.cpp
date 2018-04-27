#include "../GeneralClasses/IncludeFile.h"

int main (){	

	ofstream out_Rp;
	out_Rp.open("rp.txt");

	double theta_i = 40;
	double real, imag, real_2, imag_2, n_prism, wavelength; 
	double d_1 = 50, d_2 = 5000;

	cout <<
	"---------------------------------------------------------------------------------------" << "\n"
	"---------------------------------- Welcome to SimSPR ----------------------------------" << "\n\n" 
	" A basic framework for Surface Plasmon Resonance simulation implemented in C++ language" << "\n\n"
	"---------------------------------------------------------------------------------------" << "\n\n";
	cout << "Type the incident light wavelength (nm):" << "\n";
	cin >> wavelength;
	cout << "Type the prism refractive index:" << "\n";
	cin >> n_prism;
	cout << "## First Layer--Type the refractive index of the material (real part):" << "\n";
	cin >> real;
	cout << "## First Layer-- Type the refractive index of the material (imaginary part):" << "\n";
	cin >> imag;
	cout << "## Second Layer-- Type the refractive index of the material (real part):" << "\n";
	cin >> real_2;
	cout << "## Second Layer-- Type the refractive index of the material (imaginary part) then enter to execute:" << "\n";
	cin >> imag_2;
	cout << "--> You can check your simulation results in the output file" << "\n\n";

	while(theta_i <= 70){

		 out_Rp << theta_i << "\t\t" << s_SPR.Reflectance(theta_i, real, imag, real_2, imag_2, n_prism, wavelength, d_1, d_2) << endl;
		 		 
		 theta_i = theta_i + 0.1; 
	}

	out_Rp.close();
			
	return 0;
}