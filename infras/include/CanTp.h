/**
 * SSAS - Simple Smart Automotive Software
 * Copyright (C) 2021 Parai Wang <parai@foxmail.com>
 *
 * ref: Specification of CAN Transport Layer AUTOSAR CP Release 4.4.0
 */
#ifndef CANTP_H
#define CANTP_H
/* ================================ [ INCLUDES  ] ============================================== */
#include "ComStack_Types.h"
/* ================================ [ MACROS    ] ============================================== */
/* ================================ [ TYPES     ] ============================================== */
typedef struct CanTp_Config_s CanTp_ConfigType;
/* ================================ [ DECLARES  ] ============================================== */
/* ================================ [ DATAS     ] ============================================== */
/* ================================ [ LOCALS    ] ============================================== */
/* ================================ [ FUNCTIONS ] ============================================== */
/* @SWS_CanTp_00208 */
void CanTp_Init(const CanTp_ConfigType *CfgPtr);

/* @SWS_CanTp_00214 */
void CanTp_RxIndication(PduIdType RxPduId, const PduInfoType *PduInfoPtr);
/* @SWS_CanTp_00215 */
void CanTp_TxConfirmation(PduIdType TxPduId, Std_ReturnType result);

/* @SWS_CanTp_00212 */
Std_ReturnType CanTp_Transmit(PduIdType TxPduId, const PduInfoType *PduInfoPtr);

/* @SWS_CanTp_00213 */
void CanTp_MainFunction(void);
#endif /* CANTP_H */