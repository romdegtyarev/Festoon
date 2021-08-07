#include "my_flashing.h"


void delay_ms(uint16_t);


//My flashing function
void my_flashing(void) {
    //Записать 0 биты
    GPIO_WriteBit(GPIOC, GPIO_Pin_0, Bit_RESET);
    GPIO_WriteBit(GPIOC, GPIO_Pin_1, Bit_RESET);
    GPIO_WriteBit(GPIOC, GPIO_Pin_2, Bit_RESET);
    GPIO_WriteBit(GPIOC, GPIO_Pin_3, Bit_RESET);
    GPIO_WriteBit(GPIOC, GPIO_Pin_4, Bit_RESET);
    GPIO_WriteBit(GPIOC, GPIO_Pin_5, Bit_RESET);
    GPIO_WriteBit(GPIOC, GPIO_Pin_6, Bit_RESET);
    GPIO_WriteBit(GPIOC, GPIO_Pin_7, Bit_RESET);
    //Вызов функции задержки
    delay_ms(WAIT);

    //Записать биты
    GPIO_WriteBit(GPIOC, GPIO_Pin_0, Bit_SET);
    GPIO_WriteBit(GPIOC, GPIO_Pin_1, Bit_RESET);
    GPIO_WriteBit(GPIOC, GPIO_Pin_2, Bit_RESET);
    GPIO_WriteBit(GPIOC, GPIO_Pin_3, Bit_RESET);
    GPIO_WriteBit(GPIOC, GPIO_Pin_4, Bit_SET);
    GPIO_WriteBit(GPIOC, GPIO_Pin_5, Bit_RESET);
    GPIO_WriteBit(GPIOC, GPIO_Pin_6, Bit_RESET);
    GPIO_WriteBit(GPIOC, GPIO_Pin_7, Bit_RESET);
    //Вызов функции задержки
    delay_ms(WAIT);

    //Записать биты
    GPIO_WriteBit(GPIOC, GPIO_Pin_0, Bit_SET);
    GPIO_WriteBit(GPIOC, GPIO_Pin_1, Bit_SET);
    GPIO_WriteBit(GPIOC, GPIO_Pin_2, Bit_RESET);
    GPIO_WriteBit(GPIOC, GPIO_Pin_3, Bit_RESET);
    GPIO_WriteBit(GPIOC, GPIO_Pin_4, Bit_RESET);
    GPIO_WriteBit(GPIOC, GPIO_Pin_5, Bit_SET);
    GPIO_WriteBit(GPIOC, GPIO_Pin_6, Bit_RESET);
    GPIO_WriteBit(GPIOC, GPIO_Pin_7, Bit_RESET);
    //Вызов функции задержки
    delay_ms(WAIT);

    //Записать биты
    GPIO_WriteBit(GPIOC, GPIO_Pin_0, Bit_SET);
    GPIO_WriteBit(GPIOC, GPIO_Pin_1, Bit_SET);
    GPIO_WriteBit(GPIOC, GPIO_Pin_2, Bit_SET);
    GPIO_WriteBit(GPIOC, GPIO_Pin_3, Bit_RESET);
    GPIO_WriteBit(GPIOC, GPIO_Pin_4, Bit_RESET);
    GPIO_WriteBit(GPIOC, GPIO_Pin_5, Bit_RESET);
    GPIO_WriteBit(GPIOC, GPIO_Pin_6, Bit_SET);
    GPIO_WriteBit(GPIOC, GPIO_Pin_7, Bit_RESET);
    //Вызов функции задержки
    delay_ms(WAIT);

    //Записать биты
    GPIO_WriteBit(GPIOC, GPIO_Pin_0, Bit_RESET);
    GPIO_WriteBit(GPIOC, GPIO_Pin_1, Bit_SET);
    GPIO_WriteBit(GPIOC, GPIO_Pin_2, Bit_SET);
    GPIO_WriteBit(GPIOC, GPIO_Pin_3, Bit_SET);
    GPIO_WriteBit(GPIOC, GPIO_Pin_4, Bit_RESET);
    GPIO_WriteBit(GPIOC, GPIO_Pin_5, Bit_RESET);
    GPIO_WriteBit(GPIOC, GPIO_Pin_6, Bit_RESET);
    GPIO_WriteBit(GPIOC, GPIO_Pin_7, Bit_SET);
    //Вызов функции задержки
    delay_ms(WAIT);

    //Записать биты
    GPIO_WriteBit(GPIOC, GPIO_Pin_0, Bit_SET);
    GPIO_WriteBit(GPIOC, GPIO_Pin_1, Bit_RESET);
    GPIO_WriteBit(GPIOC, GPIO_Pin_2, Bit_SET);
    GPIO_WriteBit(GPIOC, GPIO_Pin_3, Bit_SET);
    GPIO_WriteBit(GPIOC, GPIO_Pin_4, Bit_SET);
    GPIO_WriteBit(GPIOC, GPIO_Pin_5, Bit_RESET);
    GPIO_WriteBit(GPIOC, GPIO_Pin_6, Bit_RESET);
    GPIO_WriteBit(GPIOC, GPIO_Pin_7, Bit_RESET);
    //Вызов функции задержки
    delay_ms(WAIT);

    //Записать 0 бит
    GPIO_WriteBit(GPIOC, GPIO_Pin_0, Bit_RESET);
    GPIO_WriteBit(GPIOC, GPIO_Pin_1, Bit_SET);
    GPIO_WriteBit(GPIOC, GPIO_Pin_2, Bit_RESET);
    GPIO_WriteBit(GPIOC, GPIO_Pin_3, Bit_SET);
    GPIO_WriteBit(GPIOC, GPIO_Pin_4, Bit_SET);
    GPIO_WriteBit(GPIOC, GPIO_Pin_5, Bit_SET);
    GPIO_WriteBit(GPIOC, GPIO_Pin_6, Bit_RESET);
    GPIO_WriteBit(GPIOC, GPIO_Pin_7, Bit_RESET);
    //Вызов функции задержки
    delay_ms(WAIT);

    //Записать биты
    GPIO_WriteBit(GPIOC, GPIO_Pin_0, Bit_RESET);
    GPIO_WriteBit(GPIOC, GPIO_Pin_1, Bit_RESET);
    GPIO_WriteBit(GPIOC, GPIO_Pin_2, Bit_SET);
    GPIO_WriteBit(GPIOC, GPIO_Pin_3, Bit_RESET);
    GPIO_WriteBit(GPIOC, GPIO_Pin_4, Bit_SET);
    GPIO_WriteBit(GPIOC, GPIO_Pin_5, Bit_SET);
    GPIO_WriteBit(GPIOC, GPIO_Pin_6, Bit_SET);
    GPIO_WriteBit(GPIOC, GPIO_Pin_7, Bit_RESET);
    //Вызов функции задержки
    delay_ms(WAIT);
}


