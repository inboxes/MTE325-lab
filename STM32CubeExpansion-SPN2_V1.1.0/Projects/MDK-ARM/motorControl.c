
#include "motorControl.h"


// WE NEED TO CHANGE MPR
void MicrosteppingMotor_Motor1_Move(){
#define MPR_1     4			  //!< Motor Movements Per Revolution 1st option
#define MPR_2     8			  //!< Motor Movements Per Revolution 2nd option
#define DELAY_1   1000		//!< Delay time 1st option
#define DELAY_2   2500		//!< Delay time 2nd option
#define DELAY_3   10000   //!< Delay time 3rd option
  
  uint32_t Step;
  uint32_t Speed;
  uint8_t MovementPerRevolution;
  uint8_t i;
  uint8_t board, device;
  
  uint8_t id;
  
  StepperMotorBoardHandle_t *StepperMotorBoardHandle;
  MotorParameterData_t *MotorParameterDataGlobal, *MotorParameterDataSingle;
  
  #ifdef NUCLEO_USE_USART
  USART_Transmit(&huart2, "Initial values for registers:\n\r");
  USART_PrintAllRegisterValues();
  #endif

  /* Setup each X-NUCLEO-IHM02A1 Expansion Board ******************************/
  
  /* Get the parameters for the motor connected with the 1st stepper motor driver of the 1st stepper motor expansion board */
  MotorParameterDataGlobal = GetMotorParameterInitData();
  
  for (id = 0; id < EXPBRD_MOUNTED_NR; id++)
  {
    StepperMotorBoardHandle = BSP_GetExpansionBoardHandle(EXPBRD_ID(id));
    MotorParameterDataSingle = MotorParameterDataGlobal+(id*L6470DAISYCHAINSIZE);
    StepperMotorBoardHandle->Config(MotorParameterDataSingle);
  }
  
  #ifdef NUCLEO_USE_USART
  USART_Transmit(&huart2, "Custom values for registers:\n\r");
  USART_PrintAllRegisterValues();
  #endif
  
  /****************************************************************************/
  StepperMotorBoardHandle = BSP_GetExpansionBoardHandle(board);
	device = L6470_ID(0);
	MotorParameterDataSingle = MotorParameterDataGlobal+((board*L6470DAISYCHAINSIZE)+device);
  Step = ((uint32_t)MotorParameterDataSingle->fullstepsperrevolution * pow(2, MotorParameterDataSingle->step_sel)) / MovementPerRevolution;
  
  for (i=0; i<MovementPerRevolution; i++)
  {
    StepperMotorBoardHandle->Command->Move(board, device, L6470_DIR_FWD_ID, Step);
    while(StepperMotorBoardHandle->Command->CheckStatusRegisterFlag(board, device, BUSY_ID) == 0);
    HAL_Delay(DELAY_1);
  }
	
}




void MicrosteppingMotor_Motor1_Reverse(){	
#define MPR_1     4			  //!< Motor Movements Per Revolution 1st option
#define MPR_2     8			  //!< Motor Movements Per Revolution 2nd option
#define DELAY_1   1000		//!< Delay time 1st option
#define DELAY_2   2500		//!< Delay time 2nd option
#define DELAY_3   10000   //!< Delay time 3rd option
  
  uint32_t Step;
  uint32_t Speed;
  uint8_t MovementPerRevolution;
  uint8_t i;
  uint8_t board, device;
  
  uint8_t id;
  
  StepperMotorBoardHandle_t *StepperMotorBoardHandle;
  MotorParameterData_t *MotorParameterDataGlobal, *MotorParameterDataSingle;
  
  #ifdef NUCLEO_USE_USART
  USART_Transmit(&huart2, "Initial values for registers:\n\r");
  USART_PrintAllRegisterValues();
  #endif

  /* Setup each X-NUCLEO-IHM02A1 Expansion Board ******************************/
  
  /* Get the parameters for the motor connected with the 1st stepper motor driver of the 1st stepper motor expansion board */
  MotorParameterDataGlobal = GetMotorParameterInitData();
  
  for (id = 0; id < EXPBRD_MOUNTED_NR; id++)
  {
    StepperMotorBoardHandle = BSP_GetExpansionBoardHandle(EXPBRD_ID(id));
    MotorParameterDataSingle = MotorParameterDataGlobal+(id*L6470DAISYCHAINSIZE);
    StepperMotorBoardHandle->Config(MotorParameterDataSingle);
  }
  
  #ifdef NUCLEO_USE_USART
  USART_Transmit(&huart2, "Custom values for registers:\n\r");
  USART_PrintAllRegisterValues();
  #endif
  
  /****************************************************************************/
  StepperMotorBoardHandle = BSP_GetExpansionBoardHandle(board);
	device = L6470_ID(0);
	MotorParameterDataSingle = MotorParameterDataGlobal+((board*L6470DAISYCHAINSIZE)+device);
  Step = ((uint32_t)MotorParameterDataSingle->fullstepsperrevolution * pow(2, MotorParameterDataSingle->step_sel)) / MovementPerRevolution;
  
  for (i=0; i<MovementPerRevolution; i++)
  {
    StepperMotorBoardHandle->Command->Move(board, device, L6470_DIR_REV_ID, Step);
    while(StepperMotorBoardHandle->Command->CheckStatusRegisterFlag(board, device, BUSY_ID) == 0);
    HAL_Delay(DELAY_1);
  }
}




