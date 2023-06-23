#pragma once
#include "Struct_IP.h"
#include "IP_adress.h"


class Net_mask
{
	Struct_IP _Struct_IP_net_mask;

public:
	Net_mask(Struct_IP Struct_IP_net_mask) : _Struct_IP_net_mask(Struct_IP_net_mask) {}
	
	
	bool is_valid_net_mask(const IP_adress& IP_adress_obj)
	{

	}

	size_t Get_Nodes_Quantity(const Net_mask& Net_mask_obj)
	{
		size_t result = 0;

		result += ~_Struct_IP_net_mask.octet_1;
	}

	void Set_adress(Struct_IP Struct_IP_net_mask) { _Struct_IP_net_mask = Struct_IP_net_mask; }

	friend std::istream& operator >> (std::istream& in, const Net_mask& Net_mask_obj)
	{

	}


};

