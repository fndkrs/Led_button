#include "C:\Users\Fernando Carlos\Desktop\pic_led_button\codigo\main.h"


void main()
{

   setup_adc_ports(NO_ANALOGS);
   setup_adc(ADC_OFF);
   setup_psp(PSP_DISABLED);
   setup_spi(SPI_SS_DISABLED);
   setup_timer_0(RTCC_INTERNAL|RTCC_DIV_1);
   setup_timer_1(T1_DISABLED);
   setup_timer_2(T2_DISABLED,0,1);
   setup_comparator(NC_NC_NC_NC);
   setup_vref(FALSE);

   // my code

   while(true){
   	if(input(pin_d0)){
   		output_high(pin_b4);
   	}else{
   		output_low(pin_b4);
   	}
   }
   
   

}
