/*
 * Generated by asn1c-0.9.29-DF (http://lionet.info/asn1c)
 * From ASN.1 module "Ieee1609Dot2CrlBaseTypes"
 * 	found in "../../asn1/../ttcn/AtsPki/lib/asn1/ieee_1609.2.1/Ieee1609Dot2CrlBaseTypes.asn"
 * 	`asn1c -no-gen-example -pdu=Iso21177AccessControlPdu -pdu=ExtendedAuthPdu -pdu=EnhancedAuthPdu -pdu=SecurityMgmtInfoPdu -pdu=SessionExtensionPdu -pdu=Iso21177AdaptorLayerPdu -pdu=EtsiTs103097Data -pdu=EtsiTs103097Certificate -fcompound-names`
 */


/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#ifndef	_SequenceOfGroupCrlEntry_H_
#define	_SequenceOfGroupCrlEntry_H_


#include <asn_application.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct GroupCrlEntry;

/* SequenceOfGroupCrlEntry */
typedef struct SequenceOfGroupCrlEntry {
	A_SEQUENCE_OF(struct GroupCrlEntry) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SequenceOfGroupCrlEntry_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SequenceOfGroupCrlEntry;
extern asn_SET_OF_specifics_t asn_SPC_SequenceOfGroupCrlEntry_specs_1;
extern asn_TYPE_member_t asn_MBR_SequenceOfGroupCrlEntry_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "GroupCrlEntry.h"

#endif	/* _SequenceOfGroupCrlEntry_H_ */
#include <asn_internal.h>