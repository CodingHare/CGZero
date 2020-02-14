#include <iostream>
#include <fstream>

int main(int argc, char const *argv[])
{
	int n_x = 200;
	int n_y = 100;


	//output image
	std::ofstream OutFile("pic.ppm");

	//P3 header
	OutFile << "P3\n" << n_x <<" " << n_y << "\n255\n";

	//Pixels
	for(int j = n_y - 1; j >= 0; j--) {
		for(int i = 0; i < n_x; ++i) {
			float r = i * 1.0 / n_x;
			float g = j * 1.0 / n_y;
			float b = 0.2;

			//turn the pixel value into rgb value;
			int ir = int(255.99 * r);
			int ig = int(255.99 * g);
			int ib = int(255.99 * b);

			OutFile << ir << " " << ig << " " << ib << "\n";
		}
	}

	OutFile.close();
	return 0;
}