void MicrosteppingMotor_Motor2_Move(){
#define MPR_1     4			  //!< Motor Movements Per Revolution 1st option
#define MPR_2     8			  //!< Motor Movements Per Revolution 2nd option
#define DELAY_1   1000		//!< Delay time 1st option
#define DELAY_2   2500		//!< Delay time 2nd option
#define DELAY_3   10000   //!< Delay time 3rd option
  
  uint32_t Step;
  uint32_t Speed;
  uint8_t MovementPerRevolution;
  uint8_t i;
  uint8_t board, device;
  
  uint8_t id;
  
  StepperMotorBoardHandle_t *StepperMotorBoardHandle;
  MotorParameterData_t *MotorParameterDataGlobal, *MotorParameterDataSingle;
  
  #ifdef NUCLEO_USE_USART
  USART_Transmit(&huart2, "Initial values for registers:\n\r");
  USART_PrintAllRegisterValues();
  #endif

  /* Setup each X-NUCLEO-IHM02A1 Expansion Board ******************************/
  
  /* Get the parameters for the motor connected with the 1st stepper motor driver of the 1st stepper motor expansion board */
  MotorParameterDataGlobal = GetMotorParameterInitData();
  
  for (id = 0; id < EXPBRD_MOUNTED_NR; id++)
  {
    StepperMotorBoardHandle = BSP_GetExpansionBoardHandle(EXPBRD_ID(id));
    MotorParameterDataSingle = MotorParameterDataGlobal+(id*L6470DAISYCHAINSIZE);
    StepperMotorBoardHandle->Config(MotorParameterDataSingle);
  }
  
  #ifdef NUCLEO_USE_USART
  USART_Transmit(&huart2, "Custom values for registers:\n\r");
  USART_PrintAllRegisterValues();
  #endif
  
  /****************************************************************************/
  StepperMotorBoardHandle = BSP_GetExpansionBoardHandle(board);
	device = L6470_ID(1);
	MotorParameterDataSingle = MotorParameterDataGlobal+((board*L6470DAISYCHAINSIZE)+device);
  Step = ((uint32_t)MotorParameterDataSingle->fullstepsperrevolution * pow(2, MotorParameterDataSingle->step_sel)) / MovementPerRevolution;
  
  for (i=0; i<MovementPerRevolution; i++)
  {
    StepperMotorBoardHandle->Command->Move(board, device, L6470_DIR_FWD_ID, Step);
    while(StepperMotorBoardHandle->Command->CheckStatusRegisterFlag(board, device, BUSY_ID) == 0);
    HAL_Delay(DELAY_1);
  }	
	
}




void MicrosteppingMotor_Motor2_Reverse(){
#define MPR_1     4			  //!< Motor Movements Per Revolution 1st option
#define MPR_2     8			  //!< Motor Movements Per Revolution 2nd option
#define DELAY_1   1000		//!< Delay time 1st option
#define DELAY_2   2500		//!< Delay time 2nd option
#define DELAY_3   10000   //!< Delay time 3rd option
  
  uint32_t Step;
  uint32_t Speed;
  uint8_t MovementPerRevolution;
  uint8_t i;
  uint8_t board, device;
  
  uint8_t id;
  
  StepperMotorBoardHandle_t *StepperMotorBoardHandle;
  MotorParameterData_t *MotorParameterDataGlobal, *MotorParameterDataSingle;
  
  #ifdef NUCLEO_USE_USART
  USART_Transmit(&huart2, "Initial values for registers:\n\r");
  USART_PrintAllRegisterValues();
  #endif

  /* Setup each X-NUCLEO-IHM02A1 Expansion Board ******************************/
  
  /* Get the parameters for the motor connected with the 1st stepper motor driver of the 1st stepper motor expansion board */
  MotorParameterDataGlobal = GetMotorParameterInitData();
  
  for (id = 0; id < EXPBRD_MOUNTED_NR; id++)
  {
    StepperMotorBoardHandle = BSP_GetExpansionBoardHandle(EXPBRD_ID(id));
    MotorParameterDataSingle = MotorParameterDataGlobal+(id*L6470DAISYCHAINSIZE);
    StepperMotorBoardHandle->Config(MotorParameterDataSingle);
  }
  
  #ifdef NUCLEO_USE_USART
  USART_Transmit(&huart2, "Custom values for registers:\n\r");
  USART_PrintAllRegisterValues();
  #endif
  
  /****************************************************************************/
  StepperMotorBoardHandle = BSP_GetExpansionBoardHandle(board);
	device = L6470_ID(1);
	MotorParameterDataSingle = MotorParameterDataGlobal+((board*L6470DAISYCHAINSIZE)+device);
  Step = ((uint32_t)MotorParameterDataSingle->fullstepsperrevolution * pow(2, MotorParameterDataSingle->step_sel)) / MovementPerRevolution;
  
  for (i=0; i<MovementPerRevolution; i++)
  {
    StepperMotorBoardHandle->Command->Move(board, device, L6470_DIR_REV_ID, Step);
    while(StepperMotorBoardHandle->Command->CheckStatusRegisterFlag(board, device, BUSY_ID) == 0);
    HAL_Delay(DELAY_1);
  }		
}




