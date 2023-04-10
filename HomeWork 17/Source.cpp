#include <iostream>

double Ex1(double num1, double num2);//Ex1
double mean_arr(int arr[], const int length);//Ex2
void powers(double num1,int  num2);//Ex3
void positive_arr(int arr[], const int length);//Ex4
int main() {
	//HomeWork 17
	//Ex1
	std::cout << "\n\n\t\tEx1\n\n";
	std::cout << "Enter 1 number -> ";
	int a1, a2;
	std::cin >> a1;
	std::cout << "Enter 2 number -> ";
	std::cin >> a2;
	std::cout << "Arefmetical mean = " << Ex1(a1, a2);
	
	//Ex2
	std::cout << "\n\n\t\tEx2\n\n";
	int const size2 = 10;
	int arr2[size2]{ 1, 2, 3, 3, 4, 43, 11, 21, 99, 0 };
	std::cout <<"Arefmetical mean array = " << mean_arr(arr2, size2);
	
	//Ex3
	std::cout << "\n\n\t\tEx3\n\n";
	int b2;
	double b1;
	std::cout << "Enter 1-st number -> ";
	std::cin >> b1;
	std::cout << "Enter 2-nd number -> ";
	std::cin >> b2;
	powers(b1, b2);
	
	//Ex4
	std::cout << "\n\n\t\tEx3\n\n";
	const int size4 = 8;
	int arr4[size4]{ -9, 9, 8, -8, 7, -7, 5, -5 };
	positive_arr(arr4, size4);

	return 0;
}
double Ex1(double num1, double num2) {//Ex1
	return (num1 + num2) / 2;
}
double mean_arr(int arr[], const int length) {//Ex2
	double tmp = 0;
	for (int i = 0; i < length; i++)
		tmp += arr[i];
	return tmp / length;
}
void powers(double num1, int  num2) {//Ex3
	double tmp = 1;
	std::cout << num1 << " ^ " << 0 << " = " << 1 << std::endl;
	for (int i = 0; i < num2; i++) {
		tmp *= num1;
		std::cout << num1 <<" ^ "<< i + 1 <<" = "<< tmp << std::endl;
	}
}
void positive_arr(int arr[], const int length) {//Ex4
	for (int i = 0; i < length; i++){
		if (arr[i] < 0)
			arr[i] *= -1;
	}
	for (int i = 0; i < length; i++){
		std::cout << arr[i] << ' ';
	}
}