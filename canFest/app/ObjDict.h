
/*!
** @file   ObjDict.h
** @author CAN Festival -- NNP
** @date   OD File produced: 2011-03-06 21:48:07.869000
**
** @brief This file is generated by the NNP Tool -- Object Dictionary Editor, as 
** originally developed by CAN Festival and modified by the NNP Team. 
** Specific contents are detailed in Object Dictionary Template.
** Editor modification: 4/29/2010 -- rev 1.0.0 
**
** This ObjDict.h file is generated from PulseGenerator4ch.odnn
** 
*/  

/*This object dictionary file should only be modified by the Object Dictionary Editor */

#ifndef OBJDICT_H
#define OBJDICT_H

#include "data.h"

#define APP_REV 178
#define PATTERN_ARRAYSIZE 20 /*number of pattern pts */

/* Prototypes of function provided by object dictionnary */
/* Master node data struct */
extern CO_Data ObjDict_Data;
UNS32 ObjDict_valueRangeTest (UNS8 typeValue, void * value);
const indextable * ObjDict_scanIndexOD (UNS16 wIndex, UNS32 * errorCode, ODCallback_t **callbacks);
extern UNS32 ObjDict_obj1018_Serial_Number;

extern UNS8 clockRate;		/* Mapped at index 0x2000, subindex 0x00*/
extern UNS8 Control_ScriptStatus;		/* Mapped at index 0x2001, subindex 0x01 */
extern UNS8 Control_CurrentGroup;		/* Mapped at index 0x2001, subindex 0x02 */
extern UNS8 Control_profileWrite;
extern UNS8 Control_profileSelect;
extern UNS8 X_Network[4];		/* Mapped at index 0x2002, subindex 0x00*/
extern UNS16 Temperature;		/* Mapped at index 0x2003, subindex 0x00*/
extern UNS8 Status_modeSelect;		/* Mapped at index 0x2010, subindex 0x01 */
extern UNS8 Status_numTPDO;
extern UNS8 Status_numRPDO;
extern UNS8 Status_channelSelect;		/* Mapped at index 0x2010, subindex 0x02 */
extern UNS8 Status_profileSelect;		/* Mapped at index 0x2010, subindex 0x03 */
extern UNS8 Status_profileWrite;		/* Mapped at index 0x2010, subindex 0x04 */
extern UNS8 Status_NodeId;
extern UNS16 Status_TestValue;
extern UNS16 Status_NodeTest;
extern UNS8 Accelerometers[4];		/* Mapped at index 0x2011, subindex 0x00*/
extern UNS8 AccelerometersFiltered[4];      /* Mapped at index 0x2011, subindex 0x01 */
extern INTEGER8 AccelerometersTilt[4];
extern UNS8 AccelerometerSettings;  /*0x2012*/
extern UNS32 AddressRequest;
extern UNS8 memorySelect;
extern UNS8 triggerReadMemory;
extern UNS8 writeByteMemory;
extern UNS8 statusByteMemory;
extern UNS8 ReadMemoryData[36];
extern UNS16 addressCounter;
extern UNS16 CAN_FormErrors;
extern UNS16 CAN_StuffErrors;
extern UNS16 CAN_BitErrors;
extern UNS16 CAN_OtherErrors;
extern UNS16 CAN_TotalErrors;
extern UNS16 CAN_Rx_ErrCounter;
extern UNS16 CAN_Tx_ErrCounter;
extern UNS16 CAN_Receive_BEI;
extern UNS16 CAN_Receive_Messages;
extern UNS16 CAN_Transmit_Messages;
extern UNS16 CAN_Interrupts_Off;
extern UNS16 RestoreList[9];
extern UNS8 DiagnosticsEnabled;
extern UNS8 Diagnostic_VIN;
extern UNS8 Diagnostic_VIC;
extern UNS8 Diagnostic_VOS;
extern UNS8 Diagnostic_3V3;
extern UNS8 CommandValues[8];
extern UNS8 Channel_Config_AmpMax[8];		/* Mapped at index 0x3210, subindex 0x01 */
extern UNS16 Channel_Config_Period[4];		/* Mapped at index 0x3210, subindex 0x02 */
extern UNS16 Channel_StimVOS;
extern UNS16 Channel_MinVOS;
extern UNS8 Channel_InRegulation[4];