void MicrosteppingMotor_BothMotor_Stop(){
  uint8_t i;
  uint8_t board, device;
  
  uint8_t id;
	
	StepperMotorBoardHandle_t *StepperMotorBoardHandle;
  MotorParameterData_t *MotorParameterDataGlobal, *MotorParameterDataSingle;
	
	#ifdef NUCLEO_USE_USART
  USART_Transmit(&huart2, "Initial values for registers:\n\r");
  USART_PrintAllRegisterValues();
  #endif
	
	MotorParameterDataGlobal = GetMotorParameterInitData();
  
  for (id = 0; id < EXPBRD_MOUNTED_NR; id++)
  {
    StepperMotorBoardHandle = BSP_GetExpansionBoardHandle(EXPBRD_ID(id));
    MotorParameterDataSingle = MotorParameterDataGlobal+(id*L6470DAISYCHAINSIZE);
    StepperMotorBoardHandle->Config(MotorParameterDataSingle);
  }
  
  #ifdef NUCLEO_USE_USART
  USART_Transmit(&huart2, "Custom values for registers:\n\r");
  USART_PrintAllRegisterValues();
  #endif
	
	
	for (board = EXPBRD_ID(0); board <= EXPBRD_ID(EXPBRD_MOUNTED_NR-1); board++)
  {
    
    for (device = L6470_ID(0); device <= L6470_ID(L6470DAISYCHAINSIZE-1); device++)
    {
      /* Prepare the stepper driver to be ready to perform a command */
      StepperMotorBoardHandle->StepperMotorDriverHandle[device]->Command->PrepareHardStop(device);
    }
    
    StepperMotorBoardHandle->Command->PerformPreparedApplicationCommand();
  }
	
}




void MicrosteppingMotor_Motor1_Stop(){
	uint8_t i;
  uint8_t board, device;
  
  uint8_t id;
	
	StepperMotorBoardHandle_t *StepperMotorBoardHandle;
  MotorParameterData_t *MotorParameterDataGlobal, *MotorParameterDataSingle;
	
	#ifdef NUCLEO_USE_USART
  USART_Transmit(&huart2, "Initial values for registers:\n\r");
  USART_PrintAllRegisterValues();
  #endif
	
	MotorParameterDataGlobal = GetMotorParameterInitData();
  
  for (id = 0; id < EXPBRD_MOUNTED_NR; id++)
  {
    StepperMotorBoardHandle = BSP_GetExpansionBoardHandle(EXPBRD_ID(id));
    MotorParameterDataSingle = MotorParameterDataGlobal+(id*L6470DAISYCHAINSIZE);
    StepperMotorBoardHandle->Config(MotorParameterDataSingle);
  }
  
  #ifdef NUCLEO_USE_USART
  USART_Transmit(&huart2, "Custom values for registers:\n\r");
  USART_PrintAllRegisterValues();
  #endif
	
	for (board = EXPBRD_ID(0); board <= EXPBRD_ID(EXPBRD_MOUNTED_NR-1); board++)
  {
    device = L6470_ID(0);
		StepperMotorBoardHandle->StepperMotorDriverHandle[device]->Command->PrepareHardStop(device);
		StepperMotorBoardHandle->Command->PerformPreparedApplicationCommand();
   
  }	

}



void MicrosteppingMotor_Motor2_Stop(){
uint8_t i;
  uint8_t board, device;
  
  uint8_t id;
	
	StepperMotorBoardHandle_t *StepperMotorBoardHandle;
  MotorParameterData_t *MotorParameterDataGlobal, *MotorParameterDataSingle;
	
	#ifdef NUCLEO_USE_USART
  USART_Transmit(&huart2, "Initial values for registers:\n\r");
  USART_PrintAllRegisterValues();
  #endif
	
	MotorParameterDataGlobal = GetMotorParameterInitData();
  
  for (id = 0; id < EXPBRD_MOUNTED_NR; id++)
  {
    StepperMotorBoardHandle = BSP_GetExpansionBoardHandle(EXPBRD_ID(id));
    MotorParameterDataSingle = MotorParameterDataGlobal+(id*L6470DAISYCHAINSIZE);
    StepperMotorBoardHandle->Config(MotorParameterDataSingle);
  }
  
  #ifdef NUCLEO_USE_USART
  USART_Transmit(&huart2, "Custom values for registers:\n\r");
  USART_PrintAllRegisterValues();
  #endif
	
	for (board = EXPBRD_ID(0); board <= EXPBRD_ID(EXPBRD_MOUNTED_NR-1); board++)
  {
    device = L6470_ID(1);
		StepperMotorBoardHandle->StepperMotorDriverHandle[device]->Command->PrepareHardStop(device);
		StepperMotorBoardHandle->Command->PerformPreparedApplicationCommand();
   
  }		
}