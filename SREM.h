/*
 * Generated by asn1c-0.9.29-DF (http://lionet.info/asn1c)
 * From ASN.1 module "SREM-PDU-Descriptions"
 * 	found in "../../asn1/../ttcn/AtsIS/lib/asn1/SREM_PDU_Descriptions.asn"
 * 	`asn1c -no-gen-example -pdu=Iso21177AccessControlPdu -pdu=ExtendedAuthPdu -pdu=EnhancedAuthPdu -pdu=SecurityMgmtInfoPdu -pdu=SessionExtensionPdu -pdu=Iso21177AdaptorLayerPdu -pdu=EtsiTs103097Data -pdu=EtsiTs103097Certificate -fcompound-names`
 */


/* Including external dependencies */
#include "ItsPduHeader.h"
#include "SignalRequestMessage.h"
#include <constr_SEQUENCE.h>
#ifndef	_SREM_H_
#define	_SREM_H_


#include <asn_application.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SREM */
typedef struct SREM {
	ItsPduHeader_t	 header;
	SignalRequestMessage_t	 srm;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SREM_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SREM;

#ifdef __cplusplus
}
#endif

#endif	/* _SREM_H_ */
#include <asn_internal.h>