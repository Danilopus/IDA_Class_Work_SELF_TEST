#pragma once
#include <iostream>
#include "Struct_IP.h"
#include "Net_mask.h"
#include "Service functions.h"


class IP_adress
{
	Struct_IP _Struct_IP_adress;

public:

	//IP_adress(const Struct_IP& Struct_IP_adress): _Struct_IP_adress(Struct_IP_adress) { }
	IP_adress(const Struct_IP& Struct_IP_adress)	{ _Struct_IP_adress = Struct_IP_adress; }


	bool is_IP_adress_valid(const IP_adress& IP_adress_obj)
	{
		if (!IP_adress_obj._Struct_IP_adress.octet_1) return false;
		//if (!IP_adress_obj._Struct_IP_adress.octet_1 && IP_adress_obj._Struct_IP_adress.octet_1 <255) return false;		
		//if (!IP_adress_obj._Struct_IP_adress.octet_2 && IP_adress_obj._Struct_IP_adress.octet_2 < 255) return false;
		return true;
	}
	
	IP_adress* _Struct_IP_adress(const IP_adress& IP_adress_obj, const Net_mask& Net_mask_obj)
	{

	}

	//void Set_adress(Struct_IP Struct_IP_adress) { _Struct_IP_adress = Struct_IP_adress; }
	void Set_adress(Struct_IP Struct_IP_adress) { _Struct_IP_adress = Struct_IP_adress; }
	

	bool operator == (const IP_adress& IP_adress_obj)
	{
		if (_Struct_IP_adress.octet_4 == IP_adress_obj._Struct_IP_adress.octet_4)
			if (_Struct_IP_adress.octet_3 == IP_adress_obj._Struct_IP_adress.octet_3)
				if (_Struct_IP_adress.octet_2 == IP_adress_obj._Struct_IP_adress.octet_2)
					if (_Struct_IP_adress.octet_1 == IP_adress_obj._Struct_IP_adress.octet_1)
						return true;
		return false;



	}
	bool operator > (const IP_adress& IP_adress_obj)
	{
		if (*this == IP_adress_obj) return false;

		if (_Struct_IP_adress.octet_4 > IP_adress_obj._Struct_IP_adress.octet_4) return true;
		else if(_Struct_IP_adress.octet_4 < IP_adress_obj._Struct_IP_adress.octet_4) return false;

		if (_Struct_IP_adress.octet_3 > IP_adress_obj._Struct_IP_adress.octet_3) return true;
		else if (_Struct_IP_adress.octet_3 < IP_adress_obj._Struct_IP_adress.octet_3) return false;

		if (_Struct_IP_adress.octet_2 > IP_adress_obj._Struct_IP_adress.octet_2) return true;
		else if (_Struct_IP_adress.octet_2 < IP_adress_obj._Struct_IP_adress.octet_2) return false;

		if (_Struct_IP_adress.octet_1 > IP_adress_obj._Struct_IP_adress.octet_1) return true;
		else if (_Struct_IP_adress.octet_1 < IP_adress_obj._Struct_IP_adress.octet_1) return false;

		return false;
	}
	bool operator < (const IP_adress& IP_adress_obj);

	friend std::istream& operator >> (std::istream& in, IP_adress& IP_adress_obj)
	{
		//Struct_IP new_adress(Get_Int_SA(), Get_Int_SA(), Get_Int_SA(), Get_Int_SA());
		Struct_IP new_adress;
		
		std::cout << "\nEnter octet_4: ";
		new_adress.octet_4 = Get_Int_SA();
		std::cout << "\nEnter octet_3: ";
		new_adress.octet_3 = Get_Int_SA();
		std::cout << "\nEnter octet_2: ";
		new_adress.octet_2 = Get_Int_SA();
		std::cout << "\nEnter octet_1: ";
		new_adress.octet_1 = Get_Int_SA();

		IP_adress_obj.Set_adress(new_adress);

		return in;
	}



};