extern UNS8 X_ChannelMap[4];		/* Mapped at index 0x3211, subindex 0x00*/
extern UNS8 Chan1_SetValues[2];  /* Mapped at index 0x3212, subindex 0x01 */
extern UNS8 Chan2_SetValues[2];;
extern UNS8 Chan3_SetValues[2];
extern UNS8 Chan4_SetValues[2];		/* Mapped at index 0x3212, subindex 0x00*/
extern UNS8 Y_Current[8];		/* Mapped at index 0x3213, subindex 0x00*/
extern UNS8 FuncGroup_ChanPattern01;
extern UNS8 FuncGroup_ChanPattern02;
extern UNS8 FuncGroup_ChanPattern03;
extern UNS8 FuncGroup_ChanPattern04;
extern UNS8 FuncGroup_ChanPattern05;
extern UNS8 FuncGroup_ChanPattern06;
extern UNS8 FuncGroup_ChanPattern07;
extern UNS8 FuncGroup_ChanPattern08;
extern UNS8 FuncGroup_ChanPattern09;
extern UNS8 FuncGroup_ChanPattern10;
extern UNS8 FuncGroup_ChanPattern11;
extern UNS8 FuncGroup_ChanPattern12;
extern UNS8 FuncGroup_ChanPattern13;
extern UNS8 FuncGroup_ChanPattern14;
extern UNS8 FuncGroup_ChanPattern15;
extern UNS8 FuncGroup_ChanPattern16;
extern UNS8 FuncGroup_ChanPattern17;
extern UNS8 FuncGroup_ChanPattern18;
extern UNS8 FuncGroup_ChanPattern19;
extern UNS8 FuncGroup_ChanPattern20;
extern UNS8 FuncGroup_ChanPattern21;
extern UNS8 FuncGroup_ChanPattern22;
extern UNS8 FuncGroup_ChanPattern23;
extern UNS8 FuncGroup_ChanPattern24;
extern UNS8 FuncGroup_ChanPattern25;
extern UNS8 FuncGroup_ChanPattern26;
extern UNS8 FuncGroup_ChanPattern27;
extern UNS8 FuncGroup_ChanPattern28;
extern UNS8 FuncGroup_ChanPattern29;
extern UNS8 FuncGroup_ChanPattern30;
extern UNS8 FuncGroup_ChanPattern31;
extern UNS8 FuncGroup_ChanPattern32;
extern UNS8 FuncGroup_ChanPattern33;
extern UNS8 FuncGroup_ChanPattern34;
extern UNS8 FuncGroup_ChanPattern35;
extern UNS8 FuncGroup_ChanPattern36;
extern UNS8 FuncGroup_ChanPattern37;
extern UNS8 FuncGroup_ChanPattern38;
extern UNS8 FuncGroup_ChanPattern39;
extern UNS8 FuncGroup_ChanPattern40;
extern UNS8 FuncGroup_ChanPattern41;
extern UNS8 FuncGroup_ChanPattern42;
extern UNS8 FuncGroup_ChanPattern43;
extern UNS8 FuncGroup_ChanPattern44;
extern UNS8 FuncGroup_ChanPattern45;
extern UNS8 FuncGroup_ChanPattern46;
extern UNS8 FuncGroup_ChanPattern47;
extern UNS8 FuncGroup_ChanPattern48;
extern UNS8 Num_ChanPatterns;        //0-48
extern UNS8 channel_PatternTransfer;
extern UNS8 commandID_PatternTransfer;
extern UNS8 numPoints_PatternTransfer;
extern UNS8 xValues_PatternTransfer[PATTERN_ARRAYSIZE];
extern UNS8 pwValues_PatternTransfer[PATTERN_ARRAYSIZE];
extern UNS8 ampValues_PatternTransfer[PATTERN_ARRAYSIZE];


extern UNS8 StimVOSsteps;
extern UNS8 MinVOSsteps;
extern UNS8 SetupAnode;

extern UNS8 StimTiming[4];
extern UNS8 SyncInterval[4];
extern UNS8 SyncPush; 
extern UNS8 AutoSyncTime;
extern UNS8 MaxAutoSyncCount;
extern UNS8 DischargeTime;

extern UNS8 AutoSyncCount;
extern UNS16 TotalAutoSyncCount; 
extern UNS16 MaxAutoSyncExceededCount; 
extern UNS8 ActualStimTiming[4];
extern UNS8 MaxActualStimTiming[4];

extern UNS8 Channel_IPI;
                         
                         
extern UNS8 ActiveFunctionGroups[4];

#endif // OBJDICT_H
