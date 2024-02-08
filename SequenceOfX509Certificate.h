/*
 * Generated by asn1c-0.9.29-DF (http://lionet.info/asn1c)
 * From ASN.1 module "Ieee1609Dot2Dot1Protocol"
 * 	found in "../../asn1/../ttcn/AtsPki/lib/asn1/ieee_1609.2.1/Ieee1609Dot2Dot1Protocol.asn"
 * 	`asn1c -no-gen-example -pdu=Iso21177AccessControlPdu -pdu=ExtendedAuthPdu -pdu=EnhancedAuthPdu -pdu=SecurityMgmtInfoPdu -pdu=SessionExtensionPdu -pdu=Iso21177AdaptorLayerPdu -pdu=EtsiTs103097Data -pdu=EtsiTs103097Certificate -fcompound-names`
 */


/* Including external dependencies */
#include "X509Certificate.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#ifndef	_SequenceOfX509Certificate_H_
#define	_SequenceOfX509Certificate_H_


#include <asn_application.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SequenceOfX509Certificate */
typedef struct SequenceOfX509Certificate {
	A_SEQUENCE_OF(X509Certificate_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SequenceOfX509Certificate_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SequenceOfX509Certificate;
extern asn_SET_OF_specifics_t asn_SPC_SequenceOfX509Certificate_specs_1;
extern asn_TYPE_member_t asn_MBR_SequenceOfX509Certificate_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _SequenceOfX509Certificate_H_ */
#include <asn_internal.h>