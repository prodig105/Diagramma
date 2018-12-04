#pragma once
#include "iostream"
#include "MyForm.h"
#include <sstream>
#include <string>
#include <string.h>
//using namespace std;

class Diagramma {
private: int Y[10];
		 std::stringstream str;
		 char Text[10]; 
		 int i;// System::Windows::Forms::DataVisualization::Charting::Chart^ 123; //???????
public:		 Diagramma(System::Windows::Forms::DataVisualization::Charting::Chart^  chart1, int x1, int x2, int x3, int x4, int x5, int x6, int x7) {
	if(x1!=0) chart1->Series["Series1"]->Points->AddXY("¹1", x1);
	if (x2 != 0) chart1->Series["Series1"]->Points->AddXY("¹2", x2);
	if (x3 != 0) chart1->Series["Series1"]->Points->AddXY("¹3", x3);
	if (x4 != 0) chart1->Series["Series1"]->Points->AddXY("¹4", x4);
	if (x5 != 0) chart1->Series["Series1"]->Points->AddXY("¹5", x5);
	if (x6 != 0) chart1->Series["Series1"]->Points->AddXY("¹6", x6);
	if (x7 != 0) chart1->Series["Series1"]->Points->AddXY("¹7", x7);

	//	chart1->Series["Series1"]->Points->AddXY("1", Y[i]);
}
public: void dray() {
}
};