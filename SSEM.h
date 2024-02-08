/*
 * Generated by asn1c-0.9.29-DF (http://lionet.info/asn1c)
 * From ASN.1 module "SSEM-PDU-Descriptions"
 * 	found in "../../asn1/../ttcn/AtsIS/lib/asn1/SSEM_PDU_Descriptions.asn"
 * 	`asn1c -no-gen-example -pdu=Iso21177AccessControlPdu -pdu=ExtendedAuthPdu -pdu=EnhancedAuthPdu -pdu=SecurityMgmtInfoPdu -pdu=SessionExtensionPdu -pdu=Iso21177AdaptorLayerPdu -pdu=EtsiTs103097Data -pdu=EtsiTs103097Certificate -fcompound-names`
 */


/* Including external dependencies */
#include "ItsPduHeader.h"
#include "SignalStatusMessage.h"
#include <constr_SEQUENCE.h>
#ifndef	_SSEM_H_
#define	_SSEM_H_


#include <asn_application.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SSEM */
typedef struct SSEM {
	ItsPduHeader_t	 header;
	SignalStatusMessage_t	 ssm;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SSEM_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SSEM;

#ifdef __cplusplus
}
#endif

#endif	/* _SSEM_H_ */
#include <asn_internal.h>
