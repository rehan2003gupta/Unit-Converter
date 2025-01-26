#include<bits/stdc++.h>
using namespace std;
int main(){
	double result;
	cout<<"MENU"<<endl;
	cout<<"1. Area "<<endl;
	cout<<"2. Length "<<endl;
	cout<<"3. Temperature "<<endl;
	cout<<"4. Volume "<<endl;
	cout<<"5. Mass "<<endl;
	cout<<"6. Data "<<endl;
	cout<<"7. Speed "<<endl;
	cout<<"8. Time "<<endl;
	int choice;
	cout<<"Enter Your Choice: "<<endl;
	cin>>choice;
	switch(choice){
		case 1:
			int input_unit;
			cout<<"1. Acres(ac) "<<endl;
			cout<<"2. Ares(a) "<<endl;
			cout<<"3. Hectares(ha) "<<endl;
			cout<<"4. Square centimetres(cm^2) "<<endl;
			cout<<"5. Square feet(ft^2) "<<endl;
			cout<<"6. Square inches(in^2) "<<endl;
			cout<<"7. Square metres(m^2)  "<<endl;
			cout<<"Choose the input unit: "<<endl;
		//	AREA
		//	AREA
		//	AREA
		//	AREA
		//	AREA
			cin>>input_unit;
			switch(input_unit){
				case 1:
					cout<<"1. Acres->Ares "<<endl;
					cout<<"2. Acres->Hectares "<<endl;
					cout<<"3. Acres->Square centimetres "<<endl;
					cout<<"4. Acres->Square feet "<<endl;
					cout<<"5. Acres->Square inches "<<endl;
					cout<<"6. Acres->Square metres "<<endl;
					cout<<"Enter your choice: "<<endl;
					int out;
					double input1;
					cin>>out;
					switch(out){
						case 1:
							cout<<"Enter value in Acres : "<<endl;
					cin>>input1;
							result=input1*40.4686;
							cout<<input1<<" Acres = "<<result<<" Ares "<<endl;
							break;
						case 2:
							cout<<"Enter value in Acres : "<<endl;
					cin>>input1;
							result=input1*0.404686;
							cout<<input1<<" Acres = "<<result<<" Hectares "<<endl;
							break;
						case 3:
							cout<<"Enter value in Acres : "<<endl;
					cin>>input1;
							result=input1*40468564.224;
							cout<<input1<<" Acres = "<<result<<" Square centimetres "<<endl;
							break;
						case 4:
							cout<<"Enter value in Acres : "<<endl;
					cin>>input1;
							result=input1*43560;
							cout<<input1<<" Acres = "<<result<<" Square feet "<<endl;
							break;
						case 5:
							cout<<"Enter value in Acres : "<<endl;
					cin>>input1;
							result=input1*6272640;
							cout<<input1<<" Acres = "<<result<<" Square inches "<<endl;
							break;
						case 6:
							cout<<"Enter value in Acres : "<<endl;
					cin>>input1;
							result=input1*4046.8564224;
							cout<<input1<<" Acres = "<<result<<" Square metres "<<endl;
							break;
					}
					break;
				case 2:
					cout<<"1. Ares->Acres "<<endl;
					cout<<"2. Ares->Hectares "<<endl;
					cout<<"3. Ares->Square centimetres "<<endl;
					cout<<"4. Ares->Square feet "<<endl;
					cout<<"5. Ares->Square inches "<<endl;
					cout<<"6. Ares->Square metres "<<endl;
					cout<<"Enter your choice: "<<endl;
					cin>>out;
					switch(out){
						case 1:
							cout<<"Enter value in Ares : "<<endl;
					cin>>input1;
							result=input1*0.0247105381;
							cout<<input1<<" Ares = "<<result<<" Acres "<<endl;
							break;
						case 2:
							cout<<"Enter value in Ares : "<<endl;
					cin>>input1;
							result=input1*0.01;
							cout<<input1<<" Ares = "<<result<<" Hectares "<<endl;
							break;
						case 3:
							cout<<"Enter value in Ares : "<<endl;
					cin>>input1;
							result=input1*1000000;
							cout<<input1<<" Ares = "<<result<<" Square centimetres "<<endl;
							break;
						case 4:
							cout<<"Enter value in Ares : "<<endl;
					cin>>input1;
							result=input1*1076.391041671;
							cout<<input1<<" Ares = "<<result<<" Square feet "<<endl;
							break;
						case 5:
							cout<<"Enter value in Ares : "<<endl;
					cin>>input1;
							result=input1*155000.31000062;
							cout<<input1<<" Ares = "<<result<<" Square inches "<<endl;
							break;
						case 6:
							cout<<"Enter value in Ares : "<<endl;
					cin>>input1;
							result=input1*100;
							cout<<input1<<" Ares = "<<result<<" Square metres "<<endl;
							break;
					}
					break;
				case 3:
					cout<<"1. Hectares->Acres "<<endl;
					cout<<"2. Hectares->Ares "<<endl;
					cout<<"3. Hectares->Square centimetres "<<endl;
					cout<<"4. Hectares->Square feet "<<endl;
					cout<<"5. Hectares->Square inches "<<endl;
					cout<<"6. Hectares->Square metres "<<endl;
					cout<<"Enter your choice: "<<endl;
					cin>>out;
					switch(out){
						case 1:
							cout<<"Enter value in Hectares : "<<endl;
					cin>>input1;
							result=input1*2.4710538147;
							cout<<input1<<" Hectares = "<<result<<" Acres "<<endl;
							break;
						case 2:
							cout<<"Enter value in Hectares : "<<endl;
					cin>>input1;
							result=input1*100;
							cout<<input1<<" Hectares = "<<result<<" Ares "<<endl;
							break;
						case 3:
							cout<<"Enter value in Hectares : "<<endl;
					cin>>input1;
							result=input1*100000000;
							cout<<input1<<" Hectares = "<<result<<" Square centimetres "<<endl;
							break;
						case 4:
							cout<<"Enter value in Hectares : "<<endl;
					cin>>input1;
							result=input1*107639.1041671;
							cout<<input1<<" Hectares = "<<result<<" Square feet "<<endl;
							break;
						case 5:
							cout<<"Enter value in Hectares : "<<endl;
					cin>>input1;
							result=input1*15500031.000062;
							cout<<input1<<" Hectares = "<<result<<" Square inches "<<endl;
							break;
						case 6:
							cout<<"Enter value in Hectares : "<<endl;
					cin>>input1;
							result=input1*10000;
							cout<<input1<<" Hectares = "<<result<<" Square metres "<<endl;
							break;
					}
					break;
				case 4:
					cout<<"1. Square centimetres->Acres "<<endl;
					cout<<"2. Square centimetres->Ares "<<endl;
					cout<<"3. Square centimetres->Hectares "<<endl;
					cout<<"4. Square centimetres->Square feet "<<endl;
					cout<<"5. Square centimetres->Square inches "<<endl;
					cout<<"6. Square centimetres->Square metres "<<endl;
					cout<<"Enter your choice: "<<endl;
					cin>>out;
					switch(out){
						case 1:
							cout<<"Enter value in Square centimetres : "<<endl;
					cin>>input1;
							result=input1*2.47105e-8;
							cout<<input1<<" Square centimetres = "<<result<<" Acres "<<endl;
							break;
						case 2:
							cout<<"Enter value in Square centimetres : "<<endl;
					cin>>input1;
							result=input1*0.000001;
							cout<<input1<<" Square centimetres = "<<result<<" Ares "<<endl;
							break;
						case 3:
							cout<<"Enter value in Square centimetres : "<<endl;
					cin>>input1;
							result=input1*1.00000000E-8;
							cout<<input1<<" Square centimetres = "<<result<<" Hectares "<<endl;
							break;
						case 4:
							cout<<"Enter value in Square centimetres : "<<endl;
					cin>>input1;
							result=input1*0.0021527821;
							cout<<input1<<" Square centimetres = "<<result<<" Square feet "<<endl;
							break;
						case 5:
							cout<<"Enter value in Square centimetres : "<<endl;
					cin>>input1;
							result=input1*0.31000062;
							cout<<input1<<" Square centimetres = "<<result<<" Square inches "<<endl;
							break;
						case 6:
							cout<<"Enter value in Square centimetres : "<<endl;
					cin>>input1;
							result=input1*0.0002;
							cout<<input1<<" Square centimetres = "<<result<<" Square metres "<<endl;
							break;
					}
					break;
				case 5:
					cout<<"1. Square feet->Acres "<<endl;
					cout<<"2. Square feet->Ares "<<endl;
					cout<<"3. Square feet->Hectares "<<endl;
					cout<<"4. Square feet->Square centimetres "<<endl;
					cout<<"5. Square feet->Square inches "<<endl;
					cout<<"6. Square feet->Square metres "<<endl;
					cout<<"Enter your choice: "<<endl;
					cin>>out;
					switch(out){
						case 1:
							cout<<"Enter value in Square feet : "<<endl;
					cin>>input1;
							result=input1*0.0000229568;
							cout<<input1<<" Square feet = "<<result<<" Acres "<<endl;
							break;
						case 2:
							cout<<"Enter value in Square feet : "<<endl;
					cin>>input1;
							result=input1*0.0009290304;
							cout<<input1<<" Square feet = "<<result<<" Ares "<<endl;
							break;
						case 3:
							cout<<"Enter value in Square feet : "<<endl;
					cin>>input1;
							result=input1*0.0000092903;
							cout<<input1<<" Square feet = "<<result<<" Hectares "<<endl;
							break;
						case 4:
							cout<<"Enter value in Square feet : "<<endl;
					cin>>input1;
							result=input1*929.0304;
							cout<<input1<<" Square feet = "<<result<<" Square centimetres "<<endl;
							break;
						case 5:
							cout<<"Enter value in Square feet : "<<endl;
					cin>>input1;
							result=input1*144;
							cout<<input1<<" Square feet = "<<result<<" Square inches "<<endl;
							break;
						case 6:
							cout<<"Enter value in Square feet : "<<endl;
					cin>>input1;
							result=input1*0.09290304;
							cout<<input1<<" Square feet = "<<result<<" Square metres "<<endl;
							break;
					}
					break;
				case 6:
					cout<<"1. Square inches->Acres "<<endl;
					cout<<"2. Square inches->Ares "<<endl;
					cout<<"3. Square inches->Hectares "<<endl;
					cout<<"4. Square inches->Square centimetres "<<endl;
					cout<<"5. Square inches->Square feet "<<endl;
					cout<<"6. Square inches->Square metres "<<endl;
					cout<<"Enter your choice: "<<endl;
					cin>>out;
					switch(out){
						case 1:
							cout<<"Enter value in Square inches : "<<endl;
					cin>>input1;
							result=input1*1.59422508E-7;
							cout<<input1<<" Square inches = "<<result<<" Acres "<<endl;
							break;
						case 2:
							cout<<"Enter value in Square inches : "<<endl;
					cin>>input1;
							result=input1*0.0000064516;
							cout<<input1<<" Square inches = "<<result<<" Ares "<<endl;
							break;
						case 3:
							cout<<"Enter value in Square inches : "<<endl;
					cin>>input1;
							result=input1*6.45160000E-8;
							cout<<input1<<" Square inches = "<<result<<" Hectares "<<endl;
							break;
						case 4:
							cout<<"Enter value in Square inches : "<<endl;
					cin>>input1;
							result=input1*6.4516;
							cout<<input1<<" Square inches = "<<result<<" Square centimetres "<<endl;
							break;
						case 5:
							cout<<"Enter value in Square inches : "<<endl;
					cin>>input1;
							result=input1*0.0069444444;
							cout<<input1<<" Square inches = "<<result<<" Square feet "<<endl;
							break;
						case 6:
							cout<<"Enter value in Square inches : "<<endl;
					cin>>input1;
							result=input1*0.00064516;
							cout<<input1<<" Square inches = "<<result<<" Square metres "<<endl;
							break;
					}
					break;	
				case 7:
					cout<<"1. Square metres->Acres "<<endl;
					cout<<"2. Square metres->Ares "<<endl;
					cout<<"3. Square metres->Hectares "<<endl;
					cout<<"4. Square metres->Square centimetres "<<endl;
					cout<<"5. Square metres->Square feet "<<endl;
					cout<<"6. Square metres->Square inches "<<endl;
					cout<<"Enter your choice: "<<endl;
					cin>>out;
					switch(out){
						case 1:
							cout<<"Enter value in Square metres : "<<endl;
					cin>>input1;
							result=input1*0.0002471054;
							cout<<input1<<" Square metres = "<<result<<" Acres "<<endl;
							break;
						case 2:
							cout<<"Enter value in Square metres : "<<endl;
					cin>>input1;
							result=input1*0.01;
							cout<<input1<<" Square metres = "<<result<<" Ares "<<endl;
							break;
						case 3:
							cout<<"Enter value in Square metres : "<<endl;
					cin>>input1;
							result=input1*0.0001;
							cout<<input1<<" Square metres = "<<result<<" Hectares "<<endl;
							break;
						case 4:
							cout<<"Enter value in Square metres : "<<endl;
					cin>>input1;
							result=input1*10000;
							cout<<input1<<" Square metres = "<<result<<" Square centimetres "<<endl;
							break;
						case 5:
							cout<<"Enter value in Square metres : "<<endl;
					cin>>input1;
							result=input1*10.7639104167;
							cout<<input1<<" Square metres = "<<result<<" Square feet "<<endl;
							break;
						case 6:
							cout<<"Enter value in Square metres : "<<endl;
					cin>>input1;
							result=input1*1550.0031000062;
							cout<<input1<<" Square metres = "<<result<<" Square inches "<<endl;
							break;
					}
					break;
				default:
					cout<<"Invalid choice "<<endl;
					break;
			}
			break;
			//LENGTH
			//LENGTH
			//LENGTH
			//LENGTH
			//LENGTH
		case 2:
			int input_length;
			cout<<"1. Millimetres(mm) "<<endl;
			cout<<"2. Centimetres(cm) "<<endl;
			cout<<"3. Metres(m) "<<endl;
			cout<<"4. Kilometres(km) "<<endl;
			cout<<"5. Inches(in) "<<endl;
			cout<<"6. Feet(ft) "<<endl;
			cout<<"7. Yard(yd) "<<endl;
			cout<<"8. Miles(mi) "<<endl;
			cout<<"9. Nautical miles(NM) "<<endl;
			cout<<"10. Mils(mil) "<<endl;
			cout<<"Choose the input unit: "<<endl;
			cin>>input_length;
			double input2;
			switch(input_length){
				case 1:
					cout<<"Enter your choice: "<<endl;
					cout<<"1. Millimetres->Centimetres "<<endl;
					cout<<"2. Millimetres->Metres "<<endl;
					cout<<"3. Millimetres->Kilometres "<<endl;
					cout<<"4. Millimetres->Inches "<<endl;
					cout<<"5. Millimetres->Feet "<<endl;
					cout<<"6. Millimetres->Yard "<<endl;
					cout<<"7. Millimetres->Miles "<<endl;
					cout<<"8. Millimetres->Nautical miles "<<endl;
					cout<<"9. Millimetres->Mils "<<endl;
					int out1;
					cin>>out1;
					switch(out1){
						case 1:
							cout<<"Enter value in Millimetres : "<<endl;
					cin>>input2;
							result=input2*0.1;
							cout<<input2<<" Millimetres = "<<result<<"Centimetres"<<endl;
							break;
						case 2:
							cout<<"Enter value in Acres : "<<endl;
					cin>>input2;
							result=input2*0.001;
							cout<<input2<<" Millimetres = "<<result<<" Metres "<<endl;
							break;
						case 3:
							cout<<"Enter value in Millimetres : "<<endl;
					cin>>input2;
							result=input2*0.000001;
							cout<<input2<<" Millimetres = "<<result<<" Kilometres "<<endl;
							break;
						case 4:
							cout<<"Enter value in Millimetres : "<<endl;
					cin>>input2;
							result=input2*0.0393700787;
							cout<<input2<<" Millimetres = "<<result<<" Inches "<<endl;
							break;
						case 5:
							cout<<"Enter value in Millimetres : "<<endl;
					cin>>input2;
							result=input2*0.0032808399;
							cout<<input2<<" Millimetres = "<<result<<" Feet "<<endl;
							break;
						case 6:
							cout<<"Enter value in Millimetres : "<<endl;
					cin>>input2;
							result=input2*0.0010936133;
							cout<<input2<<" Millimetres = "<<result<<" Yard "<<endl;
							break;
						case 7:
							cout<<"Enter value in Millimetres : "<<endl;
					cin>>input2;
							result=input2*6.21371192E-7;
							cout<<input2<<" Millimetres = "<<result<<" Miles "<<endl;
							break;
						case 8:
							cout<<"Enter value in Millimetres : "<<endl;
					cin>>input2;
							result=input2*5.39956803E-7;
							cout<<input2<<" Millimetres = "<<result<<" Nautical miles "<<endl;
							break;
						case 9:
							cout<<"Enter value in Millimetres : "<<endl;
					cin>>input2;
							result=input2*39.3700787402;
							cout<<input2<<" Millimetres = "<<result<<" Mils "<<endl;
							break;
					}
					break;
				case 2:
					cout<<"1. Centimetres->Millimetres "<<endl;
					cout<<"2. Centimetres->Metres "<<endl;
					cout<<"3. Centimetres->Kilometres "<<endl;
					cout<<"4. Centimetres->Inches "<<endl;
					cout<<"5. Centimetres->Feet "<<endl;
					cout<<"6. Centimetres->Yard "<<endl;
					cout<<"7. Centimetres->Miles "<<endl;
					cout<<"8. Centimetres->Nautical miles "<<endl;
					cout<<"9. Centimetres->Mils "<<endl;
					cout<<"Enter your choice: "<<endl;
					cin>>out1;
					cout<<"Enter value in Centimetres : "<<endl;
					cin>>input2;
					switch(out1){
						case 1:
							result=input2*10;
							cout<<input2<<" Centimetres = "<<result<<"Millimetres"<<endl;
							break;
						case 2:
							
							result=input2*0.01;
							cout<<input2<<" Centimetres = "<<result<<" Metres "<<endl;
							break;
						case 3:
							
							result=input2*0.00001;
							cout<<input2<<" Centimetres = "<<result<<" Kilometres "<<endl;
							break;
						case 4:
							
							result=input2*0.3937007874;
							cout<<input2<<" Centimetres = "<<result<<" Inches "<<endl;
							break;
						case 5:
							
							result=input2*0.32808399;
							cout<<input2<<" Centimetres = "<<result<<" Feet "<<endl;
							break;
						case 6:
							
							result=input2*0.010936133;
							cout<<input2<<" Centimetres = "<<result<<" Yard "<<endl;
							break;
						case 7:
							
							result=input2*0.0000062137;
							cout<<input2<<" Centimetres = "<<result<<" Miles "<<endl;
							break;
						case 8:
							
							result=input2*0.0000053996;
							cout<<input2<<" Centimetres = "<<result<<" Nautical miles "<<endl;
							break;
						case 9:
						
							result=input2*393.7007874016;
							cout<<input2<<" Centimetres = "<<result<<" Mils "<<endl;
							break;
					}
					break;
				case 3:
					cout<<"1. Metres->Millimetres "<<endl;
					cout<<"2. Metres->Centimetres "<<endl;
					cout<<"3. Metres->Kilometres "<<endl;
					cout<<"4. Metres->Inches "<<endl;
					cout<<"5. Metres->Feet "<<endl;
					cout<<"6. Metres->Yard "<<endl;
					cout<<"7. Metres->Miles "<<endl;
					cout<<"8. Metres->Nautical miles "<<endl;
					cout<<"9. Metres->Mils "<<endl;
					cout<<"Enter your choice: "<<endl;
					cin>>out1;
					cout<<"Enter value in Metres : "<<endl;
					cin>>input2;
					switch(out1){
						case 1:
							result=input2*10;
							cout<<input2<<" Metres = "<<result<<"Millimetres"<<endl;
							break;
						case 2:
							
							result=input2*0.01;
							cout<<input2<<" Metres = "<<result<<" Centimetres "<<endl;
							break;
						case 3:
							
							result=input2*0.00001;
							cout<<input2<<" Metres = "<<result<<" Kilometres "<<endl;
							break;
						case 4:
							
							result=input2*0.3937007874;
							cout<<input2<<" Metres = "<<result<<" Inches "<<endl;
							break;
						case 5:
							
							result=input2*0.32808399;
							cout<<input2<<" Metres = "<<result<<" Feet "<<endl;
							break;
						case 6:
							
							result=input2*0.010936133;
							cout<<input2<<" Metres = "<<result<<" Yard "<<endl;
							break;
						case 7:
							
							result=input2*0.0000062137;
							cout<<input2<<" Metres = "<<result<<" Miles "<<endl;
							break;
						case 8:
							
							result=input2*0.0000053996;
							cout<<input2<<" Metres = "<<result<<" Nautical miles "<<endl;
							break;
						case 9:
						
							result=input2*393.7007874016;
							cout<<input2<<" Metres = "<<result<<" Mils "<<endl;
							break;
					}
					break;
				case 4:
					cout<<"1. Kilometres->Millimetres "<<endl;
					cout<<"2. Kilometres->Centimetres "<<endl;
					cout<<"3. Kilometres->Metres "<<endl;
					cout<<"4. Kilometres->Inches "<<endl;
					cout<<"5. Kilometres->Feet "<<endl;
					cout<<"6. Kilometres->Yard "<<endl;
					cout<<"7. Kilometres->Miles "<<endl;
					cout<<"8. Kilometres->Nautical miles "<<endl;
					cout<<"9. Kilometres->Mils "<<endl;
					cout<<"Enter your choice: "<<endl;
					cin>>out1;
					cout<<"Enter value in Kilometres : "<<endl;
					cin>>input2;
					switch(out1){
						case 1:
							result=input2*1000000;
							cout<<input2<<" Kilometres = "<<result<<"Millimetres"<<endl;
							break;
						case 2:
							
							result=input2*100000;
							cout<<input2<<" Kilometres = "<<result<<" Centimetres "<<endl;
							break;
						case 3:
							
							result=input2*1000;
							cout<<input2<<" Kilometres = "<<result<<" Metres "<<endl;
							break;
						case 4:
							
							result=input2*39370.078740157;
							cout<<input2<<" Kilometres = "<<result<<" Inches "<<endl;
							break;
						case 5:
							
							result=input2*3280.8398950131;
							cout<<input2<<" Kilometres = "<<result<<" Feet "<<endl;
							break;
						case 6:
							
							result=input2*1093.6132983377;
							cout<<input2<<" Kilometres = "<<result<<" Yard "<<endl;
							break;
						case 7:
							
							result=input2*0.6213711922;
							cout<<input2<<" Kilometres = "<<result<<" Miles "<<endl;
							break;
						case 8:
							
							result=input2*0.5399568035;
							cout<<input2<<" Kilometres = "<<result<<" Nautical miles "<<endl;
							break;
						case 9:
						
							result=input2*39370078.740157;
							cout<<input2<<" Kilometres = "<<result<<" Mils "<<endl;
							break;
					}
					break;
				case 5:
					cout<<"1. Inches->Millimetres "<<endl;
					cout<<"2. Inches->Centimetres "<<endl;
					cout<<"3. Inches->Metres "<<endl;
					cout<<"4. Inches->Kilometres "<<endl;
					cout<<"5. Inches->Feet "<<endl;
					cout<<"6. Inches->Yard "<<endl;
					cout<<"7. Inches->Miles "<<endl;
					cout<<"8. Inches->Nautical miles "<<endl;
					cout<<"9. Inches->Mils "<<endl;
					cout<<"Enter your choice: "<<endl;
					cin>>out1;
					cout<<"Enter value in Inches : "<<endl;
					cin>>input2;
					switch(out1){
						case 1:
							result=input2*25.4;
							cout<<input2<<" Inches = "<<result<<"Millimetres"<<endl;
							break;
						case 2:
							
							result=input2*2.54;
							cout<<input2<<" Inches = "<<result<<" Centimetres "<<endl;
							break;
						case 3:
							
							result=input2*0.0254;
							cout<<input2<<" Inches = "<<result<<" Metres "<<endl;
							break;
						case 4:
							
							result=input2*0.0000254;
							cout<<input2<<" Inches = "<<result<<" Kilometres "<<endl;
							break;
						case 5:
							
							result=input2*0.0833333333;
							cout<<input2<<" Inches = "<<result<<" Feet "<<endl;
							break;
						case 6:
							
							result=input2*0.0277777778;
							cout<<input2<<" Inches = "<<result<<" Yard "<<endl;
							break;
						case 7:
							
							result=input2*0.0000157828;
							cout<<input2<<" Inches = "<<result<<" Miles "<<endl;
							break;
						case 8:
							
							result=input2*0.0000137149;
							cout<<input2<<" Inches = "<<result<<" Nautical miles "<<endl;
							break;
						case 9:
						
							result=input2*10000;
							cout<<input2<<" Inches = "<<result<<" Mils "<<endl;
							break;
					}
					break;
				case 6:
					cout<<"1. Feet->Millimetres "<<endl;
					cout<<"2. Feet->Centimetres "<<endl;
					cout<<"3. Feet->Metres "<<endl;
					cout<<"4. Feet->Kilometres "<<endl;
					cout<<"5. Feet->Inches "<<endl;
					cout<<"6. Feet->Yard "<<endl;
					cout<<"7. Feet->Miles "<<endl;
					cout<<"8. Feet->Nautical miles "<<endl;
					cout<<"9. Feet->Mils "<<endl;
					cout<<"Enter your choice: "<<endl;
					cin>>out1;
					cout<<"Enter value in Feet : "<<endl;
					cin>>input2;
					switch(out1){
						case 1:
							result=input2*304.8;
							cout<<input2<<" Feet = "<<result<<"Millimetres"<<endl;
							break;
						case 2:
							
							result=input2*30.48;
							cout<<input2<<" Feet = "<<result<<" Centimetres "<<endl;
							break;
						case 3:
							
							result=input2*0.3048;
							cout<<input2<<" Feet = "<<result<<" Metres "<<endl;
							break;
						case 4:
							
							result=input2*0.0003048;
							cout<<input2<<" Feet = "<<result<<" Kilometres "<<endl;
							break;
						case 5:
							
							result=input2*12;
							cout<<input2<<" Feet = "<<result<<" Inches "<<endl;
							break;
						case 6:
							
							result=input2*0.3333333333;
							cout<<input2<<" Feet = "<<result<<" Yard "<<endl;
							break;
						case 7:
							
							result=input2*0.0001893939;
							cout<<input2<<" Feet = "<<result<<" Miles "<<endl;
							break;
						case 8:
							
							result=input2*0.0001645788;
							cout<<input2<<" Feet = "<<result<<" Nautical miles "<<endl;
							break;
						case 9:
						
							result=input2*12000;
							cout<<input2<<" Feet = "<<result<<" Mils "<<endl;
							break;
					}
					break;
				case 7:
					cout<<"1. Yard->Millimetres "<<endl;
					cout<<"2. Yard->Centimetres "<<endl;
					cout<<"3. Yard->Metres "<<endl;
					cout<<"4. Yard->Kilometres "<<endl;
					cout<<"5. Yard->Inches "<<endl;
					cout<<"6. Yard->Feet "<<endl;
					cout<<"7. Yard->Miles "<<endl;
					cout<<"8. Yard->Nautical miles "<<endl;
					cout<<"9. Yard->Mils "<<endl;
					cout<<"Enter your choice: "<<endl;
					cin>>out1;
					cout<<"Enter value in Yard : "<<endl;
					cin>>input2;
					switch(out1){
						case 1:
							result=input2*914.4;
							cout<<input2<<" Yard = "<<result<<"Millimetres"<<endl;
							break;
						case 2:
							
							result=input2*91.44;
							cout<<input2<<" Yard = "<<result<<" Centimetres "<<endl;
							break;
						case 3:
							
							result=input2*0.9144;
							cout<<input2<<" Yard = "<<result<<" Metres "<<endl;
							break;
						case 4:
							
							result=input2*0.0009144;
							cout<<input2<<" Yard = "<<result<<" Kilometres "<<endl;
							break;
						case 5:
							
							result=input2*36;
							cout<<input2<<" Yard = "<<result<<" Inches "<<endl;
							break;
						case 6:
							
							result=input2*3;
							cout<<input2<<" Yard = "<<result<<" Feet "<<endl;
							break;
						case 7:
							
							result=input2*0.0005681818;
							cout<<input2<<" Yard = "<<result<<" Miles "<<endl;
							break;
						case 8:
							
							result=input2*0.0004937365;
							cout<<input2<<" Yard = "<<result<<" Nautical miles "<<endl;
							break;
						case 9:
						
							result=input2*36000;
							cout<<input2<<" Yard = "<<result<<" Mils "<<endl;
							break;
					}
					break;
				case 8:
					cout<<"1. Miles->Millimetres "<<endl;
					cout<<"2. Miles->Centimetres "<<endl;
					cout<<"3. Miles->Metres "<<endl;
					cout<<"4. Miles->Kilometres "<<endl;
					cout<<"5. Miles->Inches "<<endl;
					cout<<"6. Miles->Feet "<<endl;
					cout<<"7. Miles->Yard "<<endl;
					cout<<"8. Miles->Nautical miles "<<endl;
					cout<<"9. Miles->Mils "<<endl;
					cout<<"Enter your choice: "<<endl;
					cin>>out1;
					cout<<"Enter value in Miles : "<<endl;
					cin>>input2;
					switch(out1){
						case 1:
							result=input2*1609344;
							cout<<input2<<" Miles = "<<result<<"Millimetres"<<endl;
							break;
						case 2:
							
							result=input2*160934.4;
							cout<<input2<<" Miles = "<<result<<" Centimetres "<<endl;
							break;
						case 3:
							
							result=input2*1609.344;
							cout<<input2<<" Miles = "<<result<<" Metres "<<endl;
							break;
						case 4:
							
							result=input2*1.609344;
							cout<<input2<<" Miles = "<<result<<" Kilometres "<<endl;
							break;
						case 5:
							
							result=input2*63360;
							cout<<input2<<" Miles = "<<result<<" Inches "<<endl;
							break;
						case 6:
							
							result=input2*5280;
							cout<<input2<<" Miles = "<<result<<" Feet "<<endl;
							break;
						case 7:
							
							result=input2*1760;
							cout<<input2<<" Miles = "<<result<<" Yard "<<endl;
							break;
						case 8:
							
							result=input2*0.8689762419;
							cout<<input2<<" Miles = "<<result<<" Nautical miles "<<endl;
							break;
						case 9:
						
							result=input2*63360000;
							cout<<input2<<" Miles = "<<result<<" Mils "<<endl;
							break;
					}
					break;
				case 9:
					cout<<"1. Nautical miles->Millimetres "<<endl;
					cout<<"2. Nautical miles->Centimetres "<<endl;
					cout<<"3. Nautical miles->Metres "<<endl;
					cout<<"4. Nautical miles->Kilometres "<<endl;
					cout<<"5. Nautical miles->Inches "<<endl;
					cout<<"6. Nautical miles->Feet "<<endl;
					cout<<"7. Nautical miles->Yard "<<endl;
					cout<<"8. Nautical miles->Miles "<<endl;
					cout<<"9. Nautical miles->Mils "<<endl;
					cout<<"Enter your choice: "<<endl;
					cin>>out1;
					cout<<"Enter value in Nautical miles : "<<endl;
					cin>>input2;
					switch(out1){
						case 1:
							result=input2*1852000;
							cout<<input2<<" Nautical miles = "<<result<<"Millimetres"<<endl;
							break;
						case 2:
							
							result=input2*185200;
							cout<<input2<<" Nautical miles = "<<result<<" Centimetres "<<endl;
							break;
						case 3:
							
							result=input2*1852;
							cout<<input2<<" Nautical miles = "<<result<<" Metres "<<endl;
							break;
						case 4:
							
							result=input2*1.852;
							cout<<input2<<" Nautical miles = "<<result<<" Kilometres "<<endl;
							break;
						case 5:
							
							result=input2*72913.385826772;
							cout<<input2<<" Nautical miles = "<<result<<" Inches "<<endl;
							break;
						case 6:
							
							result=input2*6076.1154855643;
							cout<<input2<<" Nautical miles = "<<result<<" Feet "<<endl;
							break;
						case 7:
							
							result=input2*2025.3718285214;
							cout<<input2<<" Nautical miles = "<<result<<" Yard "<<endl;
							break;
						case 8:
							
							result=input2*1.150779448;
							cout<<input2<<" Nautical miles = "<<result<<" Miles "<<endl;
							break;
						case 9:
						
							result=input2*72913385.826772;
							cout<<input2<<" Nautical miles = "<<result<<" Mils "<<endl;
							break;
					}
					break;
				case 10:
					cout<<"1. Mils->Millimetres "<<endl;
					cout<<"2. Mils->Centimetres "<<endl;
					cout<<"3. Mils->Metres "<<endl;
					cout<<"4. Mils->Kilometres "<<endl;
					cout<<"5. Mils->Inches "<<endl;
					cout<<"6. Mils->Feet "<<endl;
					cout<<"7. Mils->Yard "<<endl;
					cout<<"8. Mils->Miles "<<endl;
					cout<<"9. Mils->Nautical miles "<<endl;
					cout<<"Enter your choice: "<<endl;
					cin>>out1;
					cout<<"Enter value in Mils : "<<endl;
					cin>>input2;
					switch(out1){
						case 1:
							result=input2*0.0254;
							cout<<input2<<" Mils = "<<result<<"Millimetres"<<endl;
							break;
						case 2:
							
							result=input2*0.00254;
							cout<<input2<<" Nautical miles = "<<result<<" Centimetres "<<endl;
							break;
						case 3:
							
							result=input2*0.0000254;
							cout<<input2<<" Mils = "<<result<<" Metres "<<endl;
							break;
						case 4:
							
							result=input2*2.54000000E-8;
							cout<<input2<<" Mils = "<<result<<" Kilometres "<<endl;
							break;
						case 5:
							
							result=input2*0.001;
							cout<<input2<<" Mils = "<<result<<" Inches "<<endl;
							break;
						case 6:
							
							result=input2*0.0000833333;
							cout<<input2<<" Mils = "<<result<<" Feet "<<endl;
							break;
						case 7:
							
							result=input2*0.0000277778;
							cout<<input2<<" Mils = "<<result<<" Yard "<<endl;
							break;
						case 8:
							
							result=input2*1.57828283E-8;
							cout<<input2<<" Mils = "<<result<<" Miles "<<endl;
							break;
						case 9:
						
							result=input2*1.37149028E-8;
							cout<<input2<<" Mils = "<<result<<" Nautical miles "<<endl;
							break;
					}
					break;
				default:
					cout<<"Invalid choice "<<endl;
					break;
			}
			break;
			/////temperature
			/////temperature
			/////temperature
			/////temperature
			/////temperature
		case 3:
			int input_temp;
			cout<<"1. Celsius(C) "<<endl;
			cout<<"2. Fahrenheit(F) "<<endl;
			cout<<"3. Kelvin(K) "<<endl;
			cout<<"Choose the input unit: "<<endl;
			cin>>input_temp;
			double input3;
			switch(input_temp){
				case 1:
					cout<<"Enter your choice: "<<endl;
					cout<<"1. Celsius->Fehrenheit "<<endl;
					cout<<"2. Celsius->Kelvin "<<endl;
					int out2;
					cin>>out2;
					switch(out2){
						case 1:
							cout<<"Enter value in Celsius : "<<endl;
							cin>>input3;
							result=1.8*input3 + 32;
							cout<<input3<<" Celsius = "<<result<<"Fahrenheit"<<endl;
							break;
						case 2:
						cout<<"Enter value in Celsius : "<<endl;
							cin>>input3;
							result=input3 + 273.15;
							cout<<input3<<" Celsius = "<<result<<"Kelvin"<<endl;
							break;
					}
					break;
				case 2:
					cout<<"Enter your choice: "<<endl;
					cout<<"1. Fehrenheit->Celsius "<<endl;
					cout<<"2. Fehrenheit->Kelvin "<<endl;
					cin>>out2;
					switch(out2){
						case 1:
							cout<<"Enter value in Fehrenheit : "<<endl;
							cin>>input3;
							result=(input3-32)*1.8;
							cout<<input3<<" Fehrenheit = "<<result<<"Celsius"<<endl;
							break;
						case 2:
						cout<<"Enter value in Fehrenheit : "<<endl;
							cin>>input3;
							result=(input3-32)*1.8 + 273.15;
							cout<<input3<<" Fehrenheit = "<<result<<"Kelvin"<<endl;
							break;
					}
					break;
				case 3:
					cout<<"Enter your choice: "<<endl;
					cout<<"1. Kelvin->Celsius "<<endl;
					cout<<"2. Kelvin->Fehrenheit "<<endl;
					cin>>out2;
					switch(out2){
						case 1:
							cout<<"Enter value in Kelvin : "<<endl;
							cin>>input3;
							result=input3-273.15;
							cout<<input3<<" Kelvin = "<<result<<"Celsius"<<endl;
							break;
						case 2:
						cout<<"Enter value in Kelvin : "<<endl;
							cin>>input3;
							result=(input3-273.15)*1.8 + 32;
							cout<<input3<<" Kelvin = "<<result<<"Fehrenheit"<<endl;
							break;
					}
					break;
				default:
					cout<<"Invalid choice "<<endl;
					break;
			}
			break;
			///volume
			///volume
			///volume
			///volume
		case 4:
			int input_vol;
			cout<<"1. Litres(L) "<<endl;
			cout<<"2. Millilitres(ml) "<<endl;
			cout<<"3. Cubic centimetres(cc)(cm^3) "<<endl;
			cout<<"4. Cubic metres(m^3) "<<endl;
			cout<<"5. Cubic inches(in^3) "<<endl;
			cout<<"6. Cubic feet(ft^3) "<<endl;
			cout<<"Choose the input unit: "<<endl;
			cin>>input_vol;
			int out3;
			double input4;
			switch(input_vol){
				case 1:
					cout<<"Enter your choice: "<<endl;
					cout<<"1. Litres->Millilitres "<<endl;
					cout<<"2. Litres->Cubic centimetres "<<endl;
					cout<<"3. Litres->Cubic Metres "<<endl;
					cout<<"4. Litres->Cubic inches "<<endl;
					cout<<"5. Litres->Cubic feet "<<endl;
					cin>>out3;
					cout<<"Enter value in Litres : "<<endl;
					cin>>input4;
					switch(out3){
						case 1:
							result=input4*1000;
							cout<<input4<<" Litres = "<<result<<"Millilitres"<<endl;
							break;
						case 2:
							result=input4*1000;
							cout<<input4<<" Litres = "<<result<<"Cubic centimetres"<<endl;
							break;
						case 3:
							result=input4*0.001;
							cout<<input4<<" Litres = "<<result<<"Cubic Metres"<<endl;
							break;
						case 4:
							result=input4*61.0237440947;
							cout<<input4<<" Litres = "<<result<<"Cubic inches"<<endl;
							break;
						case 5:
							result=input4*0.0353146667;
							cout<<input4<<" Litres = "<<result<<"Cubic feet"<<endl;
							break;
					}
					break;
				case 2:
					cout<<"Enter your choice: "<<endl;
					cout<<"1. Millilitres->Litres "<<endl;
					cout<<"2. Millilitres->Cubic centimetres "<<endl;
					cout<<"3. Millilitres->Cubic Metres "<<endl;
					cout<<"4. Millilitres->Cubic inches "<<endl;
					cout<<"5. Millilitres->Cubic feet "<<endl;
					cin>>out3;
					cout<<"Enter value in Millilitres : "<<endl;
					cin>>input4;
					switch(out3){
						case 1:
							result=input4*0.001;
							cout<<input4<<" Millilitres = "<<result<<" Litres"<<endl;
							break;
						case 2:
							result=input4;
							cout<<input4<<" Millilitres = "<<result<<" Cubic centimetres"<<endl;
							break;
						case 3:
							result=input4*0.000001;
							cout<<input4<<" Millilitres = "<<result<<" Cubic Metres"<<endl;
							break;
						case 4:
							result=input4*0.0610237441;
							cout<<input4<<" Millilitres = "<<result<<" Cubic inches"<<endl;
							break;
						case 5:
							result=input4*0.0000353147;
							cout<<input4<<" Millilitres = "<<result<<" Cubic feet"<<endl;
							break;
					}
					break;
				case 3:
					cout<<"Enter your choice: "<<endl;
					cout<<"1. Cubic centimetres->Litres "<<endl;
					cout<<"2. Cubic centimetres->Millilitres "<<endl;
					cout<<"3. Cubic centimetres->Cubic Metres "<<endl;
					cout<<"4. Cubic centimetres->Cubic inches "<<endl;
					cout<<"5. Cubic centimetres->Cubic feet "<<endl;
					cin>>out3;
					cout<<"Enter value in Cubic centimetres : "<<endl;
					cin>>input4;
					switch(out3){
						case 1:
							result=input4*0.001;
							cout<<input4<<" Cubic centimetres = "<<result<<" Litres"<<endl;
							break;
						case 2:
							result=input4;
							cout<<input4<<" Cubic centimetres = "<<result<<" Millilitres"<<endl;
							break;
						case 3:
							result=input4*0.000001;
							cout<<input4<<" Cubic centimetres = "<<result<<" Cubic Metres"<<endl;
							break;
						case 4:
							result=input4*0.0610237441;
							cout<<input4<<" Cubic centimetres = "<<result<<" Cubic inches"<<endl;
							break;
						case 5:
							result=input4*0.0000353147;
							cout<<input4<<" Cubic centimetres = "<<result<<" Cubic feet"<<endl;
							break;
					}
					break;
				case 4:
					cout<<"Enter your choice: "<<endl;
					cout<<"1. Cubic Metres->Litres "<<endl;
					cout<<"2. Cubic Metres->Millilitres "<<endl;
					cout<<"3. Cubic Metres->Cubic centimetres "<<endl;
					cout<<"4. Cubic Metres->Cubic inches "<<endl;
					cout<<"5. Cubic Metres->Cubic feet "<<endl;
					cin>>out3;
					cout<<"Enter value in Cubic Metres : "<<endl;
					cin>>input4;
					switch(out3){
						case 1:
							result=input4*1000;
							cout<<input4<<" Cubic Metres = "<<result<<" Litres"<<endl;
							break;
						case 2:
							result=input4*1000000;
							cout<<input4<<" Cubic Metres = "<<result<<" Millilitres"<<endl;
							break;
						case 3:
							result=input4*1000000;
							cout<<input4<<" Cubic Metres = "<<result<<" Cubic centimetres"<<endl;
							break;
						case 4:
							result=input4*61023.744094732;
							cout<<input4<<" Cubic Metres = "<<result<<" Cubic inches"<<endl;
							break;
						case 5:
							result=input4*35.3146667215;
							cout<<input4<<" Cubic Metres = "<<result<<" Cubic feet"<<endl;
							break;
					}
					break;
				case 5:
					cout<<"Enter your choice: "<<endl;
					cout<<"1. Cubic inches->Litres "<<endl;
					cout<<"2. Cubic inches->Millilitres "<<endl;
					cout<<"3. Cubic inches->Cubic centimetres "<<endl;
					cout<<"4. Cubic inches->Cubic Metres "<<endl;
					cout<<"5. Cubic inches->Cubic feet "<<endl;
					cin>>out3;
					cout<<"Enter value in Cubic inches : "<<endl;
					cin>>input4;
					switch(out3){
						case 1:
							result=input4*0.016387064;
							cout<<input4<<" Cubic inches = "<<result<<" Litres"<<endl;
							break;
						case 2:
							result=input4*16.387064;
							cout<<input4<<" Cubic inches = "<<result<<" Millilitres"<<endl;
							break;
						case 3:
							result=input4*16.387064;
							cout<<input4<<" Cubic inches = "<<result<<" Cubic centimetres"<<endl;
							break;
						case 4:
							result=input4*0.0000163871;
							cout<<input4<<" Cubic inches = "<<result<<" Cubic Metres"<<endl;
							break;
						case 5:
							result=input4*0.0005787037;
							cout<<input4<<" Cubic inches = "<<result<<" Cubic feet"<<endl;
							break;
					}
					break;
				case 6:
					cout<<"Enter your choice: "<<endl;
					cout<<"1. Cubic feet->Litres "<<endl;
					cout<<"2. Cubic feet->Millilitres "<<endl;
					cout<<"3. Cubic feet->Cubic centimetres "<<endl;
					cout<<"4. Cubic feet->Cubic Metres "<<endl;
					cout<<"5. Cubic feet->Cubic inches "<<endl;
					cin>>out3;
					cout<<"Enter value in Cubic feet : "<<endl;
					cin>>input4;
					switch(out3){
						case 1:
							result=input4*28.316846592;
							cout<<input4<<" Cubic feet = "<<result<<" Litres"<<endl;
							break;
						case 2:
							result=input4*28316.846592;
							cout<<input4<<" Cubic feet = "<<result<<" Millilitres"<<endl;
							break;
						case 3:
							result=input4*28316.846592;
							cout<<input4<<" Cubic feet = "<<result<<" Cubic centimetres"<<endl;
							break;
						case 4:
							result=input4*0.0283168466;
							cout<<input4<<" Cubic feet = "<<result<<" Cubic Metres"<<endl;
							break;
						case 5:
							result=input4*1728;
							cout<<input4<<" Cubic feet = "<<result<<" Cubic inches"<<endl;
							break;
					}
					break;
					default:
					cout<<"Invalid choice "<<endl;
					break;
			}
			break;
			///mass
			///mass
			///mass
			///mass
		case 5:
			int input_mass;
			cout<<"1. Tons(t) "<<endl;
			cout<<"2. Pounds(lb) "<<endl;
			cout<<"3. Ounces(oz) "<<endl;
			cout<<"4. Kilograms(kg) "<<endl;
			cout<<"5. Grams(g) "<<endl;
			cout<<"Choose the input unit: "<<endl;
			cin>>input_mass;
			int out4;
			double input5;
			switch(input_mass){
				case 1:
					cout<<"Enter your choice: "<<endl;
					cout<<"1. Tons->Pounds "<<endl;
					cout<<"2. Tons->Ounces "<<endl;
					cout<<"3. Tons->Kilograms "<<endl;
					cout<<"4. Tons->Grams "<<endl;
					cin>>out4;
					cout<<"Enter value in Tons : "<<endl;
					cin>>input5;
					switch(out4){
						case 1:
							result=input5*2204.6226218488;
							cout<<input5<<" Tons = "<<result<<" Pounds"<<endl;
							break;
						case 2:
							result=input5*35273.96194958;
							cout<<input5<<" Tons = "<<result<<" Ounces"<<endl;
							break;
						case 3:
							result=input5*1000;
							cout<<input5<<" Tons = "<<result<<" Kilograms"<<endl;
							break;
						case 4:
							result=input5*100000;
							cout<<input5<<" Tons = "<<result<<" Grams"<<endl;
							break;
					}
					break;
				case 2:
					cout<<"Enter your choice: "<<endl;
					cout<<"1. Pounds->Tons "<<endl;
					cout<<"2. Pounds->Ounces "<<endl;
					cout<<"3. Pounds->Kilograms "<<endl;
					cout<<"4. Pounds->Grams "<<endl;
					cin>>out4;
					cout<<"Enter value in Pounds : "<<endl;
					cin>>input5;
					switch(out4){
						case 1:
							result=input5*0.0004535924;
							cout<<input5<<" Pounds = "<<result<<" Tons"<<endl;
							break;
						case 2:
							result=input5*16;
							cout<<input5<<" Pounds = "<<result<<" Ounces"<<endl;
							break;
						case 3:
							result=input5*0.45359237;
							cout<<input5<<" Pounds = "<<result<<" Kilograms"<<endl;
							break;
						case 4:
							result=input5*453.59237;
							cout<<input5<<" Pounds = "<<result<<" Grams"<<endl;
							break;
					}
					break;
				case 3:
					cout<<"Enter your choice: "<<endl;
					cout<<"1. Ounces->Pounds "<<endl;
					cout<<"2. Ounces->Tons "<<endl;
					cout<<"3. Ounces->Kilograms "<<endl;
					cout<<"4. Ounces->Grams "<<endl;
					cin>>out4;
					cout<<"Enter value in Ounces : "<<endl;
					cin>>input5;
					switch(out4){
						case 1:
							result=input5*0.0000283495;
							cout<<input5<<" Ounces = "<<result<<" Tons"<<endl;
							break;
						case 2:
							result=input5*0.0625;
							cout<<input5<<" Ounces = "<<result<<" Pounds"<<endl;
							break;
						case 3:
							result=input5*0.0283495231;
							cout<<input5<<" Ounces = "<<result<<" Kilograms"<<endl;
							break;
						case 4:
							result=input5*28.349523125;
							cout<<input5<<" Ounces = "<<result<<" Grams"<<endl;
							break;
					}
					break;
				case 4:
					cout<<"Enter your choice: "<<endl;
					cout<<"1. Kilograms->Pounds "<<endl;
					cout<<"2. Kilograms->Tons "<<endl;
					cout<<"3. Kilograms->Ounces "<<endl;
					cout<<"4. Kilograms->Grams "<<endl;
					cin>>out4;
					cout<<"Enter value in Kilograms : "<<endl;
					cin>>input5;
					switch(out4){
						case 1:
							result=input5*0.001;
							cout<<input5<<" Kilograms = "<<result<<" Tons"<<endl;
							break;
						case 2:
							result=input5*2.2046226218;
							cout<<input5<<" Kilograms = "<<result<<" Pounds"<<endl;
							break;
						case 3:
							result=input5*35.2739619496;
							cout<<input5<<" Kilograms = "<<result<<" Ounces"<<endl;
							break;
						case 4:
							result=input5*1000;
							cout<<input5<<" Kilograms = "<<result<<" Grams"<<endl;
							break;
					}
					break;
				case 5:
					cout<<"Enter your choice: "<<endl;
					cout<<"1. Grams->Pounds "<<endl;
					cout<<"2. Grams->Tons "<<endl;
					cout<<"3. Grams->Ounces "<<endl;
					cout<<"4. Grams->Kilograms "<<endl;
					cin>>out4;
					cout<<"Enter value in Grams : "<<endl;
					cin>>input5;
					switch(out4){
						case 1:
							result=input5*0.000001;
							cout<<input5<<" Grams = "<<result<<" Tons"<<endl;
							break;
						case 2:
							result=input5*0.0022046226;
							cout<<input5<<" Grams = "<<result<<" Pounds"<<endl;
							break;
						case 3:
							result=input5*0.0352739619;
							cout<<input5<<" Grams = "<<result<<" Ounces"<<endl;
							break;
						case 4:
							result=input5*0.001;
							cout<<input5<<" Grams = "<<result<<" Kilograms"<<endl;
							break;
					}
					break;
					default:
					cout<<"Invalid choice "<<endl;
					break;
			}
			break;
			////DATA
			////DATA
			////DATA
			////DATA
		case 6:
			int input_data;
			cout<<"1. Bits(bit) "<<endl;
			cout<<"2. Bytes(B) "<<endl;
			cout<<"3. Kilobbytes(KB) "<<endl;
			cout<<"4. Megabytes(MB) "<<endl;
			cout<<"5. Gigabytes(GB) "<<endl;
			cout<<"6. Terabytes(TB) "<<endl;
			cout<<"Choose the input unit: "<<endl;
			cin>>input_data;
			int out5;
			double input6;
			switch(input_data){
				case 1:
					cout<<"Enter your choice: "<<endl;
					cout<<"1. Bits->Bytes "<<endl;
					cout<<"2. Bits->Kilobbytes "<<endl;
					cout<<"3. Bits->Megabytes "<<endl;
					cout<<"4. Bits->Gigabytes "<<endl;
					cout<<"5. Bits->Terabytes "<<endl;
					cin>>out5;
					cout<<"Enter value in Bits : "<<endl;
					cin>>input6;
					switch(out5){
						case 1:
							result=input6*0.125;
							cout<<input6<<" Bits = "<<result<<" Bytes"<<endl;
							break;
						case 2:
							result=input6*0.000125;
							cout<<input6<<" Bits = "<<result<<" Kilobbytes"<<endl;
							break;
						case 3:
							result=input6*1.25000000E-7;
							cout<<input6<<" Bits = "<<result<<" Megabytes"<<endl;
							break;
						case 4:
							result=input6*1.25000000E-10;
							cout<<input6<<" Bits = "<<result<<" Gigabytes"<<endl;
							break;
						case 5:
							result=input6*1.25000000E-13;
							cout<<input6<<" Bits = "<<result<<" Terabytes"<<endl;
							break;
					}
					break;
				case 2:
					cout<<"Enter your choice: "<<endl;
					cout<<"1. Bytes->Bits "<<endl;
					cout<<"2. Bytes->Kilobbytes "<<endl;
					cout<<"3. Bytes->Megabytes "<<endl;
					cout<<"4. Bytes->Gigabytes "<<endl;
					cout<<"5. Bytes->Terabytes "<<endl;
					cin>>out5;
					cout<<"Enter value in Bytes : "<<endl;
					cin>>input6;
					switch(out5){
						case 1:
							result=input6*8;
							cout<<input6<<" Bytes = "<<result<<" Bits"<<endl;
							break;
						case 2:
							result=input6*0.001;
							cout<<input6<<" Bytes = "<<result<<" Kilobbytes"<<endl;
							break;
						case 3:
							result=input6*0.000001;
							cout<<input6<<" Bytes = "<<result<<" Megabytes"<<endl;
							break;
						case 4:
							result=input6*1.00000000E-9;
							cout<<input6<<" Bytes = "<<result<<" Gigabytes"<<endl;
							break;
						case 5:
							result=input6*1.00000000E-12;
							cout<<input6<<" Bytes = "<<result<<" Terabytes"<<endl;
							break;
					}
					break;
				case 3:
					cout<<"Enter your choice: "<<endl;
					cout<<"1. Kilobbytes->Bits "<<endl;
					cout<<"2. Kilobbytes->Bytes "<<endl;
					cout<<"3. Kilobbytes->Megabytes "<<endl;
					cout<<"4. Kilobbytes->Gigabytes "<<endl;
					cout<<"5. Kilobbytes->Terabytes "<<endl;
					cin>>out5;
					cout<<"Enter value in Kilobbytes : "<<endl;
					cin>>input6;
					switch(out5){
						case 1:
							result=input6*8000;
							cout<<input6<<" Kilobbytes = "<<result<<" Bits"<<endl;
							break;
						case 2:
							result=input6*1000;
							cout<<input6<<" Kilobbytes = "<<result<<" Bytes"<<endl;
							break;
						case 3:
							result=input6*0.001;
							cout<<input6<<" Bytes = "<<result<<" Megabytes"<<endl;
							break;
						case 4:
							result=input6*0.000001;
							cout<<input6<<" Kilobbytes = "<<result<<" Gigabytes"<<endl;
							break;
						case 5:
							result=input6*1.00000000E-9;
							cout<<input6<<" Kilobbytes = "<<result<<" Terabytes"<<endl;
							break;
					}
					break;
				case 4:
					cout<<"Enter your choice: "<<endl;
					cout<<"1. Megabytes->Bits "<<endl;
					cout<<"2. Megabytes->Bytes "<<endl;
					cout<<"3. Megabytes->Kilobbytes "<<endl;
					cout<<"4. Megabytes->Gigabytes "<<endl;
					cout<<"5. Megabytes->Terabytes "<<endl;
					cin>>out5;
					cout<<"Enter value in Megabytes : "<<endl;
					cin>>input6;
					switch(out5){
						case 1:
							result=input6*800000;
							cout<<input6<<" Megabytes = "<<result<<" Bits"<<endl;
							break;
						case 2:
							result=input6*1000000;
							cout<<input6<<" Megabytes = "<<result<<" Bytes"<<endl;
							break;
						case 3:
							result=input6*1000;
							cout<<input6<<" Megabytes = "<<result<<" Kilobbytes"<<endl;
							break;
						case 4:
							result=input6*0.001;
							cout<<input6<<" Megabytes = "<<result<<" Gigabytes"<<endl;
							break;
						case 5:
							result=input6*0.000001;
							cout<<input6<<" Megabytes = "<<result<<" Terabytes"<<endl;
							break;
					}
					break;
				case 5:
					cout<<"Enter your choice: "<<endl;
					cout<<"1. Gigabytes->Bits "<<endl;
					cout<<"2. Gigabytes->Bytes "<<endl;
					cout<<"3. Gigabytes->Kilobbytes "<<endl;
					cout<<"4. Gigabytes->Megabytes "<<endl;
					cout<<"5. Gigabytes->Terabytes "<<endl;
					cin>>out5;
					cout<<"Enter value in Gigabytes : "<<endl;
					cin>>input6;
					switch(out5){
						case 1:
							result=input6*8000000000;
							cout<<input6<<" Gigabytes = "<<result<<" Bits"<<endl;
							break;
						case 2:
							result=input6*1000000000;
							cout<<input6<<" Gigabytes = "<<result<<" Bytes"<<endl;
							break;
						case 3:
							result=input6*1000000;
							cout<<input6<<" Gigabytes = "<<result<<" Kilobbytes"<<endl;
							break;
						case 4:
							result=input6*1000;
							cout<<input6<<" Gigabytes = "<<result<<" Megabytes"<<endl;
							break;
						case 5:
							result=input6*0.001;
							cout<<input6<<" Gigabytes = "<<result<<" Terabytes"<<endl;
							break;
					}
					break;
				case 6:
					cout<<"Enter your choice: "<<endl;
					cout<<"1. Terabytes->Bits "<<endl;
					cout<<"2. Terabytes->Bytes "<<endl;
					cout<<"3. Terabytes->Kilobbytes "<<endl;
					cout<<"4. Terabytes->Megabytes "<<endl;
					cout<<"5. Terabytes->Gigabytes "<<endl;
					cin>>out5;
					cout<<"Enter value in Terabytes : "<<endl;
					cin>>input6;
					switch(out5){
						case 1:
							result=input6*8000000000000;
							cout<<input6<<" Terabytes = "<<result<<" Bits"<<endl;
							break;
						case 2:
							result=input6*1000000000000;
							cout<<input6<<" Terabytes = "<<result<<" Bytes"<<endl;
							break;
						case 3:
							result=input6*1000000000;
							cout<<input6<<" Terabytes = "<<result<<" Kilobbytes"<<endl;
							break;
						case 4:
							result=input6*1000000;
							cout<<input6<<" Terabytes = "<<result<<" Megabytes"<<endl;
							break;
						case 5:
							result=input6*1000;
							cout<<input6<<" Terabytes = "<<result<<" Gigabytes"<<endl;
							break;
					}
					break;
					default:
					cout<<"Invalid choice "<<endl;
					break;
			}
			break;
			////SPEED
			////SPEED
			////SPEED
			////SPEED
		case 7:
			int input_speed;
			cout<<"1. Metres per second(m/s) "<<endl;
			cout<<"2. Metres per hour(m/hr)"<<endl;
			cout<<"3. Kilometres per second (km/s) "<<endl;
			cout<<"4. Kilometres per hour (km/h) "<<endl;
			cout<<"5. Inches per second (in/s) "<<endl;
			cout<<"6. Inches per hour (in/h) "<<endl;
			cout<<"7. Feet per second (ft/s) "<<endl;
			cout<<"8. Feet per hour (ft/h) "<<endl;
			cout<<"9. Miles per second (mi/s) "<<endl;
			cout<<"10. Miles per hour (mi/h) "<<endl;
			cout<<"11. Knots (kn) "<<endl;
			cout<<"Choose the input unit: "<<endl;
			cin>>input_speed;
			int out6;
			long double input7;
			switch(input_speed){
				case 1:
					cout<<"Enter your choice: "<<endl;
					cout<<"1. Metres per second(m/s)->Metres per hour(m/hr) "<<endl;
					cout<<"2. Metres per second(m/s)->Kilometres per second (km/s) "<<endl;
					cout<<"3. Metres per second(m/s)->Kilometres per hour (km/h) "<<endl;
					cout<<"4. Metres per second(m/s)->Inches per second (in/s) "<<endl;
					cout<<"5. Metres per second(m/s)->Inches per hour (in/h) "<<endl;
					cout<<"6. Metres per second(m/s)->Feet per second (ft/s) "<<endl;
					cout<<"7. Metres per second(m/s)->Feet per hour (ft/h) "<<endl;
					cout<<"8. Metres per second(m/s)->Miles per second (mi/s) "<<endl;
					cout<<"9. Metres per second(m/s)->Miles per hour (mi/h) "<<endl;
					cout<<"10. Metres per second(m/s)->Knots (kn) "<<endl;
					cin>>out6;
					cout<<"Enter value in Metres per second(m/s) : "<<endl;
					cin>>input7;
					switch(out6){
						case 1:
							result=input7*3600;
							cout<<input7<<" Metres per second(m/s) = "<<result<<" Metres per hour(m/hr)"<<endl;
							break;
						case 2:
							result=input7*0.001;
							cout<<input7<<" Metres per second(m/s) = "<<result<<" Kilometres per second (km/s)"<<endl;
							break;
						case 3:
							result=input7*3.6;
							cout<<input7<<" Metres per second(m/s) = "<<result<<" Kilometres per hour (km/h)"<<endl;
							break;
						case 4:
							result=input7*39.3700787402;
							cout<<input7<<" Metres per second(m/s) = "<<result<<" Inches per second (in/s)"<<endl;
							break;
						case 5:
							result=input7*141732.28346457;
							cout<<input7<<" Metres per second(m/s) = "<<result<<" Inches per hour (in/h)"<<endl;
							break;
						case 6:
							result=input7*3.2808339895;
							cout<<input7<<" Metres per second(m/s) = "<<result<<" Feet per second (ft/s)"<<endl;
							break;
						case 7:
							result=input7*11811.023622047;
							cout<<input7<<" Metres per second(m/s) = "<<result<<" Feet per hour (ft/h)"<<endl;
							break;
						case 8:
							result=input7*0.0006213712;
							cout<<input7<<" Metres per second(m/s) = "<<result<<" Miles per second (mi/s)"<<endl;
							break;
						case 9:
							result=input7*2.2369362921;
							cout<<input7<<" Metres per second(m/s) = "<<result<<" Miles per hour (mi/h)"<<endl;
							break;
						case 10:
							result=input7*1.9438444924;
							cout<<input7<<" Metres per second(m/s) = "<<result<<" Knots (kn)"<<endl;
							break;
					}
					break;
				case 2:
					cout<<"Enter your choice: "<<endl;
					cout<<"1. Metres per hour(m/hr)->Metres per second(m/s) "<<endl;
					cout<<"2. Metres per hour(m/hr)->Kilometres per second (km/s) "<<endl;
					cout<<"3. Metres per hour(m/hr)->Kilometres per hour (km/h) "<<endl;
					cout<<"4. Metres per hour(m/hr)->Inches per second (in/s) "<<endl;
					cout<<"5. Metres per hour(m/hr)->Inches per hour (in/h) "<<endl;
					cout<<"6. Metres per hour(m/hr)->Feet per second (ft/s) "<<endl;
					cout<<"7. Metres per hour(m/hr)->Feet per hour (ft/h) "<<endl;
					cout<<"8. Metres per hour(m/hr)->Miles per second (mi/s) "<<endl;
					cout<<"9. Metres per hour(m/hr)->Miles per hour (mi/h) "<<endl;
					cout<<"10. Metres per hour(m/hr)->Knots (kn) "<<endl;
					cin>>out6;
					cout<<"Enter value in Metres per hour(m/hr) : "<<endl;
					cin>>input7;
					switch(out6){
						case 1:
							result=input7*0.00138888889/5;
							cout<<input7<<" Metres per hour(m/hr) = "<<result<<" Metres per second(m/s)"<<endl;
							break;
						case 2:
							result=input7*0.0000013889/5;
							cout<<input7<<" Metres per hour(m/hr) = "<<result<<" Kilometres per second (km/s)"<<endl;
							break;
						case 3:
							result=input7*0.001;
							cout<<input7<<" Metres per hour(m/hr) = "<<result<<" Kilometres per hour (km/h)"<<endl;
							break;
						case 4:
							result=input7*0.0546806649/5;
							cout<<input7<<" Metres per hour(m/hr) = "<<result<<" Inches per second (in/s)"<<endl;
							break;
						case 5:
							result=input7*196.8503937008/5;
							cout<<input7<<" Metres per hour(m/hr) = "<<result<<" Inches per hour (in/h)"<<endl;
							break;
						case 6:
							result=input7*0.0045567221/5;
							cout<<input7<<" Metres per hour(m/hr) = "<<result<<" Feet per second (ft/s)"<<endl;
							break;
						case 7:
							result=input7*16.4041994751/5;
							cout<<input7<<" Metres per hour(m/hr) = "<<result<<" Feet per hour (ft/h)"<<endl;
							break;
						case 8:
							result=input7*8.63015545E-7/5;
							cout<<input7<<" Metres per hour(m/hr) = "<<result<<" Miles per second (mi/s)"<<endl;
							break;
						case 9:
							result=input7*0.003106856/5;
							cout<<input7<<" Metres per hour(m/hr) = "<<result<<" Miles per hour (mi/h)"<<endl;
							break;
						case 10:
							result=input7*0.002699784/5;
							cout<<input7<<" Metres per hour(m/hr) = "<<result<<" Knots (kn)"<<endl;
							break;
					}
					break;
				case 3:
					cout<<"Enter your choice: "<<endl;
					cout<<"1. Kilometres per second (km/s)->Metres per second(m/s) "<<endl;
					cout<<"2. Kilometres per second (km/s)->Metres per hour(m/hr) "<<endl;
					cout<<"3. Kilometres per second (km/s)->Kilometres per hour (km/h) "<<endl;
					cout<<"4. Kilometres per second (km/s)->Inches per second (in/s) "<<endl;
					cout<<"5. Kilometres per second (km/s)->Inches per hour (in/h) "<<endl;
					cout<<"6. Kilometres per second (km/s)->Feet per second (ft/s) "<<endl;
					cout<<"7. Kilometres per second (km/s)->Feet per hour (ft/h) "<<endl;
					cout<<"8. Kilometres per second (km/s)->Miles per second (mi/s) "<<endl;
					cout<<"9. Kilometres per second (km/s)->Miles per hour (mi/h) "<<endl;
					cout<<"10. Kilometres per second (km/s)->Knots (kn) "<<endl;
					cin>>out6;
					cout<<"Enter value in Kilometres per second (km/s) : "<<endl;
					cin>>input7;
					switch(out6){
						case 1:
							result=input7*1000;
							cout<<input7<<" Kilometres per second (km/s) = "<<result<<" Metres per second(m/s)"<<endl;
							break;
						case 2:
							result=input7*3600000;
							cout<<input7<<"Kilometres per second (km/s) = "<<result<<" Metres per hour(m/hr)"<<endl;
							break;
						case 3:
							result=input7*3600;
							cout<<input7<<" Kilometres per second (km/s) = "<<result<<" Kilometres per hour (km/h)"<<endl;
							break;
						case 4:
							result=input7*39370.078740157;
							cout<<input7<<" Kilometres per second (km/s) = "<<result<<" Inches per second (in/s)"<<endl;
							break;
						case 5:
							result=input7*141732283.46457;
							cout<<input7<<" Kilometres per second (km/s) = "<<result<<" Inches per hour (in/h)"<<endl;
							break;
						case 6:
							result=input7*3280.8398950131;
							cout<<input7<<" Kilometres per second (km/s) = "<<result<<" Feet per second (ft/s)"<<endl;
							break;
						case 7:
							result=input7*11811023.622047;
							cout<<input7<<"Kilometres per second (km/s) = "<<result<<" Feet per hour (ft/h)"<<endl;
							break;
						case 8:
							result=input7*0.6213711922;
							cout<<input7<<" Kilometres per second (km/s) = "<<result<<" Miles per second (mi/s)"<<endl;
							break;
						case 9:
							result=input7*2236.9362920544;
							cout<<input7<<" Kilometres per second (km/s) = "<<result<<" Miles per hour (mi/h)"<<endl;
							break;
						case 10:
							result=input7*1943.8444924406;
							cout<<input7<<" Kilometres per second (km/s) = "<<result<<" Knots (kn)"<<endl;
							break;
					}
					break;
				case 4:
					cout<<"Enter your choice: "<<endl;
					cout<<"1. Kilometres per hour (km/h)->Metres per second(m/s) "<<endl;
					cout<<"2. Kilometres per hour (km/h)->Metres per hour(m/hr) "<<endl;
					cout<<"3. Kilometres per hour (km/h)->Kilometres per second(Km/s) "<<endl;
					cout<<"4. Kilometres per hour (km/h)->Inches per second (in/s) "<<endl;
					cout<<"5. Kilometres per hour (km/h)->Inches per hour (in/h) "<<endl;
					cout<<"6. Kilometres per hour (km/h)->Feet per second (ft/s) "<<endl;
					cout<<"7. Kilometres per hour (km/h)->Feet per hour (ft/h) "<<endl;
					cout<<"8. Kilometres per hour (km/h)->Miles per second (mi/s) "<<endl;
					cout<<"9. Kilometres per hour (km/h)->Miles per hour (mi/h) "<<endl;
					cout<<"10. Kilometres per hour (km/h)->Knots (kn) "<<endl;
					cin>>out6;
					cout<<"Enter value in Kilometres per hour (km/h) : "<<endl;
					cin>>input7;
					switch(out6){
						case 1:
							result=input7*0.27777777778;
							cout<<input7<<" Kilometres per hour (km/h) = "<<result<<" Metres per second (m/s)"<<endl;
							break;
						case 2:
							result=input7*1000;
							cout<<input7<<"Kilometres per hour (km/h) = "<<result<<" Metres per hour (m/hr)"<<endl;
							break;
						case 3:
							result=input7*0.0002777778;
							cout<<input7<<" Kilometres per hour (km/h) = "<<result<<" Kilometres per second (Km/s)"<<endl;
							break;
						case 4:
							result=input7*10.9361329834;
							cout<<input7<<" Kilometres per hour (km/h) = "<<result<<" Inches per second (in/s)"<<endl;
							break;
						case 5:
							result=input7*39370.078740157;
							cout<<input7<<" Kilometres per hour (km/h) = "<<result<<" Inches per hour (in/h)"<<endl;
							break;
						case 6:
							result=input7*0.9113444153;
							cout<<input7<<" Kilometres per hour (km/h) = "<<result<<" Feet per second (ft/s)"<<endl;
							break;
						case 7:
							result=input7*3280.8398950131;
							cout<<input7<<"Kilometres per hour (km/h) = "<<result<<" Feet per hour (ft/h)"<<endl;
							break;
						case 8:
							result=input7*0.0001726031;
							cout<<input7<<" Kilometres per hour (km/h) = "<<result<<" Miles per second (mi/s)"<<endl;
							break;
						case 9:
							result=input7*0.6213711922;
							cout<<input7<<" Kilometres per hour (km/h) = "<<result<<" Miles per hour (mi/h)"<<endl;
							break;
						case 10:
							result=input7*0.5399568035;
							cout<<input7<<" Kilometres per hour (km/h) = "<<result<<" Knots (kn)"<<endl;
							break;
					}
					break;
				case 5:
					cout<<"Enter your choice: "<<endl;
					cout<<"1. Inches per second (in/s)->Metres per second(m/s) "<<endl;
					cout<<"2. Inches per second (in/s)->Metres per hour(m/hr) "<<endl;
					cout<<"3. Inches per second (in/s)->Kilometres per second(Km/s) "<<endl;
					cout<<"4. Inches per second (in/s)->Kilometres per hour (km/h) "<<endl;
					cout<<"5. Inches per second (in/s)->Inches per hour (in/h) "<<endl;
					cout<<"6. Inches per second (in/s)->Feet per second (ft/s) "<<endl;
					cout<<"7. Inches per second (in/s)->Feet per hour (ft/h) "<<endl;
					cout<<"8. Inches per second (in/s)->Miles per second (mi/s) "<<endl;
					cout<<"9. Inches per second (in/s)->Miles per hour (mi/h) "<<endl;
					cout<<"10. Inches per second (in/s)->Knots (kn) "<<endl;
					cin>>out6;
					cout<<"Enter value in Inches per second (in/s) : "<<endl;
					cin>>input7;
					switch(out6){
						case 1:
							result=input7*0.0254;
							cout<<input7<<" Inches per second (in/s) = "<<result<<" Metres per second (m/s)"<<endl;
							break;
						case 2:
							result=input7*91.44;
							cout<<input7<<" Inches per second (in/s) = "<<result<<" Metres per hour (m/hr)"<<endl;
							break;
						case 3:
							result=input7*0.0000254;
							cout<<input7<<" Inches per second (in/s) = "<<result<<" Kilometres per second (Km/s)"<<endl;
							break;
						case 4:
							result=input7*0.09144;
							cout<<input7<<" Inches per second (in/s) = "<<result<<" Kilometres per hour (km/h)"<<endl;
							break;
						case 5:
							result=input7*3600;
							cout<<input7<<" Inches per second (in/s) = "<<result<<" Inches per hour (in/h)"<<endl;
							break;
						case 6:
							result=input7*0.08333333;
							cout<<input7<<" Inches per second (in/s) = "<<result<<" Feet per second (ft/s)"<<endl;
							break;
						case 7:
							result=input7*300;
							cout<<input7<<" Inches per second (in/s) = "<<result<<" Feet per hour (ft/h)"<<endl;
							break;
						case 8:
							result=input7*0.0000157828;
							cout<<input7<<" Inches per second (in/s) = "<<result<<" Miles per second (mi/s)"<<endl;
							break;
						case 9:
							result=input7*0.0568181818;
							cout<<input7<<" Inches per second (in/s) = "<<result<<" Miles per hour (mi/h)"<<endl;
							break;
						case 10:
							result=input7*0.0493736501;
							cout<<input7<<" Inches per second (in/s) = "<<result<<" Knots (kn)"<<endl;
							break;
					}
					break;
				case 6:
					cout<<"Enter your choice: "<<endl;
					cout<<"1. Inches per hour (in/h)->Metres per second(m/s) "<<endl;
					cout<<"2. Inches per hour (in/h)->Metres per hour(m/hr) "<<endl;
					cout<<"3. Inches per hour (in/h)->Kilometres per second(Km/s) "<<endl;
					cout<<"4. Inches per hour (in/h)->Kilometres per hour (km/h) "<<endl;
					cout<<"5. Inches per hour (in/h)->Inches per second (in/s) "<<endl;
					cout<<"6. Inches per hour (in/h)->Feet per second (ft/s) "<<endl;
					cout<<"7. Inches per hour (in/h)->Feet per hour (ft/h) "<<endl;
					cout<<"8. Inches per hour (in/h)->Miles per second (mi/s) "<<endl;
					cout<<"9. Inches per hour (in/h)->Miles per hour (mi/h) "<<endl;
					cout<<"10. Inches per hour (in/h)->Knots (kn) "<<endl;
					cin>>out6;
					cout<<"Enter value in Inches per hour (in/h) : "<<endl;
					cin>>input7;
					switch(out6){
						case 1:
							result=input7*0.0000070556;
							cout<<input7<<" Inches per hour (in/h) = "<<result<<" Metres per second (m/s)"<<endl;
							break;
						case 2:
							result=input7*0.0254;
							cout<<input7<<" Inches per hour (in/h) = "<<result<<" Metres per hour (m/hr)"<<endl;
							break;
						case 3:
							result=input7*7.05555556E-9;
							cout<<input7<<" Inches per hour (in/h) = "<<result<<" Kilometres per second (Km/s)"<<endl;
							break;
						case 4:
							result=input7*0.0000254;
							cout<<input7<<" Inches per hour (in/h) = "<<result<<" Kilometres per hour (km/h)"<<endl;
							break;
						case 5:
							result=input7*0.0002777778;
							cout<<input7<<" Inches per hour (in/h) = "<<result<<" Inches per second (in/s)"<<endl;
							break;
						case 6:
							result=input7*0.0000231481;
							cout<<input7<<" Inches per hour (in/h) = "<<result<<" Feet per second (ft/s)"<<endl;
							break;
						case 7:
							result=input7*0.083333333;
							cout<<input7<<" Inches per hour (in/h) = "<<result<<" Feet per hour (ft/h)"<<endl;
							break;
						case 8:
							result=input7*4.38411897E-9;
							cout<<input7<<" Inches per hour (in/h) = "<<result<<" Miles per second (mi/s)"<<endl;
							break;
						case 9:
							result=input7*0.0000157828;
							cout<<input7<<" Inches per hour (in/h) = "<<result<<" Miles per hour (mi/h)"<<endl;
							break;
						case 10:
							result=input7*0.0000137149;
							cout<<input7<<" Inches per hour (in/h) = "<<result<<" Knots (kn)"<<endl;
							break;
					}
					break;
				case 7:
					cout<<"Enter your choice: "<<endl;
					cout<<"1. Feet per second (ft/s)->Metres per second(m/s) "<<endl;
					cout<<"2. Feet per second (ft/s)->Metres per hour(m/hr) "<<endl;
					cout<<"3. Feet per second (ft/s)->Kilometres per second(Km/s) "<<endl;
					cout<<"4. Feet per second (ft/s)->Kilometres per hour (km/h) "<<endl;
					cout<<"5. Feet per second (ft/s)->Inches per second (in/s) "<<endl;
					cout<<"6. Feet per second (ft/s)->Inches per hour (in/h) "<<endl;
					cout<<"7. Feet per second (ft/s)->Feet per hour (ft/h) "<<endl;
					cout<<"8. Feet per second (ft/s)->Miles per second (mi/s) "<<endl;
					cout<<"9. Feet per second (ft/s)->Miles per hour (mi/h) "<<endl;
					cout<<"10. Feet per second (ft/s)->Knots (kn) "<<endl;
					cin>>out6;
					cout<<"Enter value in Feet per second (ft/s) : "<<endl;
					cin>>input7;
					switch(out6){
						case 1:
							result=input7*0.3048;
							cout<<input7<<" Feet per second (ft/s) = "<<result<<" Metres per second (m/s)"<<endl;
							break;
						case 2:
							result=input7*1097.28;
							cout<<input7<<" Feet per second (ft/s) = "<<result<<" Metres per hour (m/hr)"<<endl;
							break;
						case 3:
							result=input7*0.0003048;
							cout<<input7<<" Feet per second (ft/s) = "<<result<<" Kilometres per second (Km/s)"<<endl;
							break;
						case 4:
							result=input7*1.09728;
							cout<<input7<<" Feet per second (ft/s) = "<<result<<" Kilometres per hour (km/h)"<<endl;
							break;
						case 5:
							result=input7*12;
							cout<<input7<<" Feet per second (ft/s) = "<<result<<" Inches per second (in/s)"<<endl;
							break;
						case 6:
							result=input7*43200;
							cout<<input7<<" Feet per second (ft/s) = "<<result<<" Inches per hour (in/h)"<<endl;
							break;
						case 7:
							result=input7*3600;
							cout<<input7<<" Feet per second (ft/s) = "<<result<<" Feet per hour (ft/h)"<<endl;
							break;
						case 8:
							result=input7*0.0001893939;
							cout<<input7<<" Feet per second (ft/s) = "<<result<<" Miles per second (mi/s)"<<endl;
							break;
						case 9:
							result=input7*0.6818181818;
							cout<<input7<<" Feet per second (ft/s) = "<<result<<" Miles per hour (mi/h)"<<endl;
							break;
						case 10:
							result=input7*0.5924838013;
							cout<<input7<<" Feet per second (ft/s) = "<<result<<" Knots (kn)"<<endl;
							break;
					}
					break;
				case 8:
					cout<<"Enter your choice: "<<endl;
					cout<<"1. Feet per hour (ft/h)->Metres per second(m/s) "<<endl;
					cout<<"2. Feet per hour (ft/h)->Metres per hour(m/hr) "<<endl;
					cout<<"3. Feet per hour (ft/h)->Kilometres per second(Km/s) "<<endl;
					cout<<"4. Feet per hour (ft/h)->Kilometres per hour (km/h) "<<endl;
					cout<<"5. Feet per hour (ft/h)->Inches per second (in/s) "<<endl;
					cout<<"6. Feet per hour (ft/h)->Inches per hour (in/h) "<<endl;
					cout<<"7. Feet per hour (ft/h)->Feet per second (ft/s) "<<endl;
					cout<<"8. Feet per hour (ft/h)->Miles per second (mi/s) "<<endl;
					cout<<"9. Feet per hour (ft/h)->Miles per hour (mi/h) "<<endl;
					cout<<"10. Feet per hour (ft/h)->Knots (kn) "<<endl;
					cin>>out6;
					cout<<"Enter value in Feet per hour (ft/h) : "<<endl;
					cin>>input7;
					switch(out6){
						case 1:
							result=input7*0.0000846667;
							cout<<input7<<" Feet per hour (ft/h) = "<<result<<" Metres per second (m/s)"<<endl;
							break;
						case 2:
							result=input7*0.3048;
							cout<<input7<<" Feet per hour (ft/h) = "<<result<<" Metres per hour (m/hr)"<<endl;
							break;
						case 3:
							result=input7*8.46666667E-8;
							cout<<input7<<" Feet per hour (ft/h) = "<<result<<" Kilometres per second (Km/s)"<<endl;
							break;
						case 4:
							result=input7*0.0003048;
							cout<<input7<<" Feet per hour (ft/h) = "<<result<<" Kilometres per hour (km/h)"<<endl;
							break;
						case 5:
							result=input7*0.003333333;
							cout<<input7<<" Feet per hour (ft/h) = "<<result<<" Inches per second (in/s)"<<endl;
							break;
						case 6:
							result=input7*12;
							cout<<input7<<" Feet per hour (ft/h) = "<<result<<" Inches per hour (in/h)"<<endl;
							break;
						case 7:
							result=input7*0.0002777778;
							cout<<input7<<" Feet per hour (ft/h) = "<<result<<" Feet per second (ft/s)"<<endl;
							break;
						case 8:
							result=input7*5.26094276E-8;
							cout<<input7<<" Feet per hour (ft/h) = "<<result<<" Miles per second (mi/s)"<<endl;
							break;
						case 9:
							result=input7*0.001893939;
							cout<<input7<<" Feet per hour (ft/h) = "<<result<<" Miles per hour (mi/h)"<<endl;
							break;
						case 10:
							result=input7*0.0001645788;
							cout<<input7<<" Feet per hour (ft/h) = "<<result<<" Knots (kn)"<<endl;
							break;
					}
					break;
				case 9:
					cout<<"Enter your choice: "<<endl;
					cout<<"1. Miles per second (mi/s)->Metres per second(m/s) "<<endl;
					cout<<"2. Miles per second (mi/s)->Metres per hour(m/hr) "<<endl;
					cout<<"3. Miles per second (mi/s)->Kilometres per second(Km/s) "<<endl;
					cout<<"4. Miles per second (mi/s)->Kilometres per hour (km/h) "<<endl;
					cout<<"5. Miles per second (mi/s)->Inches per second (in/s) "<<endl;
					cout<<"6. Miles per second (mi/s)->Inches per hour (in/h) "<<endl;
					cout<<"7. Miles per second (mi/s)->Feet per second (ft/s) "<<endl;
					cout<<"8. Miles per second (mi/s)->Feet per hour (ft/h) "<<endl;
					cout<<"9. Miles per second (mi/s)->Miles per hour (mi/h) "<<endl;
					cout<<"10. Miles per second (mi/s)->Knots (kn) "<<endl;
					cin>>out6;
					cout<<"Enter value in Miles per second (mi/s) : "<<endl;
					cin>>input7;
					switch(out6){
						case 1:
							result=input7*1609.344;
							cout<<input7<<" Miles per second (mi/s) = "<<result<<" Metres per second (m/s)"<<endl;
							break;
						case 2:
							result=input7*5793638.4;
							cout<<input7<<" Miles per second (mi/s) = "<<result<<" Metres per hour (m/hr)"<<endl;
							break;
						case 3:
							result=input7*1.609344;
							cout<<input7<<" Miles per second (mi/s) = "<<result<<" Kilometres per second (Km/s)"<<endl;
							break;
						case 4:
							result=input7*5793.6384;
							cout<<input7<<" Miles per second (mi/s) = "<<result<<" Kilometres per hour (km/h)"<<endl;
							break;
						case 5:
							result=input7*63360;
							cout<<input7<<" Miles per second (mi/s) = "<<result<<" Inches per second (in/s)"<<endl;
							break;
						case 6:
							result=input7*228096000;
							cout<<input7<<" Miles per second (mi/s) = "<<result<<" Inches per hour (in/h)"<<endl;
							break;
						case 7:
							result=input7*5280;
							cout<<input7<<" Miles per second (mi/s) = "<<result<<" Feet per second (ft/s)"<<endl;
							break;
						case 8:
							result=input7*19008000;
							cout<<input7<<" Miles per second (mi/s) = "<<result<<" Feet per hour (ft/h)"<<endl;
							break;
						case 9:
							result=input7*3600;
							cout<<input7<<" Miles per second (mi/s) = "<<result<<" Miles per hour (mi/h)"<<endl;
							break;
						case 10:
							result=input7*3128.3144708423;
							cout<<input7<<" Miles per second (mi/s) = "<<result<<" Knots (kn)"<<endl;
							break;
					}
					break;
				case 10:
					cout<<"Enter your choice: "<<endl;
					cout<<"1. Miles per hour (mi/h)->Metres per second(m/s) "<<endl;
					cout<<"2. Miles per hour (mi/h)->Metres per hour(m/hr) "<<endl;
					cout<<"3. Miles per hour (mi/h)->Kilometres per second(Km/s) "<<endl;
					cout<<"4. Miles per hour (mi/h)->Kilometres per hour (km/h) "<<endl;
					cout<<"5. Miles per hour (mi/h)->Inches per second (in/s) "<<endl;
					cout<<"6. Miles per hour (mi/h)->Inches per hour (in/h) "<<endl;
					cout<<"7. Miles per hour (mi/h)->Feet per second (ft/s) "<<endl;
					cout<<"8. Miles per hour (mi/h)->Feet per hour (ft/h) "<<endl;
					cout<<"9. Miles per hour (mi/h)->Miles per second (mi/s) "<<endl;
					cout<<"10. Miles per hour (mi/h)->Knots (kn) "<<endl;
					cin>>out6;
					cout<<"Enter value in Miles per hour (mi/h) : "<<endl;
					cin>>input7;
					switch(out6){
						case 1:
							result=input7*0.44704;
							cout<<input7<<" Miles per hour (mi/h) = "<<result<<" Metres per second (m/s)"<<endl;
							break;
						case 2:
							result=input7*1609.344;
							cout<<input7<<" Miles per hour (mi/h) = "<<result<<" Metres per hour (m/hr)"<<endl;
							break;
						case 3:
							result=input7*0.00044704;
							cout<<input7<<" Miles per hour (mi/h) = "<<result<<" Kilometres per second (Km/s)"<<endl;
							break;
						case 4:
							result=input7*1.609344;
							cout<<input7<<" Miles per hour (mi/h) = "<<result<<" Kilometres per hour (km/h)"<<endl;
							break;
						case 5:
							result=input7*17.6;
							cout<<input7<<" Miles per hour (mi/h) = "<<result<<" Inches per second (in/s)"<<endl;
							break;
						case 6:
							result=input7*63360;
							cout<<input7<<" Miles per hour (mi/h) = "<<result<<" Inches per hour (in/h)"<<endl;
							break;
						case 7:
							result=input7*1.466666667;
							cout<<input7<<" Miles per hour (mi/h) = "<<result<<" Feet per second (ft/s)"<<endl;
							break;
						case 8:
							result=input7*5280;
							cout<<input7<<" Miles per hour (mi/h) = "<<result<<" Feet per hour (ft/h)"<<endl;
							break;
						case 9:
							result=input7*0.0002777778;
							cout<<input7<<" Miles per hour (mi/h) = "<<result<<" Miles per second (mi/s)"<<endl;
							break;
						case 10:
							result=input7*0.8689762419;
							cout<<input7<<" Miles per hour (mi/h) = "<<result<<" Knots (kn)"<<endl;
							break;
					}
					break;
				case 11:
					cout<<"Enter your choice: "<<endl;
					cout<<"1. Knots (kn)->Metres per second(m/s) "<<endl;
					cout<<"2. Knots (kn)->Metres per hour(m/hr) "<<endl;
					cout<<"3. Knots (kn)->Kilometres per second(Km/s) "<<endl;
					cout<<"4. Knots (kn)->Kilometres per hour (km/h) "<<endl;
					cout<<"5. Knots (kn)->Inches per second (in/s) "<<endl;
					cout<<"6. Knots (kn)->Inches per hour (in/h) "<<endl;
					cout<<"7. Knots (kn)->Feet per second (ft/s) "<<endl;
					cout<<"8. Knots (kn)->Feet per hour (ft/h) "<<endl;
					cout<<"9. Knots (kn)->Miles per second (mi/s) "<<endl;
					cout<<"10. Knots (kn)->Miles per hour (mi/h) "<<endl;
					cin>>out6;
					cout<<"Enter value in Knots (kn) : "<<endl;
					cin>>input7;
					switch(out6){
						case 1:
							result=input7*0.44704;
							cout<<input7<<" Knots (kn) = "<<result<<" Metres per second (m/s)"<<endl;
							break;
						case 2:
							result=input7*1609.344;
							cout<<input7<<" Knots (kn) = "<<result<<" Metres per hour (m/hr)"<<endl;
							break;
						case 3:
							result=input7*0.00044704;
							cout<<input7<<" Knots (kn) = "<<result<<" Kilometres per second (Km/s)"<<endl;
							break;
						case 4:
							result=input7*1.609344;
							cout<<input7<<" Knots (kn) = "<<result<<" Kilometres per hour (km/h)"<<endl;
							break;
						case 5:
							result=input7*17.6;
							cout<<input7<<" Knots (kn) = "<<result<<" Inches per second (in/s)"<<endl;
							break;
						case 6:
							result=input7*63360;
							cout<<input7<<" Knots (kn) = "<<result<<" Inches per hour (in/h)"<<endl;
							break;
						case 7:
							result=input7*1.466666667;
							cout<<input7<<" Knots (kn) = "<<result<<" Feet per second (ft/s)"<<endl;
							break;
						case 8:
							result=input7*5280;
							cout<<input7<<" Knots (kn) = "<<result<<" Feet per hour (ft/h)"<<endl;
							break;
						case 9:
							result=input7*0.0002777778;
							cout<<input7<<" Knots (kn) = "<<result<<" Miles per second (mi/s)"<<endl;
							break;
						case 10:
							result=input7*0.8689762419;
							cout<<input7<<" Knots (kn) = "<<result<<" Miles per hour (mi/h)"<<endl;
							break;
					}
					break;
					default:
					cout<<"Invalid choice "<<endl;
					break;
			}
			break;
			////TIME
			////TIME
			////TIME
			////TIME
		case 8:
		int input_time;
			cout<<"1. Milliseconds(ms) "<<endl;
			cout<<"2. Second(s)"<<endl;
			cout<<"3. Minutes(min) "<<endl;
			cout<<"4. Hours(h) "<<endl;
			cout<<"5. Days(d) "<<endl;
			cout<<"6. Weeks(wk) "<<endl;
			cout<<"Choose the input unit: "<<endl;
			cin>>input_time;
			int out7;
			long double input8;
			switch(input_time){
				case 1:
					cout<<"Enter your choice: "<<endl;
					cout<<"1. Milliseconds->Second "<<endl;
					cout<<"2. Milliseconds->Minutes "<<endl;
					cout<<"3. Milliseconds->Hours "<<endl;
					cout<<"4. Milliseconds->Days "<<endl;
					cout<<"5. Milliseconds->Weeks "<<endl;
					cin>>out7;
					cout<<"Enter value in Milliseconds : "<<endl;
					cin>>input8;
					switch(out7){
						case 1:
							result=input8*0.001;
							cout<<input8<<" Milliseconds = "<<result<<" Second"<<endl;
							break;
						case 2:
							result=input8*0.0000166667;
							cout<<input8<<" Milliseconds = "<<result<<" Minutes"<<endl;
							break;
						case 3:
							result=input8*2.77777778E-7;
							cout<<input8<<" Milliseconds = "<<result<<" Hours"<<endl;
							break;
						case 4:
							result=input8*1.15740741E-8;
							cout<<input8<<" Milliseconds = "<<result<<" Days"<<endl;
							break;
						case 5:
							result=input8*1.65343915E-9;
							cout<<input8<<" Milliseconds = "<<result<<" Weeks"<<endl;
							break;
					}
					break;	
				case 2:
					cout<<"Enter your choice: "<<endl;
					cout<<"1. Second->Milliseconds "<<endl;
					cout<<"2. Second->Minutes "<<endl;
					cout<<"3. Second->Hours "<<endl;
					cout<<"4. Second->Days "<<endl;
					cout<<"5. Second->Weeks "<<endl;
					cin>>out7;
					cout<<"Enter value in Second : "<<endl;
					cin>>input8;
					switch(out7){
						case 1:
							result=input8*1000;
							cout<<input8<<" Second = "<<result<<" Milliseconds"<<endl;
							break;
						case 2:
							result=input8*0.0166667;
							cout<<input8<<" Second = "<<result<<" Minutes"<<endl;
							break;
						case 3:
							result=input8*0.0002777778;
							cout<<input8<<" Second = "<<result<<" Hours"<<endl;
							break;
						case 4:
							result=input8*0.0000115741;
							cout<<input8<<" Second = "<<result<<" Days"<<endl;
							break;
						case 5:
							result=input8*0.0000016534;
							cout<<input8<<" Second = "<<result<<" Weeks"<<endl;
							break;
					}
					break;
				case 3:
					cout<<"Enter your choice: "<<endl;
					cout<<"1. Minutes->Milliseconds "<<endl;
					cout<<"2. Minutes->Second "<<endl;
					cout<<"3. Minutes->Hours "<<endl;
					cout<<"4. Minutes->Days "<<endl;
					cout<<"5. Minutes->Weeks "<<endl;
					cin>>out7;
					cout<<"Enter value in Minutes : "<<endl;
					cin>>input8;
					switch(out7){
						case 1:
							result=input8*60000;
							cout<<input8<<" Minutes = "<<result<<" Milliseconds"<<endl;
							break;
						case 2:
							result=input8*60;
							cout<<input8<<" Minutes = "<<result<<" Second"<<endl;
							break;
						case 3:
							result=input8*0.0166666667;
							cout<<input8<<" Minutes = "<<result<<" Hours"<<endl;
							break;
						case 4:
							result=input8*0.0006944444;
							cout<<input8<<" Minutes = "<<result<<" Days"<<endl;
							break;
						case 5:
							result=input8*0.0000992063;
							cout<<input8<<" Minutes = "<<result<<" Weeks"<<endl;
							break;
					}
					break;
				case 4:
					cout<<"Enter your choice: "<<endl;
					cout<<"1. Hours->Milliseconds "<<endl;
					cout<<"2. Hours->Second "<<endl;
					cout<<"3. Hours->Minutes "<<endl;
					cout<<"4. Hours->Days "<<endl;
					cout<<"5. Hours->Weeks "<<endl;
					cin>>out7;
					cout<<"Enter value in Hours : "<<endl;
					cin>>input8;
					switch(out7){
						case 1:
							result=input8*3600000;
							cout<<input8<<" Hours = "<<result<<" Milliseconds"<<endl;
							break;
						case 2:
							result=input8*3600;
							cout<<input8<<" Hours = "<<result<<" Second"<<endl;
							break;
						case 3:
							result=input8*60;
							cout<<input8<<" Hours = "<<result<<" Minutes"<<endl;
							break;
						case 4:
							result=input8*0.0416666667;
							cout<<input8<<" Hours = "<<result<<" Days"<<endl;
							break;
						case 5:
							result=input8*0.005952381;
							cout<<input8<<" Hours = "<<result<<" Weeks"<<endl;
							break;
					}
					break;
				case 5:
					cout<<"Enter your choice: "<<endl;
					cout<<"1. Days->Milliseconds "<<endl;
					cout<<"2. Days->Second "<<endl;
					cout<<"3. Days->Minutes "<<endl;
					cout<<"4. Days->Hours "<<endl;
					cout<<"5. Days->Weeks "<<endl;
					cin>>out7;
					cout<<"Enter value in Days : "<<endl;
					cin>>input8;
					switch(out7){
						case 1:
							result=input8*86400000;
							cout<<input8<<" Days = "<<result<<" Milliseconds"<<endl;
							break;
						case 2:
							result=input8*86400;
							cout<<input8<<" Days = "<<result<<" Second"<<endl;
							break;
						case 3:
							result=input8*1440;
							cout<<input8<<" Days = "<<result<<" Minutes"<<endl;
							break;
						case 4:
							result=input8*24;
							cout<<input8<<" Days = "<<result<<" Hours"<<endl;
							break;
						case 5:
							result=input8*0.1428571429;
							cout<<input8<<" Days = "<<result<<" Weeks"<<endl;
							break;
					}
					break;
				case 6:
					cout<<"Enter your choice: "<<endl;
					cout<<"1. Weeks->Milliseconds "<<endl;
					cout<<"2. Weeks->Second "<<endl;
					cout<<"3. Weeks->Minutes "<<endl;
					cout<<"4. Weeks->Hours "<<endl;
					cout<<"5. Weeks->Days "<<endl;
					cin>>out7;
					cout<<"Enter value in Weeks : "<<endl;
					cin>>input8;
					switch(out7){
						case 1:
							result=input8*604800000;
							cout<<input8<<" Weeks = "<<result<<" Milliseconds"<<endl;
							break;
						case 2:
							result=input8*604800;
							cout<<input8<<" Weeks = "<<result<<" Second"<<endl;
							break;
						case 3:
							result=input8*10080;
							cout<<input8<<" Weeks = "<<result<<" Minutes"<<endl;
							break;
						case 4:
							result=input8*168;
							cout<<input8<<" Weeks = "<<result<<" Hours"<<endl;
							break;
						case 5:
							result=input8*7;
							cout<<input8<<" Weeks = "<<result<<" Days"<<endl;
							break;
					}
					break;
				default:
					cout<<"Invalid choice "<<endl;
					break;
			}
			break;
			default:
					cout<<"Invalid choice "<<endl;
					break;
}
return 0;
}
	


