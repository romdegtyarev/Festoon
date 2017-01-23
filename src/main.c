#include "main.h"

 //Varible for delay (ms)
 //Перменная для задержки, изначально при создании зануляем, что бы не было в ней ничего лишнего
 uint16_t delay = 0;
 //Прототип функции мигания
 void my_flashing ( void );
 //Функция системного таймера, каждый такт процессора уменьшает значение задержки на 1
 void SysTick_Handler( void ) {
	 if (delay > 0) {
		 delay--;
	 }
 }
 
 //Delay function (ms)
 //Функция задержки, микроконтроллер ничего не делает пока переменная delay не равна 0
 void delay_ms( uint16_t ms ) {
	 delay = ms;
	 while ( delay ) {
	 }
 }
 
 int main( void ) {

	 //Varible Diods
	 //Перменная(структура) диодов
	 GPIO_InitTypeDef Diods;
	 //Resolution clocked port C
	 //Включаем тактирование порта С, проще разрешаем подачу на него тока
	 RCC_APB2PeriphClockCmd( RCC_APB2Periph_GPIOC, ENABLE );
	 //Включаем системный таймер
	 SysTick_Config( SystemCoreClock/1000 );
	//Pin 8 & 9 initialization	
	 Diods.GPIO_Pin = GPIO_Pin_0|GPIO_Pin_1 | GPIO_Pin_2 | GPIO_Pin_3 | GPIO_Pin_4 | GPIO_Pin_5 | GPIO_Pin_6 | GPIO_Pin_7;
	 //Mode
	 Diods.GPIO_Mode = GPIO_Mode_Out_PP;
	 //Speed
	 Diods.GPIO_Speed = GPIO_Speed_50MHz;
	 //Инициализируем структуру
	 GPIO_Init( GPIOC , &Diods );
	 //Вечный цикл
	 while (1) {
		 //Вызываем функцию мигания
		 my_flashing();
	 }
	 //return 0;
 }


 