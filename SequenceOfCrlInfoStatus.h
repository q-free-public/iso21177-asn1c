/*
 * Generated by asn1c-0.9.29-DF (http://lionet.info/asn1c)
 * From ASN.1 module "Ieee1609Dot2Dot1CertManagement"
 * 	found in "../../asn1/../ttcn/AtsPki/lib/asn1/ieee_1609.2.1/Ieee1609Dot2Dot1CertManagement.asn"
 * 	`asn1c -no-gen-example -pdu=Iso21177AccessControlPdu -pdu=ExtendedAuthPdu -pdu=EnhancedAuthPdu -pdu=SecurityMgmtInfoPdu -pdu=SessionExtensionPdu -pdu=Iso21177AdaptorLayerPdu -pdu=EtsiTs103097Data -pdu=EtsiTs103097Certificate -fcompound-names`
 */


/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#ifndef	_SequenceOfCrlInfoStatus_H_
#define	_SequenceOfCrlInfoStatus_H_


#include <asn_application.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CrlInfoStatus;

/* SequenceOfCrlInfoStatus */
typedef struct SequenceOfCrlInfoStatus {
	A_SEQUENCE_OF(struct CrlInfoStatus) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SequenceOfCrlInfoStatus_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SequenceOfCrlInfoStatus;
extern asn_SET_OF_specifics_t asn_SPC_SequenceOfCrlInfoStatus_specs_1;
extern asn_TYPE_member_t asn_MBR_SequenceOfCrlInfoStatus_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CrlInfoStatus.h"

#endif	/* _SequenceOfCrlInfoStatus_H_ */
#include <asn_internal.h>
