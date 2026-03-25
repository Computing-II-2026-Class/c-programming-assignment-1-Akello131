/* Name: Akello Esther Okalany */
/* Student Number: 2500800023 25/U/BIO/023/GV*/

#include <stdio.h>

int main(void)
{
    float DT, F, Fuel_Efficiency; 
	//DT is Distance Travelled
	//F is Fuel used
    printf("Distance Trvaelled in km:  ");
    scanf("%f", &DT);
    
    printf("Fuel Used in Litres: ");
    scanf("%f", &F);
    
    Fuel_Efficiency = DT / F;
    printf("Fuel Efficiency : %.2fkm/litre", Fuel_Efficiency);
    
    return 0;
}
