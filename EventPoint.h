/*
 * Generated by asn1c-0.9.29-DF (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "../../asn1/../ttcn/AtsCAM/lib/asn1/cdd/ITS_Container.asn"
 * 	`asn1c -no-gen-example -pdu=Iso21177AccessControlPdu -pdu=ExtendedAuthPdu -pdu=EnhancedAuthPdu -pdu=SecurityMgmtInfoPdu -pdu=SessionExtensionPdu -pdu=Iso21177AdaptorLayerPdu -pdu=EtsiTs103097Data -pdu=EtsiTs103097Certificate -fcompound-names`
 */


/* Including external dependencies */
#include "DeltaReferencePosition.h"
#include "PathDeltaTime.h"
#include "InformationQuality.h"
#include <constr_SEQUENCE.h>
#ifndef	_EventPoint_H_
#define	_EventPoint_H_


#include <asn_application.h>

#ifdef __cplusplus
extern "C" {
#endif

/* EventPoint */
typedef struct EventPoint {
	DeltaReferencePosition_t	 eventPosition;
	PathDeltaTime_t	*eventDeltaTime;	/* OPTIONAL */
	InformationQuality_t	 informationQuality;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} EventPoint_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EventPoint;
extern asn_SEQUENCE_specifics_t asn_SPC_EventPoint_specs_1;
extern asn_TYPE_member_t asn_MBR_EventPoint_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _EventPoint_H_ */
#include <asn_internal.h>
