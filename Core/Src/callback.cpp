#include"tim.h"
#include"gpio.h"

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
{
    if (htim == &htim6)
    {
        HAL_GPIO_TogglePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin);
    }
}
void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
        HAL_TIM_PWM_Stop_IT(&htim1, TIM_CHANNEL_2);
}