
module BPZ1901.Myasnikova.Lab3.Task2;

namespace RBPO {
	namespace Lab3 {
		namespace Task2 {
			double f1(double x) {
				return sqrt(2.0 * x + 2.0 * sqrt(pow(x, 2.0) - 4.0)) / (sqrt(pow(x, 2.0) - 4.0) + x + 2.0);
			}
			double f2(double x) {
				if (x <= 4.0) {
					return (sqrt(pow(x, 2.0) + 4.0));
				}
				else {
					return (cos(abs(2.0 + x)));
				}
			}
			double a(int i) { 
				return  (pow(-1.0, i) * ((i + 1) / (pow(i, 2.0) + 2.0 * i + 1.0)));
			}
			double f3(int n) {
				double sum = 0.0;
				int i = 0;
				while (i <= n) {
					sum += a(i);
					i++;
				}
				return sum;
			}
			double f4(double eps) {
				double pred = a(0);
				double sled = a(1);
				double sum = pred + sled;
				int i = 2;
				while (abs(a(i) - a(i - 1)) > eps) {
					sum += a(i);
					i++;
				}
				return sum;
			}
		}
	}
}
