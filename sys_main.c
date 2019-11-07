/

/*
 *     *pref:      First code to learn how can i use ADC module With HERCULES launchpad based RM42L432 "TASK ADC"
 *     *Auther:    MAHMOUD AHMED ABD_elghany
 *     *Date:      7-11-2019
 *     *file name: ADC 2
 *
 */




   #include "sys_common.h"
   #include "adc.h"

   adcData_t adc_data;
   adcData_t *adc_data_ptr = &adc_data;

   unsigned int reading ;







    int main(void)
   {
        adcInit();
        while(1){

             adcStartConversion(adcREG1 , 1U);
             while( !adcIsConversionComplete(adcREG1, 1U));
             adcGetData(adcREG1, 1U , adc_data_ptr);
             reading = adc_data_ptr->value ;
        }




    return 0;
   }






/* USER CODE BEGIN (4) */
/* USER CODE END */
