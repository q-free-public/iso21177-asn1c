/*
 * Generated by asn1c-0.9.29-DF (http://lionet.info/asn1c)
 * From ASN.1 module "Ieee1609Dot2BaseTypes"
 * 	found in "../../asn1/../ttcn/AtsSecurity/lib/asn1/ieee1609dot2/Ieee1609Dot2BaseTypes.asn"
 * 	`asn1c -no-gen-example -pdu=Iso21177AccessControlPdu -pdu=ExtendedAuthPdu -pdu=EnhancedAuthPdu -pdu=SecurityMgmtInfoPdu -pdu=SessionExtensionPdu -pdu=Iso21177AdaptorLayerPdu -pdu=EtsiTs103097Data -pdu=EtsiTs103097Certificate -fcompound-names`
 */


/* Including external dependencies */
#include "Uint16.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#ifndef	_SequenceOfUint16_H_
#define	_SequenceOfUint16_H_


#include <asn_application.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SequenceOfUint16 */
typedef struct SequenceOfUint16 {
	A_SEQUENCE_OF(Uint16_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SequenceOfUint16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SequenceOfUint16;
extern asn_SET_OF_specifics_t asn_SPC_SequenceOfUint16_specs_1;
extern asn_TYPE_member_t asn_MBR_SequenceOfUint16_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _SequenceOfUint16_H_ */
#include <asn_internal.h>
